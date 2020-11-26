################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/pointer\ lab3.c 

OBJS += \
./src/pointer\ lab3.o 

C_DEPS += \
./src/pointer\ lab3.d 


# Each subdirectory must supply rules for building sources it contributes
src/pointer\ lab3.o: ../src/pointer\ lab3.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/pointer lab3.d" -MT"src/pointer\ lab3.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


