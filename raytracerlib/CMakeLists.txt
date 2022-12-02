find_package(fmt REQUIRED)

set(RAYTRACERLIB_HEADERS include/raytracerlib/Tuple.h)

set(RAYTRACERLIB_SOURCES )

add_library(raytracerlib
        OBJECT ${RAYTRACERLIB_HEADERS} ${RAYTRACERLIB_SOURCES})
set_target_properties(raytracerlib
        PROPERTIES
        LINKER_LANGUAGE CXX)
target_include_directories(raytracerlib
        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/raytracerlib)
target_link_libraries(raytracerlib
        PUBLIC
        fmt::fmt
        utillib)