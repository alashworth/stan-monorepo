if(NOT TARGET Doxygen::doxygen)
    return()
endif()

# FIXME: Can't build latex documentation at the moment since there's some sort of
# broken syntax in beta.hpp. On the other hand, Latex errors are incomprehensible, so...
# that may not be the problem. Investigate later.

file(GLOB_RECURSE stan_public_headers ${PROJECT_SOURCE_DIR}/src/*.hpp)

set(PROJECT_LOGO stanlogo-main.png)
set(HTML_FOOTER doxygen-footer.html)
set(DOXYGEN_GENERATE_LATEX NO)
set(DOXYGEN_GENERATE_HTML YES)
set(USE_MATHJAX YES)
set(MATHJAX_EXTENSIONS
        TeX/AMSmath
        TeX/AMSsymbols)

doxygen_add_docs(stan_documentation
        ${stan_public_headers}
        COMMENT "Generating documentation...")