#ifndef Knuth-Morris-Pratt Algorithm.HPP
#define Knuth-Morris-Pratt Algorithm.HPP

#include <vector>
#include <string>

std::vector<int> piTablePopulation (const std::string &pattern);
std::vector<int> kmpSearch (const std::string &text, const std::string &pattern);

#endif