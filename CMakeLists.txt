cmake_minimum_required(VERSION 3.7)
project(treetraversing)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        driver.c
        item.c
        item.h
        tree.c
        tree.h
        treeType.h)

add_executable(treetraversing ${SOURCE_FILES})