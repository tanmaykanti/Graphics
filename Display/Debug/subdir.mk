################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Circlet.cpp \
../Shapet.cpp \
../Singleton.cpp \
../main.cpp 

OBJS += \
./Circlet.o \
./Shapet.o \
./Singleton.o \
./main.o 

CPP_DEPS += \
./Circlet.d \
./Shapet.d \
./Singleton.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


