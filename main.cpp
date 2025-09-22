//test
#include <iostream>
#include <vector>
#include <string>
#include "Knuth-Morris-Pratt Algorithm.cpp"

bool vecCompare (const vector<int>& a, const vector<int>& b){ //declares two vectors which cannot be modified. Data referenced
    if (a.size() != b.size()) return false; // if the size of both vectors do not equal, return false
    for(size_t i = 0; i < a.size(); i++){ // loops over vector a
        if(a[i] != b[i]) { //compares if the object at the same index of vector a and b are not same
            return false; // mismatch occurs
        }
    }
    return true;
}

int main() {
    string pattern = "ABABACABCE";
    std::vector<int> result {0,0,1,2,0,0,1,2,0,0};
    std::vector<int> output = piTablePopulation(pattern);    
}