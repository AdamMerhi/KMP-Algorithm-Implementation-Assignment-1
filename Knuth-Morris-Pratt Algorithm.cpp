//Knuth-Morris-Pratt Algorithm

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> piVectorPopulation (const string &pattern){  //pattern is yet to be defined but this will be a vector of the pattern we are looking for
    
    int n = pattern.size();
    vector<int> pi(n, 0); // this vector sets up the pi "table"
    int j = 0; // we use j as the boarder, this tracks the longest proper prefix which is the subpattern within the pattern which is what we use when we are stepping out of the nest in this algorithm to avoid recurrence which results in O(nm)


    for (int i = 1; i < n; i++){ 
        while (j > 0 && pattern[i] != pattern[j]) { // if the pattern at index 1 does not match index 0 (which is the current sub longest prefix) - example for first cycle
            j = pi[j-1]; // here we pop backwards, if we are at 0 we move on. Reason for this is so we can check previous items we know to test if they match. This ensures we do not have to start from the beginning of the pattern every single time we find a mismatch
        }
        if (pattern[i] == pattern[j]){ //if pattern at index 1 does match - again, this is an example for only the first cycle
            j++; //increment j so now we are looking at the next letter in the pattern to match with
        }
        pi[i] = j;
    }
    return pi;
}


int main() {
    string pattern = "ABABACABCE";
    vector<int> pi = piVectorPopulation(pattern);

    cout << "pattern: " << pattern << "\n";
    cout << "Pi Table: ";
    
    for (int v : pi){
        cout << v << " ";
    }
    cout << "\n";

    return 0;
}