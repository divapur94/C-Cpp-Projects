################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Gpio_0.cpp \
../src/IGpio.cpp \
../src/KinetisGpio.cpp \
../src/SimulationGpio.cpp 

CPP_DEPS += \
./src/Gpio_0.d \
./src/IGpio.d \
./src/KinetisGpio.d \
./src/SimulationGpio.d 

OBJS += \
./src/Gpio_0.o \
./src/IGpio.o \
./src/KinetisGpio.o \
./src/SimulationGpio.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Gpio_0.d ./src/Gpio_0.o ./src/IGpio.d ./src/IGpio.o ./src/KinetisGpio.d ./src/KinetisGpio.o ./src/SimulationGpio.d ./src/SimulationGpio.o

.PHONY: clean-src

