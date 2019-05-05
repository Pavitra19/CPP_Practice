#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  
  string a, b;
  cin >> a>> b;

  int lena = a.size();
  int lenb = b.size(); 

  cout<<lena<<" "<<lenb<<endl; 
  cout<<a + b<<endl;

  swap(a[0], b[0]);
  cout<<a<<" "<<b<<endl;
return 0;
}
