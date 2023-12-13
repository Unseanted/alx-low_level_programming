#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Unseanted/alx-low_level_programming/blob/master/0x18-dynamic_libraries/liblottery.so
export LD_PRELOAD="$PWD/../liblottery.so
