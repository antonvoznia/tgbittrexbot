cmake_minimum_required(VERSION 3.14)
project(Currency)

set(CMAKE_CXX_STANDARD 14)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -lcurl")

add_executable(Currency bitt_api.cpp api_request.cpp main.cpp telegram_api.h telegram_api.cpp local_db.cpp local_db.h logs.cpp models/user.cpp models/user.h pipe_db_api.cpp pipe_db_api.h)
add_executable(tests tests/unit_tests.cpp bitt_api.cpp api_request.cpp telegram_api.h telegram_api.cpp local_db.cpp local_db.h logs.cpp models/user.cpp models/user.h)

#add_compile_options(-l sqlite3)

target_link_libraries(Currency curl sqlite3)

#target_link_libraries(tests curl sqlite3)