# 
# Nick Codignotto
# 
# nick.codignotto@gmail.com / twitter: @nickcoding / blog: nickcoding.com
# 
# 

cmake_minimum_required(VERSION 3.10)

project(NewProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS -fext-numeric-literals)
configure_file(aux/cmake_config.h.in cmake_config.h)

#
# Define Sources
#

file(GLOB NEWPROJECT_SOURCES
    src/*.h
    src/*.cc
)

# Executables
#
add_executable(NewProject src/main.cc ${NEWPROJECT_SOURCES})

#
# Target Includes
#
target_include_directories(NewProject PUBLIC 
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}/src"
  )

