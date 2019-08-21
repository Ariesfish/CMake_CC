find_package(PkgConfig REQUIRED)
pkg_search_module(XML2 REQUIRED libxml-2.0 libxml2)

aux_source_directory(. SRC)

add_library(xmlreader SHARED ${SRC})

target_link_libraries(xmlreader ${XML2_LIBRARIES})
target_include_directories(xmlreader PUBLIC ${XML2_INCLUDE_DIRS})
target_compile_options(xmlreader PUBLIC ${XML2_CFLAGS_OTHER})

set_target_properties(xmlreader PROPERTIES VERSION 1.0 SOVERSION 1)

# add_library(hello_static STATIC ${SRC})
# set_target_properties(hello_static PROPERTIES OUTPUT_NAME "hello")