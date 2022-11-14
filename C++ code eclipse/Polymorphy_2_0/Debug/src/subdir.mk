################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Animal.cpp \
../src/Polymorphy_2_0.cpp 

CPP_DEPS += \
./src/Animal.d \
./src/Polymorphy_2_0.d 

OBJS += \
./src/Animal.o \
./src/Polymorphy_2_0.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Animal.d ./src/Animal.o ./src/Polymorphy_2_0.d ./src/Polymorphy_2_0.o

.PHONY: clean-src

