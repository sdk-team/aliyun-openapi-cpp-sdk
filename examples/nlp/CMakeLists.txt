cmake_minimum_required(VERSION 3.0)
project(nlp_demo)
set(CMAKE_CXX_STANDARD 11)
if(CMAKE_HOST_WIN32)
    include_directories("C:\\Program Files (x86)\\alibabacloud-sdk\\include")
    link_directories("C:\\Program Files (x86)\\alibabacloud-sdk\\lib")
endif()

add_executable(nlp_demo nlp.cc)
target_link_libraries(nlp_demo alibabacloud-sdk-core)

target_link_libraries(nlp_demo )

set_target_properties(nlp_demo
  PROPERTIES
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}nlp_demo
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
