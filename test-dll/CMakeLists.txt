set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


include_directories(../mydll)
link_directories(../mydll)
link_libraries(mydll)

add_executable (test-dll "test-dll.cpp" "test-dll.h")


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET test-dll PROPERTY CXX_STANDARD 20)
endif()
