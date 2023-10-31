cmake_minimum_required(VERSION 3.2)
project (PrimeNumbers)
set(CMAKE_CXX_STANDARD 17)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin) 

add_executable(main src/main.cpp src/prime.cpp inc/primes.h)
include_directories(main inc)