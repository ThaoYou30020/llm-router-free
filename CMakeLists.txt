cmake_minimum_required(VERSION 3.16)
project(llm-router-free CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(llmrouterfree
    src/main.cpp
    src/router.cpp
    src/providers.cpp
    src/fallback.cpp
)

target_include_directories(llmrouterfree PRIVATE include)

if(WIN32)
    target_link_libraries(llmrouterfree PRIVATE userenv)
endif()
