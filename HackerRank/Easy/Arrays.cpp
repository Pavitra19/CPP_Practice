#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int N, i=0;
    std::cin>> N;
    int *C = new int[N];
    while(std::cin>>C[i++]);
    while(std::cout<<C[--N]<<' ' && N);
    delete [] C; //free the memory assigned to C since no longer needed 
    return 0;
}
