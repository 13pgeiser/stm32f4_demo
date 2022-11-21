#!/bin/bash
source bash-scripts/helpers.sh
run_shfmt_and_shellcheck ./*.sh
# Get submodules
git submodule update --init
# Install required tools
install_packages make ninja-build subversion
install_cmake
install_gcc_arm_none_eabi
write_sourceme
# Done! Now call cmake
call_cmake -DCMAKE_TOOLCHAIN_FILE=arm-none-eabi.cmake
