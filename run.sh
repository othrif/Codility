#!/bin/bash
g++-9 -g -Wreturn-type -Wmain -Werror=return-type -Werror=main -pipe -O2 -std=c++14  `pkg-config --cflags jsoncpp` ${1}.cpp  -o ${1} -lm -lpthread `pkg-config --libs jsoncpp` && ./${1}

