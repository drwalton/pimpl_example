cmake_minimum_required(VERSION 3.26)

project(pimpl_example LANGUAGES CXX)

add_library(nopimpl_library
	nopimpl.hpp
	nopimpl.cpp
)

add_library(pimpl_library
	pimpl.hpp
	pimpl.cpp
)

add_executable(main
	main.cpp
)

target_link_libraries(main
	nopimpl_library
	pimpl_library
)