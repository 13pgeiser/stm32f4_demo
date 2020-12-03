#!/bin/bash
set -ex
./configure.sh
# shellcheck disable=SC1091
source sourceme
make -j
