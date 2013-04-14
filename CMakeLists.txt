# testgit cmake file
# refer to the root source directory of the project as ${TESTGIT_SOURCE_DIR} and 
# to the root binary directory of the project as ${TESTGIT_BINARY_DIR}. 
cmake_minimum_required (VERSION 2.6)

project(TESTGIT)
SET (SRC src/model/user.cpp src/main.cpp)
ADD_EXECUTABLE(testgit ${SRC})


