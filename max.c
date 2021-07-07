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
  for (int i = n-2; i >= 0; i--)// I changed "i>0" to "i>=0".
    if (a[i] > max)
      max = a[i];

  return max;
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
  
  //testcase added
  int c[] = {9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 ,0};
  int max_c = max(10, c);
  printf("max(10, c) = %d\n", max_c);
  assert(max_c == 9);//It would alert because the max() will ignore c[0]. So, it should be: for (int i=n-2; i>=0; i--) in the max function.
  
  
  return 0;
}
//Jimmy Li
