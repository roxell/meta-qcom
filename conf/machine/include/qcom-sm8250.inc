SOC_FAMILY = "sm8250"
require conf/machine/include/qcom-common.inc
DEFAULTTUNE = "armv8-2a-crypto"
require conf/machine/include/arm/arch-armv8-2a.inc

MACHINE_ESSENTIAL_EXTRA_RRECOMMENDS += " \
    pd-mapper \
    qrtr \
    rmtfs \
    tqftpserv \
"

MACHINE_EXTRA_RRECOMMENDS += " \
    fastrpc \
"

# Android boot image settings
QCOM_BOOTIMG_PAGE_SIZE ?= "4096"
