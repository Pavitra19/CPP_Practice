#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
// create a new stream

    stringstream ss(str);
    vector<int> finalresult;
    char ch;
    int tmp;

//extraction
// while loop will only work with type int

    while(ss >> tmp) {
    //integers get saved into tmp 
    
        finalresult.push_back(tmp);
        
        //extract the comma 
        ss >> ch;
    }

    return finalresult;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

