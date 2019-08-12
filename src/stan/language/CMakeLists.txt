message(STATUS "Configuring Stan language library...")

add_library(stan_language
        ast.hpp
        ast_def.cpp
        compile_functions.hpp
        compiler.hpp
        function_signatures.h
        generator.hpp
        parser.hpp
        rethrow_located.hpp
        )

add_subdirectory(ast)
add_subdirectory(grammars)
add_subdirectory(model)
add_subdirectory(generator)

target_include_directories(stan_language PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
        $<INSTALL_INTERFACE:include>)

target_link_libraries(stan_language PUBLIC
        Stan::Util
        Boost::headers
        Stan::Math
        Stan::Services
        )

target_compile_options(stan_language PUBLIC
        -Os
        $<$<CXX_COMPILER_ID:GNU>:-fno-var-tracking-assignments>)

add_library(Stan::Language ALIAS stan_language)
set_property(TARGET stan_language PROPERTY EXPORT_NAME Language)

set_target_properties(stan_language PROPERTIES LINKER_LANGUAGE CXX)

message(STATUS "Configuring Stan language library... [DONE]")