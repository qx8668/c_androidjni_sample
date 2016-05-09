/*
 * char2utfhead.c
 *
 *  Created on: 2011-6-8
 *      Author: liuquanxing
 */
#include "char2utf.h"

int char2utf(char* cp) {
	char* bytes;

	while (*bytes != '\0') {
		unsigned char utf8 = *(bytes++);
		// Switch on the high four bits.
		switch (utf8 >> 4) {
		case 0x00:
		case 0x01:
		case 0x02:
		case 0x03:
		case 0x04:
		case 0x05:
		case 0x06:
		case 0x07: {
			// Bit pattern 0xxx. No need for any extra bytes.
			break;
		}
		case 0x08:
		case 0x09:
		case 0x0a:
		case 0x0b:
		case 0x0f: {
			/*
			 * Bit pattern 10xx or 1111, which are illegal start bytes.
			 * Note: 1111 is valid for normal UTF-8, but not the
			 * modified UTF-8 used here.
			 */
			//LOGW("JNI WARNING: illegal start byte 0x%x\n", utf8);
			*((unsigned char *) (bytes - 1)) = 0x3f;
			break;
		}
		case 0x0e: {
			// Bit pattern 1110, so there are two additional bytes.
			utf8 = *(bytes++);
			if ((utf8 & 0xc0) != 0x80) {
				//LOGW("JNI WARNING: illegal continuation byte 0x%x\n", utf8);
				*((unsigned char *) (bytes - 1)) = 0x80;
			}
			// Fall through to take care of the final byte.
		}
		case 0x0c:
		case 0x0d: {
			// Bit pattern 110x, so there is one additional byte.
			utf8 = *(bytes++);
			if ((utf8 & 0xc0) != 0x80) {
				//LOGW("JNI WARNING: illegal continuation byte 0x%x\n", utf8);
				*((unsigned char *) (bytes - 1)) = 0x80;
			}
			break;
		}
		}
	}
	return 0;
}
