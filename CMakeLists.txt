cmake_minimum_required(VERSION 3.16.3)
#initial version
project(sait VERSION 1.0.0 LANGUAGES CXX )

# Project will collect essential examples to create a tutorial for 
# the employees and customers of SenseAI Private LTD in 
# C++ Programming for embedded systems using Linux and its variants. 

# Global standard options followed by the project

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(TRAINEES "RBEI")
message("Running the program fr ${COMPANY}")
set(BUILD_SHARED_LIBS YES)
message("Building the shared Library : ${BUILD_SHARED_LIBS}")

set( MY_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/src" )
set( MY_INC_DIR    "${CMAKE_CURRENT_LIST_DIR}/inc" )

message("Setting source director to       : ${MY_SOURCE_DIR}")
message("Setting include director to      : ${MY_INC_DIR}")

include_directories(${MY_INC_DIR})

add_executable(s01B00101 ${MY_SOURCE_DIR}/s01b00101.cpp)
add_executable(s01B00102 ${MY_SOURCE_DIR}/s01b00102.cpp)
add_executable(s01B00103 ${MY_SOURCE_DIR}/s01b00103.cpp)
add_executable(s01B00201 ${MY_SOURCE_DIR}/s01b00201.cpp)
add_executable(s01B00301 ${MY_SOURCE_DIR}/s01b00301.cpp)
add_executable(s01B00401 ${MY_SOURCE_DIR}/s01b00401.cpp)
add_executable(s01B00402 ${MY_SOURCE_DIR}/s01b00402.cpp)
add_executable(s01B00403 ${MY_SOURCE_DIR}/s01b00403.cpp
)
