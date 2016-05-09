################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/androidLinux.c \
../src/com_myapp_androidlinux_nativejni_NativeJni.c 

OBJS += \
./src/androidLinux.o \
./src/com_myapp_androidlinux_nativejni_NativeJni.o 

C_DEPS += \
./src/androidLinux.d \
./src/com_myapp_androidlinux_nativejni_NativeJni.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


