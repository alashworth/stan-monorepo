#include "parser/test_local_var_decls_grammar_def.hpp"
#include <stan/language/grammars/iterator_typedefs.hpp>

namespace stan {
  namespace lang {
    template struct test_local_var_decls_grammar<pos_iterator_t>;
  }
}
