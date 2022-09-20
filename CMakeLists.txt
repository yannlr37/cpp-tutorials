cmake_minimum_required(VERSION 2.8)

project( App )

find_package( PkgConfig REQUIRED )

file(GLOB all_SRCS
	"${PROJECT_SOURCE_DIR}/sources/*.h"
	"${PROJECT_SOURCE_DIR}/sources/*.cpp"
)

file(GLOB all_SRCS_TESTS
	"${PROJECT_SOURCE_DIR}/sources/*.h"
	"${PROJECT_SOURCE_DIR}/sources/*.cpp"
	"${PROJECT_SOURCE_DIR}/catch.hpp"
	"${PROJECT_SOURCE_DIR}/tests/*.h"
	"${PROJECT_SOURCE_DIR}/tests/*.cpp"
)

add_executable( App main.cpp ${all_SRCS} )
add_executable( AppTest tests.cpp ${all_SRCS_TESTS} )

target_link_libraries( App ${CMAKE_THREAD_LIBS_INIT} )
target_link_libraries( AppTest ${CMAKE_THREAD_LIBS_INIT} )
