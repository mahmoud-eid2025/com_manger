################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Nervios_System/Nervious_System.c 

OBJS += \
./Core/Nervios_System/Nervious_System.o 

C_DEPS += \
./Core/Nervios_System/Nervious_System.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Nervios_System/%.o Core/Nervios_System/%.su: ../Core/Nervios_System/%.c Core/Nervios_System/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I"D:/Courses and Learning/Embedded Courses/FreeRTOS course udemy fasrbit/workspace/NEW_RTOS_WORK_SPACE/nervious_system_model/Core/Module_1" -I"D:/Courses and Learning/Embedded Courses/FreeRTOS course udemy fasrbit/workspace/NEW_RTOS_WORK_SPACE/nervious_system_model/Core/Module_2" -I"D:/Courses and Learning/Embedded Courses/FreeRTOS course udemy fasrbit/workspace/NEW_RTOS_WORK_SPACE/nervious_system_model/Core/Nervios_System" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Nervios_System

clean-Core-2f-Nervios_System:
	-$(RM) ./Core/Nervios_System/Nervious_System.d ./Core/Nervios_System/Nervious_System.o ./Core/Nervios_System/Nervious_System.su

.PHONY: clean-Core-2f-Nervios_System

