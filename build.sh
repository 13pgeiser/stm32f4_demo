#!/bin/bash
set -ex
./configure.sh
source sourceme
make -j
