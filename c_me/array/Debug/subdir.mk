################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../2darray.c \
../2darray1.c \
../array1.c \
../array2.c \
../demo_array.c 

OBJS += \
./2darray.o \
./2darray1.o \
./array1.o \
./array2.o \
./demo_array.o 

C_DEPS += \
./2darray.d \
./2darray1.d \
./array1.d \
./array2.d \
./demo_array.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


