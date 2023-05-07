################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Module_2/Module_2.c \
../Core/Module_2/Module_2_interface.c 

OBJS += \
./Core/Module_2/Module_2.o \
./Core/Module_2/Module_2_interface.o 

C_DEPS += \
./Core/Module_2/Module_2.d \
./Core/Module_2/Module_2_interface.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Module_2/%.o Core/Module_2/%.su: ../Core/Module_2/%.c Core/Module_2/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I"D:/Courses and Learning/Embedded Courses/FreeRTOS course udemy fasrbit/workspace/NEW_RTOS_WORK_SPACE/nervious_system_model/Core/Module_1" -I"D:/Courses and Learning/Embedded Courses/FreeRTOS course udemy fasrbit/workspace/NEW_RTOS_WORK_SPACE/nervious_system_model/Core/Module_2" -I"D:/Courses and Learning/Embedded Courses/FreeRTOS course udemy fasrbit/workspace/NEW_RTOS_WORK_SPACE/nervious_system_model/Core/Nervios_System" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Module_2

clean-Core-2f-Module_2:
	-$(RM) ./Core/Module_2/Module_2.d ./Core/Module_2/Module_2.o ./Core/Module_2/Module_2.su ./Core/Module_2/Module_2_interface.d ./Core/Module_2/Module_2_interface.o ./Core/Module_2/Module_2_interface.su

.PHONY: clean-Core-2f-Module_2

