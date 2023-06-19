#!/bin/bash
wget -P /tmp https://github.com/AmrSamyG247/alx-low_level_programming/0x18-dynamic_libraries/libamr.so
export LD_PRELOAD=/tmp/libamr.so
