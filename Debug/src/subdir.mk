################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/LOGO_Interpreter.cpp \
../src/baseCommandC.cpp \
../src/forwardC.cpp 

OBJS += \
./src/LOGO_Interpreter.o \
./src/baseCommandC.o \
./src/forwardC.o 

CPP_DEPS += \
./src/LOGO_Interpreter.d \
./src/baseCommandC.d \
./src/forwardC.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


