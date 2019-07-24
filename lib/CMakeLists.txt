aux_source_directory(. SRC)

add_library(hello SHARED ${SRC})
set_target_properties(hello PROPERTIES VERSION 1.0 SOVERSION 1)

add_library(hello_static STATIC ${SRC})
set_target_properties(hello_static PROPERTIES OUTPUT_NAME "hello")