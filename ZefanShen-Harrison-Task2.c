#include <stdio.h>
#include <assert.h>

/* This function should return the maximum value in the array a of n elements. 
   We assume n > 0.
   The function has a bug.  You need to:
   (1) Add a test case to main that exposes the bug.
   (2) Fix the bug.
   (3) Submit your changes on GitHub as a pull request */
int max(int n, int *a) {
  assert(n > 0);
  int max = a[n-1];
  int i;
  if (i==1) {
  	return max;
  }
  else{
  for (i=n-2; i>=0; i--)
    if (a[i] > max)
      max = a[i];

  return max;
  }
  
}


int main(int argc, char** argv) {
  int a[] = {1, 2, 3, 4};
  int max_a = max(4, a);
  printf("max(4, a) = %d\n", max_a);
  assert(max_a == 4);

  int b[] = {7, 3, 5, 3, 7, 9, 4};
  int max_b = max(7, b);
  printf("max(7, b) = %d\n", max_b);
  assert(max_b == 9);
  
   int c[] = {7,2};
  int max_c = max(2, c);
  printf("max(2,c) = %d\n", max_c);
  assert(max_c == 7);
}
