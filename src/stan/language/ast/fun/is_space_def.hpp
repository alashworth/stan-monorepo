#ifndef STAN_LANG_AST_FUN_IS_SPACE_DEF_HPP
#define STAN_LANG_AST_FUN_IS_SPACE_DEF_HPP

#include "is_space.hpp"
#include <stan/util/io/is_whitespace.hpp>

namespace stan {
namespace lang {

bool is_space(char c) { return stan::io::is_whitespace(c); }

}  // namespace lang
}  // namespace stan
#endif
