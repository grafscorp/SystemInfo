cmake_minimum_required(VERSION 3.10.0)
project(SystemInfoL VERSION 0.1.0 LANGUAGES C CXX)


set(SOURCES src)
set(INCLUDES include)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

file(GLOB systemInfoSource 
    "${SOURCES}/*.cpp"
)
file(GLOB systemInfoInclude
    "${INCLUDES}/*.hpp"
)
add_library(SystemInfoL ${systemInfoInclude} ${systemInfoSource} )

target_include_directories(SystemInfoL PUBLIC ${INCLUDES})