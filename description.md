Recall that a subarray of an array arr is a contiguous section of the array and is defined by some indices $i \le j$ which give the subarray

$$ \mathrm{arr}[i], \mathrm{arr}[i+1], ..., \mathrm{arr}[j].$$

In lecture we talked about the problem of finding a subarray whose sum of entries was the largest.  In this problem, we look instead at an alternating sum of a subarray.  In an alternating sum, we add the first entry, subtract the second entry, add the third entry, etc.  As an example, the alternating sum of the subarray arr[3], arr[4], arr[5], arr[6] is arr[3] - arr[4] + arr[5] - arr[6].  In our definition of an alternating sum, the first entry of the subarray must occur positively, i.e. -arr[3] + arr[4] - arr[5] + arr[6] is not an alternating sum in our definition.  

Your task is to write an algorithm to find the maximum alternating sum of a subarray.  On the scaffold we include a $\Theta(n^2)$ algorithm to do this.  Your goal is to write an algorithm with running time $O(n)$.  

Test Cases

There are 98 test cases provided in main.cpp.  When you submit (via git push) your code will be tested against these 98 test cases, plus 2 test cases on vectors of size 50,000 which are used to check the running time of your algorithm.  The provided $\Theta(n^2)$ solution will time out on these test cases.

Marking

To get a score your code must not time out.  If you pass $m$ test cases your mark is $m\%$ (out of $100\%$).

AI Policy and Submission

The use of AI is not allowed.  Submission for this exercise is only via git.  You must document your path to the solution in detailed git commits.  Describe the approach you are taking, and how you are modifying the code as your understanding of the problem improves.  Commit frequently.  You submit via git push.  You can submit as many times as you like.  We will mark the last submission.
