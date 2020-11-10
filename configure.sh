#!/bin/bash
set -ex
source bash-helpers/helpers.sh
# Get submodules
git submodule update --init
# Install required tools
#_detect_tools_folder
install_buildessentials
install_cmake
install_gcc_arm_none_eabi
#_install_subversion
write_sourceme

# Done! Now call cmake
call_cmake -DCMAKE_TOOLCHAIN_FILE=arm-none-eabi.cmake
