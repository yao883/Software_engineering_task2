class Max {

/* This function should return the maximum value in the array a of n elements. 
   We assume n > 0.

   The function has a bug.  You need to:
   (1) Add a test case to main that exposes the bug.
   (2) Fix the bug.
   (3) Submit your changes on GitHub as a pull request */

    public static int max(int n, int A[]) {
        assert n > 0;
        int max = A[n-1];
        for (int i=n-2; i>0; i--)
            if (A[i] > max)
                max = A[i];
        
        return max;
    }
    

    public static void main(String args[]) {
        int a[] = {1, 2, 3, 4};
        int max_a = max(4, a);
        System.out.println("max(4, a) = " + max_a);
        assert max_a == 4;
        
        int b[] = {7, 3, 5, 3, 7, 9, 4};
        int max_b = max(7, b);
        System.out.println("max(7, b) = " + max_b);
        assert max_b == 9;
    }
}
