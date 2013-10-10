cmake_minimum_required(VERSION 2.8)

project(germ)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

set(CMAKE_CXX_FLAGS "-std=c++11 -g")

find_package(SFML REQUIRED COMPONENTS graphics window system audio)

if(SFML_FOUND)
	include_directories(${SFML_INCLUDE_DIR})
	set(LIBRARIES ${LIBRARIES} ${SFML_LIBRARIES})
endif()

include_directories("include")

#Folders to be searched
set(FOLDERS "src")

#Adding source files in each of the FOLDERS to EXECUTABLES
foreach(FOLDER ${FOLDERS})
	file(GLOB GLOBFILES "${FOLDER}/*.cpp")
	set(EXECUTABLES ${EXECUTABLES} ${GLOBFILES})
endforeach(FOLDER)

add_library(germ SHARED ${EXECUTABLES})
target_link_libraries(germ ${LIBRARIES})
