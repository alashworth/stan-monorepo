target_sources(stan_language PUBLIC
        nil.hpp
        origin_block.hpp
        scope.hpp
        variable_map.hpp
        PRIVATE
        variable_map_def.hpp
        scope_def.hpp)

add_subdirectory(fun)
add_subdirectory(node)
add_subdirectory(sigs)
add_subdirectory(type)