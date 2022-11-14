################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ITimer.cpp \
../src/LPCTimer.cpp \
../src/Stepper_Driver.cpp 

CPP_DEPS += \
./src/ITimer.d \
./src/LPCTimer.d \
./src/Stepper_Driver.d 

OBJS += \
./src/ITimer.o \
./src/LPCTimer.o \
./src/Stepper_Driver.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/ITimer.d ./src/ITimer.o ./src/LPCTimer.d ./src/LPCTimer.o ./src/Stepper_Driver.d ./src/Stepper_Driver.o

.PHONY: clean-src

