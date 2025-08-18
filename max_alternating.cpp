#include <array>
#include <limits>
#include <numeric>
#include <algorithm>
#include <vector>
#include "max_alternating.hpp"

// An O(n^2) algorithm.  This one will time out.
int naiveAlternating(const std::vector<int>& vec) {
  // the largest alternating sum we have seen so far
  int maxSum = std::numeric_limits<int>::min();
  for (std::size_t i = 0; i < vec.size(); ++i) {
    // alternating sum starting from i
    int sum = 0;
    for (std::size_t j = i; j < vec.size(); ++j) {
      // vec[i] appears with a +
      // after that we alternate
      if ((j - i) % 2 == 0) {
        sum += vec.at(j);
      } else {
        sum -= vec.at(j);
      }
      maxSum = std::max(sum, maxSum);
    }
  }
  return maxSum;
}

// Develop an algorithm that works in time O(n)
int maxAlternatingSubarraySum(const std::vector<int>& vec) {
  std::ignore = vec;
  return 42;
}
