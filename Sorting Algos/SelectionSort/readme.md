## SelectionSort:


**Time complexity:**

$O(N^2)$, (where `N` = size of the array), for the best, worst, and average cases.

**Reason:**

If we carefully observe, we can notice that the outer loop, say `i`, is running from `0` to `n-2` i.e. n-1 times, and for each `i`, the inner loop `j` runs from `i` to `n-1`. For, `i = 0`, the inner loop runs `n-1 times`, for `i = 1`, the inner loop runs `n-2 times`, and so on. 

So, the total steps will be approximately the following: `(n-1) + (n-2) + (n-3) + ……+ 3 + 2 + 1`. The summation is approximately the sum of the first n natural numbers i.e. `(n*(n+1))/2`. The precise time complexity will be $O(n2/2 + n/2)$. Previously, we have learned that we can ignore the lower values as well as the constant coefficients. So, the time complexity is $O(n^2)$. Here the value of `n` is `N` i.e. the size of the array.

**Space Complexity:** $O(1)$
