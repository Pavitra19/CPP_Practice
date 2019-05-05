#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    
string ar[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
    
cout<<((n <=9)? ar[n-1]:"Greater than 9")<<endl;

return 0;
}
