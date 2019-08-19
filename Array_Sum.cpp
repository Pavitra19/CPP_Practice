#include <iostream>
using namespace std;

int main() {
    
    int np [10], n, i, sum = 0;
    
    cout<<"Enter size of array";
    cin >> n;
    cout<<"Enter elements of array";
    
    for(i = 0; i < n; i++)
    {
        cin >> np[i];
        sum += np[i];
    }
    
    cout<< "The sum is: "<<sum<<endl;

}
