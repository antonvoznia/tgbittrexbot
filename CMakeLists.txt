cmake_minimum_required(VERSION 3.14)
project(Currency)

set(CMAKE_CXX_STANDARD 14)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -lcurl")

add_executable(Currency bitt_api.cpp api_request.cpp main.cpp telegram_api.h telegram_api.cpp)

target_link_libraries(Currency curl)