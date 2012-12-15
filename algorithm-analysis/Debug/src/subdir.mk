################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/aux.cpp \
../src/generators.cpp \
../src/interaction.cpp \
../src/main.cpp \
../src/ordenacion.cpp \
../src/test.cpp 

OBJS += \
./src/aux.o \
./src/generators.o \
./src/interaction.o \
./src/main.o \
./src/ordenacion.o \
./src/test.o 

CPP_DEPS += \
./src/aux.d \
./src/generators.d \
./src/interaction.d \
./src/main.d \
./src/ordenacion.d \
./src/test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/c++/4.2.1 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


