 # This function should return the maximum value in the array a of n elements. 
 #   We assume n > 0.
 #
 #   The function has a bug.  You need to:
 #   (1) Add a test case to main that exposes the bug.
 #   (2) Fix the bug.
 #   (3) Submit your changes on GitHub as a pull request
def max(n, a):
    assert n > 0
    max = a[n-1]
    for i in range(n-2, 0, -1):
        if a[i] > max:
            max = a[i]

    return max


a = [1, 2, 3, 4]
max_a = max(4, a)
print("max(4, a) = " + str(max_a))
assert max_a == 4

b = [7, 3, 5, 3, 7, 9, 4]
max_b = max(7, b)
print("max(7, b) = " + str(max_b))
assert max_b == 9
