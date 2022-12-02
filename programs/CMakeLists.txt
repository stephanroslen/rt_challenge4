find_package(fmt REQUIRED)

function(AddRaytracerLibProgram NAME)
    add_executable(${NAME} ${ARGN})
    target_link_libraries(${NAME} raytracerlib fmt::fmt)
    set_target_properties(${NAME}
            PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${PROGRAM_OUTPUT_DIR}
            LINKER_LANGUAGE CXX)
endfunction()