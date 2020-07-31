#!/bin/bash
set -eu

# Fetch bash helpers and source it.
if [ ! -e .bash_helpers.sh ]; then
  curl -kSL https://raw.githubusercontent.com/13pgeiser/bash/master/bash_helpers.sh -o .bash_helpers.sh
fi
source ./.bash_helpers.sh

# Get submodules
git submodule update --init

# Install required tools
_detect_tools_folder
_install_buildessentials
_install_cmake
_install_gcc_arm_none_eabi
_install_subversion
_write_sourceme

# Done! Now call cmake
_call_cmake -DCMAKE_TOOLCHAIN_FILE=arm-none-eabi.cmake
