#include <test/unit/lang/parser/test_local_var_decls_grammar_def.hpp>
#include <stan/lang/grammars/iterator_typedefs.hpp>

namespace stan {
  namespace lang {
    template struct test_local_var_decls_grammar<pos_iterator_t>;
  }
}
