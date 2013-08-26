#include "random2.hpp"

namespace random_
{
    std::mt19937 generate{std::random_device()()};
} // namespace random_
