CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
OPTION(test "Build all tests." OFF)
OPTION(gui "Use gtk to build GUI" OFF)
PROJECT(HangMan)
FIND_PACKAGE(PkgConfig)
ADD_SUBDIRECTORY(src)




