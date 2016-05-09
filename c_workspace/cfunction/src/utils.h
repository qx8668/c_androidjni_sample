/*
 * utils.h
 *
 *  Created on: 2011-3-14
 *      Author: liuquanxing
 */

#ifndef UTILS_H_
#define UTILS_H_

unsigned int strLen(const char *str)
{
    const char *p = str;
    while(*p) p ++;
    return (unsigned int)(p - str);
}

#endif /* UTILS_H_ */
