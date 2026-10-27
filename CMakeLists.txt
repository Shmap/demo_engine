cmake_minimum_required(VERSION 3.24)

project(demoEngine
    VERSION 0.1.0
    DESCRIPTION "Portfolio game engine prototype"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#option(DEMOENGINE_WARNINGS_AS_ERRORS "Treat compiler warnings as errors" OFF)

add_executable(demo_engine
    src/main.cpp
    src/core/application.cpp
    src/core/log.cpp
)

target_include_directories(demo_engine
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(demo_engine PRIVATE cxx_std_20)

#if(MSVC)
#    target_compile_options(demo_engine PRIVATE /W4 /permissive-)
#    if(DEMOENGINE_WARNINGS_AS_ERRORS)
#        target_compile_options(demo_engine PRIVATE /WX)
#    endif()
#else()
#    target_compile_options(demo_engine PRIVATE -Wall -Wextra -Wpedantic)
#    if(DEMOENGINE_WARNINGS_AS_ERRORS)
#        target_compile_options(demo_engine PRIVATE -Werror)
#    endif()
#endif()

