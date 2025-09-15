//Knuth-Morris-Pratt Algorithm

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> piTablePopulation (const string &pattern){  //pattern is yet to be defined but this will be a vector of the pattern we are looking for. This builds the pi table where we can compare this to the string to find a pattern. However, with this table is the reason it is optimised and is O(m+n) instead of O(mn)
    
    int n = pattern.size();
    vector<int> pi(n, 0); // this vector sets up the pi "table". It is initalised to 0 which will be filled with the prefix-suffix length
    int j = 0; // we use j as the boarder, this tracks the longest proper prefix which is the subpattern within the pattern which is what we use when we are stepping out of the nest in this algorithm to avoid recurrence which results in O(nm)

    for (int i = 1; i < n; i++){ // this loop looks through the pattern and understands where the sub patterns are by matching the subpatterns to each other and using a fall back feature when the subpatterns no longer match. 
        while (j > 0 && pattern[i] != pattern[j]) { // if the pattern at index 1 does not match index 0 (which is the current sub longest prefix) - example for first cycle
            j = pi[j-1]; // here we pop backwards, if we are at 0 we move on. Reason for this is so we can check previous items we know to test if they match. This ensures we do not have to start from the beginning of the pattern every single time we find a mismatch
        }
        if (pattern[i] == pattern[j]){ //if pattern at index 1 does match - again, this is an example for only the first cycle
            j++; //increment j so now we are looking at the next letter in the pattern to match with
        }
        pi[i] = j;
    }
    return pi; // return the prefix table or pi table
}

vector<int> kmpSearch (const string &text, const string &pattern){ // the main function which uses the pi table previously created and now searches the text.
    vector<int> patternsFound; //stores the index of the first character when a pattern is matched in the text

    if (pattern.empty()) return patternsFound; // if there isnt a pattern

    vector<int> pi = piTablePopulation(pattern); // holds pi table which was previously discovered
    int j= 0 ; //current length of the matched prefix

    for (int i = 0; i < (int)text.size(); i++){
        while (j > 0 && text[i] != pattern[j]){ // this loop looks for not matching indexes
            j = pi[j-1]; // fall back to the previous character within the pi table
        }
        if (text[i] == pattern[j]){ // if the indexes match
            j++; // extend the match length
        }
        if (j == (int)pattern.size()){ //  once we find a MATCH of the full pattern, we record the starting index
            patternsFound.push_back(i - j+1);
            j = pi[j-1]; // allows serch for overlappting patterns by falling back
        }
    }
    return patternsFound; // returns indexes of matched patterns
}


int main() {
    string pattern = "ABABACABCE";
    vector<int> pi = piTablePopulation(pattern);

    cout << "pattern: " << pattern << "\n";
    cout << "Pi Table: ";
    
    for (int v : pi){
        cout << v << " ";
    }
    cout << "\n";

    return 0;
}