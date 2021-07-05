/**
 * @author Zhuozi Xie
 */
class Max {

    /*
     * This function should return the maximum value in the array a of n
     * elements. We assume n > 0.
     *
     * The function has a bug. You need to: (1) Add a test case to main that
     * exposes the bug. (2) Fix the bug. (3) Submit your changes on GitHub as a
     * pull request
     */

    public static int max(int n, int A[]) {
        assert n > 0;
        int max = A[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (A[i] > max) {
                max = A[i];
            }
        }
        return max;
    }

    public static void main(String args[]) {
        int a[] = { 1, 2, 3, 4 };
        int max_a = max(4, a);
        System.out.println("max(4, a) = " + max_a);
        assert max_a == 4;

        int b[] = { 7, 3, 5, 3, 7, 9, 4 };
        int max_b = max(7, b);
        System.out.println("max(7, b) = " + max_b);
        assert max_b == 9;

        //test case 1
        int c[] = { -7, -3, -5, -3, -7, -9, -4 };
        int max_c = max(7, c);
        System.out.println("max(7, c) = " + max_c);
        assert max_c == -3;

        //test case 2
        int d[] = { 3 };
        int max_d = max(1, d);
        System.out.println("max(1, d) = " + max_d);
        assert max_d == 3;

        //test case 3 (The bug appears here)
        int e[] = { -3, -4 };
        int max_e = max(2, e);
        System.out.println("max(2, e) = " + max_e);
        assert max_e == -3;

    }
}
