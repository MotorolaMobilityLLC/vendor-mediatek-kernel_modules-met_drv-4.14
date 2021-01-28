################################################################################
# Include Path
################################################################################
MET_VCOREDVFS_INC := $(srctree)/drivers/misc/mediatek/base/power/include/
MET_PTPOD_INC := $(srctree)/drivers/misc/mediatek/base/power/cpufreq_v2/src/mach/$(MTK_PLATFORM)/

################################################################################
# Feature Spec
################################################################################
SPMTWAM_VERSION := ap
SPMTWAM_IDLE_SIGNAL_SUPPORT := single

################################################################################
# Feature On/Off
################################################################################
FEATURE_SSPM_EMI := n

# ONDIEMET
FEATURE_ONDIEMET := n

# VCOREDVFS API VERSION 
VCOREDVFS_OLD_VER := y

SSPM_VERSION := v1

