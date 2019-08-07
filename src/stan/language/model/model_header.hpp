#ifndef STAN_MODEL_MODEL_HEADER_HPP
#define STAN_MODEL_MODEL_HEADER_HPP

#include <stan/math.hpp>
#include "indexing.hpp"
#include "model_base.hpp"
#include "model_base_crtp.hpp"
#include "prob_grad.hpp"
#include "stan/language/rethrow_located.hpp"
#include <stan/services/util/create_rng.hpp>
#include <stan/util/io/cmd_line.hpp>
#include <stan/util/io/dump.hpp>
#include <stan/util/io/reader.hpp>
#include <stan/util/io/writer.hpp>
#include <boost/exception/all.hpp>
#include <boost/random/additive_combine.hpp>
#include <boost/random/linear_congruential.hpp>
#include <cmath>
#include <cstddef>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <utility>
#include <vector>

#endif
