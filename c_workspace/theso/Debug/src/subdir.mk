################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/char2utf.c \
../src/com_myapp_callyouself_AppString.c \
../src/theso.c 

OBJS += \
./src/char2utf.o \
./src/com_myapp_callyouself_AppString.o \
./src/theso.o 

C_DEPS += \
./src/char2utf.d \
./src/com_myapp_callyouself_AppString.d \
./src/theso.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


