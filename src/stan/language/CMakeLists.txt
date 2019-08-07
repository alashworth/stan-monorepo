add_library(stan_language
        ast.hpp
        ast_def.cpp
        compile_functions.hpp
        compiler.hpp
        function_signatures.h
        generator.hpp
        parser.hpp
        rethrow_located.hpp)

target_include_directories(stan_language PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
        $<INSTALL_INTERFACE:include)

target_link_libraries(stan_language PUBLIC
        Stan::Util
        Boost::headers
        Stan::Math
        Stan::Services
        )

# Unfortunately, you can't build stan_language in debug config
# without some form of optimizations enabled.
target_compile_options(stan_language PUBLIC $<$<CONFIG:Debug>:-Os>)

add_library(Stan::Language ALIAS stan_language)
set_property(TARGET stan_language PROPERTY EXPORT_NAME Language)

add_subdirectory(ast)
add_subdirectory(generator)
add_subdirectory(grammars)
add_subdirectory(model)