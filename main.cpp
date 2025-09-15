//test
#include <iostream>
#include <vector>
#include <string>
#include "Knuth-Morris-Pratt Algorithm.cpp"

int main() {
    string pattern = "ABABACABCE";
    std::vector<int> result {0,0,1,2,0,0,1,2,0,0};
    std::vector<int> output = piTablePopulation(pattern);    
}