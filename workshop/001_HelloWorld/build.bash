#!/bin/bash

mkdir working
cd working
cmake -G "Unix Makefiles" ..
cmake --build .

