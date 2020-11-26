################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/pointer\ lab2.c 

OBJS += \
./src/pointer\ lab2.o 

C_DEPS += \
./src/pointer\ lab2.d 


# Each subdirectory must supply rules for building sources it contributes
src/pointer\ lab2.o: ../src/pointer\ lab2.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/pointer lab2.d" -MT"src/pointer\ lab2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


