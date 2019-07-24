include_directories(../lib)

add_executable(main main.c)
target_link_libraries(main hello_static)