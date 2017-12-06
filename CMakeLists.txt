cmake_minimum_required(VERSION 2.6)
project(SoapySDRSoapyTDG CXX)
enable_testing()

#select the release build type by default to get optimization flags
if(NOT CMAKE_BUILD_TYPE)
   set(CMAKE_BUILD_TYPE "Release")
   message(STATUS "Build type not specified: defaulting to release.")
endif(NOT CMAKE_BUILD_TYPE)
set(CMAKE_BUILD_TYPE ${CMAKE_BUILD_TYPE} CACHE STRING "")

set(SOAPYTDG_INCLUDE_DIRS ./include)
set(SOAPYTDG_LIBRARIES soapytdg)

find_package(SoapySDR CONFIG)

if (NOT SoapySDR_FOUND)
    message(WARNING "SoapySDR development files not found - skipping support")
    return()
endif ()

include_directories(${SOAPYTDG_INCLUDE_DIRS})
SOAPY_SDR_MODULE_UTIL(
    TARGET SoapyTDG
    SOURCES ./src/SoapyTDG.cc
    LIBRARIES ${SOAPYTDG_LIBRARIES}
)
