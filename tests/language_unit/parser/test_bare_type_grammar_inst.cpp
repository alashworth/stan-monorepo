#include "parser/test_bare_type_grammar_def.hpp"
#include <stan/language/grammars/iterator_typedefs.hpp>

namespace stan {
  namespace lang {
    template struct test_bare_type_grammar<pos_iterator_t>;
  }
}
