//test
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include "Knuth-Morris-Pratt Algorithm.cpp"
#define RUN_KMP_TEST(output, expected) runKmpTest(__func__, output, expected)

// BELOW ARE HELPER FUNCTIONS
bool vecCompare (const vector<int>& a, const vector<int>& b){ //declares two vectors which cannot be modified. Data referenced
    if (a.size() != b.size()) return false; // if the size of both vectors do not equal, return false
    for(size_t i = 0; i < a.size(); i++){ // loops over vector a
        if(a[i] != b[i]) { //compares if the object at the same index of vector a and b are not same
            return false; // mismatch occurs
        }
    }
    return true;
}

void printVector(const vector<int>& v){ // helper function to print vector for testing and troubleshooting
    cout << "{";
    for (size_t i = 0; i < v.size(); i++){ //loops through bector
        cout << v[i]; // prints index
        if (i +1 < v.size()) cout << ", "; // if the index isnt the last index, ad a comma and space 
    }
    cout << "}"; //otherwise close the parathesis
}

void runKmpTest(const string &testName, const vector<int> &output, const vector<int> &expected){ //helper function, using object orientated instead of rewriting this for every test
    if(vecCompare(output, expected)){ // instead of testing this block of code at every test, we just recall this method
        cout << testName << ": PASS\n";
    } else{
        cout << testName << ": FAIL\n";
        cout << "Expected: ";
        printVector(expected);
        cout << "\nReturned: ";
        printVector(output);
        cout << "\n";
    }
}

//BELOW IS PI TABLE TESTING
void piTableTest1(){
    string pattern = "ABABACABCE";
    vector<int> expected {0,0,1,2,3,0,1,2,0,0};
    vector<int> output = piTablePopulation(pattern);    

    RUN_KMP_TEST(output, expected);
}

void piTableTest2(){
    string pattern = "AAAAABAAA";
    vector<int> expected {0,1,2,3,4,0,1,2,3};
    vector<int> output = piTablePopulation(pattern);    

    RUN_KMP_TEST(output, expected);
}

//BELOW IS KMP TESTING
void kmpSearchTest1(){
    string text = "ZZABABACABCEYYABABACABCEZZ";
    string pattern = "ABABACABCE";
    vector<int> expected {2,14};
    vector<int> output = kmpSearch(text, pattern);

    RUN_KMP_TEST(output, expected);
}

void kmpSearchTest2(){
    string text = "aaaaa";
    string pattern = "aa";
    vector<int> expected {0,1,2,3};
    vector<int> output = kmpSearch(text, pattern);

    RUN_KMP_TEST(output, expected);

}

void kmpSearchTest3(){
    string text = "XYZABC";
    string pattern = "A";
    vector<int> expected {3};
    vector<int> output = kmpSearch(text, pattern);

    RUN_KMP_TEST(output, expected);
}

void kmpNoMatchTest(){
    string text = "ABCDEFG";
    string pattern = "XYZ";
    vector<int> expected {};
    vector<int> output = kmpSearch(text, pattern);

    RUN_KMP_TEST(output, expected);
}

void kmpCaseSensitive(){
    string text = "aAbBcC";
    string pattern = "AbB";
    vector<int> expected {1};
    vector<int> output = kmpSearch(text, pattern);

    RUN_KMP_TEST(output, expected);
}

void emptyPatternTest(){
    string text = "hsajbdjhbhubds fbasjbsdbs";
    string pattern = "";
    vector<int> expected {};
    vector<int> output = kmpSearch(text, pattern);

    RUN_KMP_TEST(output, expected);
}

vector<int> naiveMethod(const string &text, const string &pattern){ // creation of naive method | Helper for the test- the slow version of kmp which has a time complexity of 0(mn) instead of kmp which has o(m+n)
    vector<int> match;

    for(int i =0; i <= text.size() - pattern.size(); i++){
        int j = 0;
        while (j < pattern.size() && text[i + j] == pattern[j]){
            j++;
        }
        if( j == pattern.size()) match.push_back(i);
    }
    return match;
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

    int naiveTime = chrono::duration_cast<chrono::microseconds> (stopNaive - startNaive).count(); //using chrono to cast the time into an integer so we can do simple maths functions from a time format
    int kmpTime = chrono::duration_cast<chrono::microseconds> (stopKmp - startKmp).count(); // same as above

    cout << "Naive time: " << naiveTime << "\n";
    cout << "KMP time: " << kmpTime << "\n";
}

int main() {
    piTableTest1();
    piTableTest2();    
    kmpSearchTest1();
    kmpSearchTest2();
    kmpSearchTest3();
    kmpNoMatchTest();
    kmpCaseSensitive();
    emptyPatternTest();
    testKMPvsNAIVE(); 
    return 0; 
}