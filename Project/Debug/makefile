################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := SMART ENVIRONMENTAL MONITORING AND ALERT SYSTEM
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.elf \

MAP_FILES += \
SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.list \


# All Target
all: main-build

# Main-build Target
main-build: SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.elf secondary-outputs

# Tool invocations
SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.elf SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.map: $(OBJS) $(USER_OBJS) D:\FINAL\ PROJECT\ SMART\ ENVIRONMENTAL\ MONITORING\ SYSTEM\STM32F407VGTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "SMART ENVIRONMENTAL MONITORING AND ALERT SYSTEM.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\FINAL PROJECT SMART ENVIRONMENTAL MONITORING SYSTEM\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="SMART ENVIRONMENTAL MONITORING AND ALERT SYSTEM.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "SMART ENVIRONMENTAL MONITORING AND ALERT SYSTEM.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.elf SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.list SMART\ ENVIRONMENTAL\ MONITORING\ AND\ ALERT\ SYSTEM.map SMART\\ ENVIRONMENTAL\\ MONITORING\\ AND\\ ALERT\\ SYSTEM.elf default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
