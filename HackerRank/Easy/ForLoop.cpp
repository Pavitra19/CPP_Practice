#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.

int n;
int b;
int i;
string ar[] = {"one", "two",   "three", "four", "five", "six", "seven", "eight", "nine"};
cin>> n>>b;


for (i = n; i <= b; i++) {

if(i <= 9)
{
    cout<<ar[i-1]<<endl;
}
    if(i > 9 && i%2 == 0) {
        cout << "even" << endl;
    } 
    
    if(i > 9 && i%2 != 0)
    {
        cout << "odd" << endl; 
    }
}
return 0;
}
