################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/prime\ no.c 

OBJS += \
./src/prime\ no.o 

C_DEPS += \
./src/prime\ no.d 


# Each subdirectory must supply rules for building sources it contributes
src/prime\ no.o: ../src/prime\ no.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/prime no.d" -MT"src/prime\ no.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


