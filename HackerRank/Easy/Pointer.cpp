
//With absolute function 

#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {

    int sum = *a + *b;
    int abs_diff = abs(*a - *b);
    *a = sum; 
    *b = abs_diff; 
}

int main() {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}


//Version 2

#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a + *b;
    int abs_diff = *a - *b >= 0? *a - *b : -(*a - *b); 
    *a = sum;
    *b = abs_diff; 
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
