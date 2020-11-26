################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/capital_case\ and\ lower\ case.c 

OBJS += \
./src/capital_case\ and\ lower\ case.o 

C_DEPS += \
./src/capital_case\ and\ lower\ case.d 


# Each subdirectory must supply rules for building sources it contributes
src/capital_case\ and\ lower\ case.o: ../src/capital_case\ and\ lower\ case.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/capital_case and lower case.d" -MT"src/capital_case\ and\ lower\ case.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


