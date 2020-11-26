################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/cells.c \
../src/display.c \
../src/gameoflife.c \
../src/gol.c 

OBJS += \
./src/cells.o \
./src/display.o \
./src/gameoflife.o \
./src/gol.o 

C_DEPS += \
./src/cells.d \
./src/display.d \
./src/gameoflife.d \
./src/gol.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


