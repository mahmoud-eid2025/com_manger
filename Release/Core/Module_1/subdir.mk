################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Module_1/Module_1.c \
../Core/Module_1/Module_1_interface.c 

OBJS += \
./Core/Module_1/Module_1.o \
./Core/Module_1/Module_1_interface.o 

C_DEPS += \
./Core/Module_1/Module_1.d \
./Core/Module_1/Module_1_interface.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Module_1/%.o Core/Module_1/%.su: ../Core/Module_1/%.c Core/Module_1/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Module_1

clean-Core-2f-Module_1:
	-$(RM) ./Core/Module_1/Module_1.d ./Core/Module_1/Module_1.o ./Core/Module_1/Module_1.su ./Core/Module_1/Module_1_interface.d ./Core/Module_1/Module_1_interface.o ./Core/Module_1/Module_1_interface.su

.PHONY: clean-Core-2f-Module_1

