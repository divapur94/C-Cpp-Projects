################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Gpio_1.cpp \
../src/IGpio.cpp \
../src/KinetisGpio.cpp 

CPP_DEPS += \
./src/Gpio_1.d \
./src/IGpio.d \
./src/KinetisGpio.d 

OBJS += \
./src/Gpio_1.o \
./src/IGpio.o \
./src/KinetisGpio.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Gpio_1.d ./src/Gpio_1.o ./src/IGpio.d ./src/IGpio.o ./src/KinetisGpio.d ./src/KinetisGpio.o

.PHONY: clean-src

