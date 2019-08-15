message(DEBUG "Configuring Stan language library...")

if (CMAKE_BUILD_TYPE MATCHES "Debug")
    message(WARNING "Certain template-heavy sections of Stan do not compile correctly without enabling optimizations."
            "Consider compiling in RelWithDebInfo mode instead of Debug.")
endif ()

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

add_library(Stan::Language ALIAS stan_language)
set_property(TARGET stan_language PROPERTY EXPORT_NAME Language)

set_target_properties(stan_language PROPERTIES LINKER_LANGUAGE CXX)

message(DEBUG "Configuring Stan language library... [DONE]")