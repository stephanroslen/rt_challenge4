set(UTILLIB_HEADERS
        include/utillib/Continue.h
        include/utillib/DecaysTo.h
        include/utillib/InvocableAs.h)

add_library(utillib
        OBJECT ${UTILLIB_HEADERS})
set_target_properties(utillib
        PROPERTIES
        LINKER_LANGUAGE CXX)
target_include_directories(utillib
        INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/utillib)