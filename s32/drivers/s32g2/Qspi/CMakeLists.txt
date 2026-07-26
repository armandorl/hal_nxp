# Copyright 2025 NXP
# SPDX-License-Identifier: BSD-3-Clause

zephyr_include_directories(include)
# Add BaseNXP includes for RTD hardware abstraction (Fls_MemMap.h, CompilerDefinition.h, etc.)
zephyr_include_directories(${ZEPHYR_CURRENT_MODULE_DIR}/drivers/s32g2/BaseNXP/include)
# Add SoC-specific includes for OsIf_ArchCfg.h and other RTD configuration headers
zephyr_include_directories(${ZEPHYR_CURRENT_MODULE_DIR}/soc/${CONFIG_SOC}/m7/include)

zephyr_library()
zephyr_library_sources(src/Qspi_Ip.c)
zephyr_library_sources(src/Qspi_Ip_Controller.c)
zephyr_library_sources(src/Qspi_Ip_Sfdp.c)
zephyr_library_sources(src/Qspi_Ip_PBcfg.c)
