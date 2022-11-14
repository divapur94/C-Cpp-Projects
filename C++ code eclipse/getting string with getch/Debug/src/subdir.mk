################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/getting\ string\ with\ getch.cpp 

CPP_DEPS += \
./src/getting\ string\ with\ getch.d 

OBJS += \
./src/getting\ string\ with\ getch.o 


# Each subdirectory must supply rules for building sources it contributes
src/getting\ string\ with\ getch.o: ../src/getting\ string\ with\ getch.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/getting string with getch.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/getting\ string\ with\ getch.d ./src/getting\ string\ with\ getch.o

.PHONY: clean-src

