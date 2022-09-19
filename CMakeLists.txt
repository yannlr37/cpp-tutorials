cmake_minimum_required(VERSION 2.8)

project( App )

find_package( PkgConfig REQUIRED )

file(GLOB all_SRCS
	"${PROJECT_SOURCE_DIR}/sources/*.hpp"
	"${PROJECT_SOURCE_DIR}/sources/*.cpp"
)

add_executable( App main.cpp ${all_SRCS} )

target_link_libraries( App ${CMAKE_THREAD_LIBS_INIT} )
