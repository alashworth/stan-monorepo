#ifndef TEST_UNIT_MATH_REV_SCAL_UTIL_HPP
#define TEST_UNIT_MATH_REV_SCAL_UTIL_HPP

#include <stan/math/rev/scal.hpp>

namespace test {

void check_varis_on_stack(const stan::math::var& x);

}  // namespace test

typedef stan::math::var AVAR;
typedef std::vector<AVAR> AVEC;
typedef std::vector<double> VEC;

AVEC createAVEC(AVAR x);
AVEC createAVEC(AVAR x1, AVAR x2);
AVEC createAVEC(AVAR x1, AVAR x2, AVAR x3);
AVEC createAVEC(AVAR x1, AVAR x2, AVAR x3, AVAR x4);
AVEC createAVEC(AVAR x1, AVAR x2, AVAR x3, AVAR x4, AVAR x5);
AVEC createAVEC(AVAR x1, AVAR x2, AVAR x3, AVAR x4, AVAR x5, AVAR x6);
AVEC createAVEC(AVAR x1, AVAR x2, AVAR x3, AVAR x4, AVAR x5, AVAR x6, AVAR x7);
AVEC createAVEC(AVAR x1, AVAR x2, AVAR x3, AVAR x4, AVAR x5, AVAR x6, AVAR x7,
                AVAR x8);

VEC cgrad(AVAR f, AVAR x1);

VEC cgrad(AVAR f, AVAR x1, AVAR x2);

VEC cgrad(AVAR f, AVAR x1, AVAR x2, AVAR x3);

VEC cgrad(AVAR f, AVAR x1, AVAR x2, AVAR x3, AVAR x4);

#endif
