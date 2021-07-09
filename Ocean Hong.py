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
    for i in range(n-1, 0, -1):
        if a[i] > max:
            max = a[i]

    return max


a = [10,8]
max_a = max(2, a)
print("max(2, a) = " + str(max_a))


b = [90,7, 3, 5, 3, 7, 9, 4]
max_b = max(7, b)
print("max(7, b) = " + str(max_b))

c = [9099,7, 3, 15, 32, 73, 19, 4]
max_c = max(7, c)
print("max(7, c) = " + str(max_c))
