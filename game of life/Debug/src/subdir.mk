################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/game\ of\ life.c 

OBJS += \
./src/game\ of\ life.o 

C_DEPS += \
./src/game\ of\ life.d 


# Each subdirectory must supply rules for building sources it contributes
src/game\ of\ life.o: ../src/game\ of\ life.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/game of life.d" -MT"src/game\ of\ life.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


