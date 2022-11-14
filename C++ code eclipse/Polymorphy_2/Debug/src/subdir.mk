################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Polymorphy_2.cpp \
../src/animal.cpp 

CPP_DEPS += \
./src/Polymorphy_2.d \
./src/animal.d 

OBJS += \
./src/Polymorphy_2.o \
./src/animal.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Polymorphy_2.d ./src/Polymorphy_2.o ./src/animal.d ./src/animal.o

.PHONY: clean-src

