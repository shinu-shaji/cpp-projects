################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/c\ and\ s\ letter.cpp 

OBJS += \
./src/c\ and\ s\ letter.o 

CPP_DEPS += \
./src/c\ and\ s\ letter.d 


# Each subdirectory must supply rules for building sources it contributes
src/c\ and\ s\ letter.o: ../src/c\ and\ s\ letter.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/c and s letter.d" -MT"src/c\ and\ s\ letter.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


