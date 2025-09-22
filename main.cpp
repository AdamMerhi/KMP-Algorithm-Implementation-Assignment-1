//test
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
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

vector<int> naiveMethod(const string &text, const string &pattern){ // creation of naive method | Helper for the test- the slow version of kmp which has a time complexity of 0(mn) instead of kmp which has o(m+n)
    vector<int> match;

    for(int i =0; i <= text.size() - pattern.size(); i++){
        int j = 0;
        while (j < pattern.size() && text[i + j] == pattern[j]){
            if( j == pattern.size()) match.push_back(i);
        }
        return match;
    }
}

void testKMPvsNAIVE() {
    int textSize = 50000;
    int patternSize = 5000;

    string text(textSize, 'a');
    string pattern (patternSize, 'a');

    auto startNaive = chrono::high_resolution_clock::now();// this block tests naive method time
    naiveMethod(text, pattern);
    auto stopNaive = chrono::high_resolution_clock::now();

    auto startKmp = chrono::high_resolution_clock::now();// this block tests KMP method time
    kmpSearch(text, pattern);
    auto stopKmp = chrono::high_resolution_clock::now();


}

int main() {
    piTableTest();
    kmpSearchTest1();
    return 0; 
}