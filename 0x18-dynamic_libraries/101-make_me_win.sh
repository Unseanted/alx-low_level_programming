#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Unseanted/alx-low_level_programming/master/0x18-dynamic_libraries/libwon.so
export LD_PRELOAD="$PWD/../libwon.so
