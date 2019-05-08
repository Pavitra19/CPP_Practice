#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, i=0;
    std::cin>> N;
    int *C = new int[N];
    while(std::cin>>C[i++]);
    while(std::cout<<C[--N]<<' ' && N);
    delete [] C; 
    return 0;
}
