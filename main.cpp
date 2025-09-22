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

void piTableTest(){
    string pattern = "ABABACABCE";
    std::vector<int> expected {0,0,1,2,3,0,1,2,0,0};
    std::vector<int> output = piTablePopulation(pattern);    

    if (vecCompare(output, expected)){
        cout << "piTableTest: PASS\n";
    } else {
        cout << "piTableTest: FAIL\n";
    }
}

void kmpSearchTest1(){
    string text = "ZZABABACABCEYYABABACABCEZZ";
    string pattern = "ABABACABCE";
    vector<int> expected {2,14};
    vector<int> output = kmpSearch(text, pattern);

    if(vecCompare(output, expected)){
        cout << "kmpSearchTest1: PASS\n";
    } else{
        cout << "kmpSearchTest1: FAIL\n";
    }
}

void kmpSearchTest1(){
    string text = "ZZABABACABCEYYABABACABCEZZ";
    string pattern = "ABABACABCE";
    vector<int> expected {2,14};
    vector<int> output = kmpSearch(text, pattern);

    if(vecCompare(output, expected)){
        cout << "kmpSearchTest1: PASS\n";
    } else{
        cout << "kmpSearchTest1: FAIL\n";
    }
}

int main() {
    piTableTest();
    kmpSearchTest1();
    return 0; 
}