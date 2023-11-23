#include "./arithmetic-subarrays.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Arithmetic Subarrays", "[leetcode]") {
  const std::vector<bool> expected[] = {
      std::vector<bool>{true, false, true},
      {false, true, false, false, true, true}};

  REQUIRE(Solution::checkArithmeticSubarrays({4, 6, 5, 9, 3, 7}, {0, 0, 2},
                                             {2, 3, 5}) == expected[0]);
  REQUIRE(Solution::checkArithmeticSubarrays(
              {-12, -9, -3, -12, -6, 15, 20, -25, -20, -15, -10},
              {0, 1, 6, 4, 8, 7}, {4, 4, 9, 7, 9, 10}) == expected[1]);
}
