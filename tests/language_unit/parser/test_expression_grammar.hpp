#ifndef STAN_LANG_GRAMMARS_TEST_EXPRESSION_GRAMMAR_HPP
#define STAN_LANG_GRAMMARS_TEST_EXPRESSION_GRAMMAR_HPP

#include <stan/util/io/program_reader.hpp>
#include <stan/language/ast.hpp>
#include <stan/language/grammars/whitespace_grammar.hpp>
#include <stan/language/grammars/expression_grammar.hpp>
#include <boost/spirit/include/qi.hpp>
#include <string>
#include <sstream>
#include <utility>

namespace stan {

  namespace lang {

    template <typename Iterator>
    struct test_expression_grammar
      : boost::spirit::qi::grammar<Iterator,
                                   boost::spirit::qi::locals<scope>,
                                   expression,
                                   whitespace_grammar<Iterator> > {
      const io::program_reader& reader_;
      variable_map var_map_;
      std::stringstream& error_msgs_;
      expression_grammar<Iterator> expression_g;

      test_expression_grammar(const io::program_reader& reader,
                              variable_map& var_map,
                              std::stringstream& error_msgs);

      boost::spirit::qi::rule<Iterator,
                              boost::spirit::qi::locals<scope>,
                              expression,
                              whitespace_grammar<Iterator> >
      test_expression_r;
    };

  }
}
#endif
