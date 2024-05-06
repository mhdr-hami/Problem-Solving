# My Problem Solving Submissions Editorial #
Hello there! :smiley: If you're searching for a place to learn how to solve problems, and not just find the answers, then I have great news for you :sparkles: - you've come to the right place :books:! 

My name is Mohammadreza, and in this repository, I will do my best to explain my LeetCode submissions. I want to clarify that the solution I am sharing is not the only way to solve the problem, and perhaps **not the best** way! However, I believe it is easy to code, learn, and remember for future use. I'll share my thought process :thought_balloon: as I tackle a problem, and I'll help you follow the same procedure for similar questions. 

I suggest spending :hourglass: ***at least one hour*** :hourglass: trying to solve the problem yourself before checking out my editorial if you're unable to solve it. Doing so will help you understand better and improve your problem-solving skills after each attempt :chart_with_upwards_trend:. 

I hope that you find this repository helpful :white_check_mark:.

***

## My "General Procedure :trollface: " for Problem Solving ##
1. **DO NOT RUSH**:grey_exclamation: <br> It is important to read the problem description carefully and precisely, even when you are in a programming competition with a time limit. Rushing through the description can cause you to misunderstand the problem, and as a result, you may end up spending more time coding the wrong answer than it would take to figure out what the question really wants. Thus, taking your time to understand the problem is essential for success.
2. **Remeber** the similar problem 💡 **Remember** the idea 💡 <br> This is the key step that helps you get the `Accepted`, and get better at problem-solving over time. After reading the problem description, start recalling similar questions you've solved before. Try to remember the idea you used to solve them and explain in one sentence why the current question requires a similar approach.
3. Challenge Acce......pted :heavy_check_mark: <br> Consider the constraints given in the problem description. Check the time limit and memory limit. Make sure the combination of your idea and the constraints satisfies the limits. By this point, you must have figured out how exactly this problem challenges you and what is your approach to tackling it. Do not ignore this. Only by doing this, you can make sure you are ready to start coding.
4. Code it and Get Accepted, then **THINK On It!** :shipit: <br> Once you've got the "Accept", there is one final step to complete. You need to come up with a label for the idea behind this problem. You don't have to only use formal or well-known labels like "DP" or "Greedy". Instead, use any label that will help you remember how you solved the problem in the future. By working through the problems in this repository, you'll become more familiar with this concept.
***


## Table of contents :page_facing_up:
(easy: :small_blue_diamond:, medium::small_orange_diamond:, hard::small_red_triangle:)
1. [LeetCode: Two Sum](#twosum) :small_blue_diamond: <details> <summary>:dart:idea</summary>  Two Pointers, Sort </details>
2. [LeetCode: Best Time to Buy and Sell Stock](#besttimetobuyandsellstock) :small_blue_diamond: <details> <summary>:dart:idea</summary>  Optimization, One Traverse </details>
3. [LeetCode: Contains Duplicate](#containsduplicate) :small_blue_diamond: <details> <summary>:dart:idea</summary>  Sort, big O </details>
4. [LeetCode: Product of Array Except Self](#productofarrayexceptself) :small_orange_diamond: <details> <summary>:dart:idea</summary> Partial Sum </details>
5. [LeetCode: Maximum Subarray](#maximumsubarray) :small_orange_diamond: <details> <summary>:dart:idea</summary> DP </details>
6. [LeetCode: Maximum Product Subarray](#maximumproductsubarray) :small_orange_diamond: <details> <summary>:dart:idea</summary> DP, Max Subarray </details>
7. [LeetCode: Find Minimum in Rotated Sorted Array](#findminimuminrotatedsortedarray) :small_orange_diamond: <details> <summary>:dart:idea</summary> Binary Search </details>
8. [LeetCode: Search in Rotated Sorted Array](#searchinrotatedsortedarray) :small_orange_diamond: <details> <summary>:dart:idea</summary> Binary Search, Rotated Problem </details>
9. [LeetCode: 3Sum](#threesum) :small_orange_diamond: <details> <summary>:dart:idea</summary> Two Pointers, Sort </details>
10. [LeetCode: Container With Most Water](#containerwithmostwater) :small_orange_diamond: <details> <summary>:dart:idea</summary> Two Pointers </details>
11. [LeetCode: Sum of Two Integers](#sumoftwointegers) :small_orange_diamond: <details> <summary>:dart:idea</summary> Bit Manipulation </details>

***

### 1. LeetCode: Two Sum Problem [[Link]](https://leetcode.com/problems/two-sum/ "LeetCode Submission Link") <a name="twosum"></a>

#### Description

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1: <br> Input: `nums = [2,7,11,15], target = 9` <br> Output: `[0,1]` <br> Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]. <br> Example 2: <br> Input: `nums = [3,2,4], target = 6` <br> Output: `[1,2]` <br> Example 3: <br> Input: `nums = [3,3], target = 6` <br> Output: `[0,1]`

Constraints: <br> 2 $\le$ `nums.length` $\le$ 10<sup>4</sup> <br> -10<sup>9</sup> $\le$ `nums[i]` $\le$ 10<sup>9</sup> <br> -10<sup>9</sup> $\le$ `target` $\le$ 10<sup>9</sup> <br> + Only one valid answer exists.
####

#### Editorial

It's natural to consider the approach of `brute force` when faced with this problem. Since the input array is not sorted, we need to scan the entire array for each element to find the other element that makes up the target. As a result, the time complexity of this approach would be $O(n^2)$. As we move on to the third step of my general approach, it becomes clear that this approach is bound to result in a time-limit error. Additionally, we have to keep track of the indexes of elements, which means any operation that moves and swaps the elements is a challenge.

Following the `brute force` idea, it would be great if we didn't have to walk through the entire array for each element  $O(n^2)$ . What does it require to find the answer only in one pass over the array $O(n)$ ? This means we can only perform one comparison for each element. However, the challenge is to determine the right element to calculate their sum and check if it matches the `target`. If the array was sorted, we could use the two-pointer idea by having one pointer at the start and the other at the end of the array. By comparing their sum with the `target`, we could identify the next best pair to consider. For example, if their sum is less than the `target`, we would need to consider a pair with a larger sum, and by moving the pointer that points to the smaller element one step to the right, we can be sure that we have achieved the next larger sum available in the entire array.

<p style="text_align:center"><img src="./Figures/FIGURE1.png" alt="Two-Pointer Figure" style="height: 150px; width:380px;"/></p>

Sorting an array of elements seems to be difficult if you also need to keep track of their indexes, but there is a simple solution to this problem. If you require both sorting and index tracking, you can pair each element with its index and then sort the resultant array of pairs. 

Although we need only $O(n)$ to traverse through the sorted array of pairs using two pointers, sorting the array itself requires a $O(n \  \ n)$. Still, this is good enough to get the `Accept`.

##

### 2. LeetCode: Best Time to Buy and Sell Stock [[Link]](https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) "LeetCode Submission Link") <a name="besttimetobuyandsellstock"></a>

#### Description

You are given an array `prices` where `prices[i]` is the price of a given stock on the i<sup>th</sup> day.
<br> You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. <br> Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return `0`.

Example 1: <br> Input: `prices = [7,1,5,3,6,4]` <br> Output: `5` <br> Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5. <br> Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell. <br> Example 2: <br> Input: `prices = [7,6,4,3,1]` <br> Output: `0` <br> Explanation: In this case, no transactions are done and the max profit = 0.
 
Constraints: <br> 1 $\le$ `prices.length` $\le$ 10<sup>5</sup> <br> 0 $\le$ `prices[i]` $\le$ 10<sup>4</sup> <br>

####

#### Editorial
We use the label "Optimization" to refer to problems that require finding the maximum, minimum, best, most, or similar terms. As soon as you identify a problem as an optimization problem, the first solution that should come to your mind is to solve it by traversing the array once. Sometimes, additional ideas like "DP" may be required to solve the problem during this traverse. At other times, the problem may be simpler than you initially thought.

This is an example of an easy problem where we need to find two elements from an array such that their difference is maximum. However, the order of these two elements matters. In fact, this is the only small challenge of this problem that the profit is calculated by subtracting the element with smaller index from the second element. Otherwise, by traversing the array only once, we can find the minimum and maximum element of the array, which would result in the maximum difference. 

To do this, as we traverse over the array, we must keep track of the minimum element seen so far, and calculate the global max profit as the maximum of itself and local profit which is the difference between the current element and the minimum element so far (which would be in the previous locations).

##

### 3. LeetCode: Contains Duplicate [[Link]](https://leetcode.com/problems/contains-duplicate/ "LeetCode Submission Link") <a name="containsduplicate"></a>

#### Description

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 
Example 1: <br>
Input: `nums = [1,2,3,1]` <br>
Output: `true` <br>
Example 2: <br>
Input: `nums = [1,2,3,4]` <br>
Output: `false` <br>
Example 3: <br>
Input: `nums = [1,1,1,3,3,4,3,2,4,2]` <br>
Output: `true` <br>

Constraints: <br>
1 $\le$ `nums.length` $\le$ 10<sup>5</sup> <br>
-10<sup>9</sup> $\le$ `nums[i]` $\le$ 10<sup>9</sup> <br>

####

#### Editorial

This is one of the simplest problems I have encountered on LeetCode. However, I wanted to include it in my repository because of the way I approached and solved it within 2 seconds. In many cases, you can arrive at the idea of solving a problem by considering the "big O" of the algorithm that would be accepted. For example, since the constraints allowed for $O(n\log \ n)$, I decided to use "Sort" as it is also $O(n\log \ n)$. If a problem requires $O(log \ n)$, then I would first consider "Binary Search" as it maps to $O(log \ n)$ in my mind. This is a helpful technique that you can use to figure out what idea to implement for the problem you are trying to solve.

If we sort the array ( $O(n\log \ n)$ ), all duplicate elements will become neighbors. Therefore, we can traverse the array once, and check if there exists an element that is equal to its neighbor. 

There are alternative techniques, such as utilizing "set" or ..., that may speed up the code. However, what I aimed to grasp from this problem, was to extract the idea from the big O the problem says it's fine to use.

##

### 4. LeetCode: Product of Array Except Self [[Link]](https://leetcode.com/problems/product-of-array-except-self/ "LeetCode Submission Link") <a name="productofarrayexceptself"></a>

#### Description

Given an integer array  nums , return an array `answer` such that `answer[i]` is equal to the product of all the elements of nums except `nums[i]`. <br>
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. <br>
You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1: <br>
Input: `nums = [1,2,3,4]` <br>
Output: `[24,12,8,6]` <br>
Example 2: <br>
Input: `nums = [-1,1,0,-3,3]` <br>
Output: `[0,0,9,0,0]` <br>
 
Constraints: <br>
2 $\le$ `nums.length` $\le$ 10<sup>5</sup> <br>
-30 $\le$ `nums[i]` $\le$ 30 <br>
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. <br>


####

#### Editorial
This problem has three main challenges. First, the solution must have a runtime complexity of $O(n)$, which means we need to consider ideas like creating an extra array, traversing once over the `nums` array, or using dynamic programming. Secondly, the problem states that we cannot use the division operation. This means that we cannot find the product of the entire `nums` array and then divide the total product by each element. Instead, we must calculate the answer for each element `curr` by computing the product of the elements before and after `curr`. Finally, `0` is a tricky number in this problem. If there is exactly one `0` in `nums`, then the output will only have one non-zero element. If `nums` has more than one `0`, then the entire output will be zeros. Apart from these, this problem is pretty straightforward. However, the idea we use to solve it is quite useful and can be applied to many other problems.

"Partial Sum" refers to a general idea in which we create an array `ps`. Each `ps[i]` equals elements `arr[0]` to `arr[i-1]` of another array. I've used the partial sum idea in many problems. To solve this problem, we create two arrays: `pre` and `aft`. `pre[i]` is the product of `nums[0]` to `nums[i-1]`, while `aft[i]` is the product of `nums[i+1]` to `nums[last]` where `last` is the last element. To fill the output array, we multiply each element of `pre` with the corresponding element of `aft`. This algorithm has a runtime of $O(n)$ and handles the other two challenges mentioned.

##

### 5. LeetCode: Maximum Subarray [[Link]](https://leetcode.com/problems/maximum-subarray/ "LeetCode Submission Link") <a name="maximumsubarray"></a>

#### Description

Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1: <br>
Input: `nums = [-2,1,-3,4,-1,2,1,-5,4]` <br>
Output: `6` <br>
Explanation: The subarray [4,-1,2,1] has the largest sum 6. <br>
Example 2: <br>
Input: `nums = [1]` <br>
Output: `1` <br>
Explanation: The subarray [1] has the largest sum 1. <br>
Example 3: <br>
Input: `nums = [5,4,-1,7,8]` <br>
Output: `23` <br>
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23. <br>
 

Constraints: <br>
1 $\le$ `nums.length` $\le$ 10<sup>5</sup> <br>
-10<sup>4</sup> $\le$ `nums[i]` $\le$ 10<sup>4</sup> <br>

####

#### Editorial

This was one of the first "not easy" dynamic programming problems I solved, but it taught me a lot about this paradigm. The first step is to recognize it is a DP problem. How? Read the Dynamic Programming post [[Link]](https://github.com/mhdr-hami/Problem-Solving/blob/main/DynamicProgramming.md "Dynamic Programming post Link") . 

Solving the maximum subarray problem, like any other DP problem, can be challenging until you discover its "secret". To solve this problem, we need to determine the smaller or simpler form of the problem.  The key is to divide the solution into sub-groups and use them to solve the main problem. For example, one way to do this is to check if a subarray contains the element `nums[i]` or not. This makes sub-groups and helps us determine whether having an element in one subarray means anything or not. Another way is to consider any subarray that starts or ends with an element `nums[i]` for each element in `nums`.

The key to solving this problem is to group all subarrays based on their last element. Each group, denoted as `i`, includes all the subarrays that end with the element `nums[i]`. By determining the maximum sum of all subarray in each group as `dp[i]`, we can iterate through all of them and take their maximum as the solution.

Let's begin with `nums[0]`. The only subarray in the group of subarrays that ends with `nums[0]` is `nums[0]` itself. So, the first step is straightforward. `dp[0]` is equal to `nums[0]`. 

Next, the subarrays that end with `nums[1]` are the subarray `[nums[0], nums[1]]` and `nums[1]` itself. The maximum sum of elements among these two, which is `dp[1]`, is the greater value between `nums[0]+nums[1]` and `nums[1]`. To find a correlation between `dp[1]` and `dp[0]`, we can substitute `nums[0]` with `dp[0]` as they are equal. Thus, `dp[1]` is equal to the greater value between `dp[0]+nums[1]` and `nums[1]`.

From this, we may tackle how to find the secret. Assume we want to find `dp[n-1]` and we've already calculated `dp[n-2]`. Any subarray that ends with `nums[n-1]` is either `nums[n-1]` itself or a subarray in group `dp[n-2]` that `nums[n-1]` is added to it. Hence, the maximum sum in group `dp[n-1]` is either created by adding `nums[n-1]` to the answer of group `dp[n-2]` or by considering `nums[n-1]` by itself. That's it. We just found our secret. 

`dp[i] = max(nums[i]+dp[i-1], nums[i])`

All is left to do is to create the `dp` array, and take maximum element in that.

##

### 6. LeetCode: Maximum Product Subarray [[Link]](https://leetcode.com/problems/maximum-product-subarray/ "LeetCode Submission Link") <a name="maximumproductsubarray"></a>

#### Description

Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

Example 1: <br>
Input: `nums = [2,3,-2,4]` <br>
Output: `6` <br>
Explanation: [2,3] has the largest product 6. <br>
Example 2: <br>
Input: `nums = [-2,0,-1]` <br>
Output: `0` <br>
Explanation: The result cannot be 2, because [-2,-1] is not a subarray. <br>
 
Constraints: <br>
1 $\le$ `nums.length` $\le$ 2 * 10<sup>4</sup> <br>
-10 $\le$ `nums[i]` $\le$ 10 <br>
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. <br>

####

#### Editorial

The first step is to recognize it is a DP problem. How? Read the Dynamic Programming post [[Link]](https://github.com/mhdr-hami/Problem-Solving/blob/main/DynamicProgramming.md "Dynamic Programming post Link") . Also, as the second step of "my general approach" suggests, we must think about a similar problem that we've solved before and we can easily determine that it is a very similar problem to the Maximum Subarray problem. So, What does this problem challenge us ("Third step")? Why can't we just modify the secret we found for the previous problem and use `dp[i] = max(nums[i]*dp[i-1], nums[i])`? As mentioned before, to figure out how to solve a problem, it is important to find what is the challenging part of that problem.

Let's consider the testcase where `nums=[-2,1,-1]`. When we use the modified secret, `dp` would be like `[-2, 1, 1]`. However, this would return `1` as the answer, which is incorrect. The problem arises because when we calculated dp[1], we compared `1` and `1*(-2)`, and kept `1` because it was larger. Then, when calculating `dp[2]`, we had already forgotten about the element `-2`, even though it plays an important role in the final answer. In this problem, negative numbers can be turned into large positive numbers just by being multiplied by `-1`. Therefore, the key is to create the same `dp` array, but keep both the minimum and maximum answers for each group `dp[i]`. Then, when calculating `dp[i+1]`, we would consider if the minimum answer of the previous group can also turn into the maximum of the current one. This is the dp secret of this problem.

`max_dp[i] = max(nums[i], max(nums[i]*max_dp[i-1], nums[i]*min_dp[i-1]))` <br>
`min_dp[i] = min(nums[i], min(nums[i]*max_dp[i-1], nums[i]*min_dp[i-1]))`

We're creating two `dp` arrays, one storing the minimum answer and one storing the maximum answer for each group and to create each, we need to also consider the other array too! Because the maximum answer of previous group can turn to minimum answer of current group and the minimum answer of previous group can turn to maximum answer of current group. All is left to do, is take the maximum of all elements in `max_dp`.  

##

### 7. LeetCode: Find Minimum in Rotated Sorted Array [[Link]](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/ "LeetCode Submission Link") <a name="findminimuminrotatedsortedarray"></a>

#### Description

Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array `nums = [0,1,2,4,5,6,7]` might become: <br>
`[4,5,6,7,0,1,2]` if it was rotated 4 times. <br>
`[0,1,2,4,5,6,7]` if it was rotated 7 times. <br>
Notice that rotating an array `[a[0], a[1], a[2], ..., a[n-1]]` 1 time results in the array `[a[n-1], a[0], a[1], a[2], ..., a[n-2]]`.

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.

Example 1: <br>
Input: `nums = [3,4,5,1,2]` <br>
Output: `1` <br>
Explanation: The original array was [1,2,3,4,5] rotated 3 times. <br>
Example 2: <br>
Input: `nums = [4,5,6,7,0,1,2]` <br>
Output: `0` <br>
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times. <br>
Example 3: <br>
Input: `nums = [11,13,15,17]` <br>
Output: `11` <br>
Explanation: The original array was [11,13,15,17] and it was rotated 4 times. <br>
 

Constraints: <br>
`n` == `nums.length` <br>
1 $\le$ `n` $\le$ 5000 <br>
-5000 $\le$ `nums[i]` $\le$ 5000 <br>
All the integers of nums are unique. <br>
`nums` is sorted and rotated between 1 and n times.

####

#### Editorial

We have a array that created from one or two sorted subarrays and the problem description says we have to find an algorithm that runs in $O(log \ n)$. Knowing all this, it's hard not to think about binary search. 

What we must do is to search for the first element that is not larger than `nums[0]`. because if an element is larger than `nums[0]`, it means it is a part of the first sorted subarray (note that we only have one break in the `nums`). All is left is literaly binary search. If `nums[mid]` $>$ `nums[0]`, then `mid` is before the break, and we must move the `low` to after it. Otherwise, we might have found the answer but to make sure it is the minimum element, we move the `high` to one element before the `mid`. 

##

### 8. LeetCode: Search in Rotated Sorted Array [[Link]](https://leetcode.com/problems/search-in-rotated-sorted-array/ "LeetCode Submission Link") <a name="searchinrotatedsortedarray"></a>

#### Description

There is an integer array `nums` sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index `k` (`1 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` (0-indexed). For example, `[0,1,2,4,5,6,7]` might be rotated at pivot index 3 and become `[4,5,6,7,0,1,2]`.

Given the array `nums` after the possible rotation and an integer `target`, return the index of target if it is in `nums`, or `-1` if it is not in `nums`.

You must write an algorithm with O(log n) runtime complexity.

Example 1: <br>
Input: `nums = [4,5,6,7,0,1,2]`, `target = 0` <br>
Output: `4` <br>
Example 2: <br>
Input: `nums = [4,5,6,7,0,1,2]`, `target = 3` <br>
Output: `-1` <br>
Example 3: <br>
Input: `nums = [1]`, `target = 0`<br>
Output: `-1` <br>
 

Constraints: <br>
1 $\le$ `nums.length` $\le$ 5000 <br>
-10<sup>4</sup> $\le$ `nums[i]` $\le$ 10<sup>4</sup> <br>
All values of `nums` are unique. <br>
nums is an ascending array that is possibly rotated. <br>
-10<sup>4</sup> $\le$ `target` $\le$ 10<sup>4</sup> <br>

####

#### Editorial

This is a very similar problem to the Find Minimum in Rotated Sorted Array problem. The main idea is to find the break using the idea we discussed before. After that, we have two sorted arrays and we know for each of them where it starts and ends. And the `target` is in one of them. How easy a problem can be :smirk:? 

##

### 9. LeetCode: 3Sum [[Link]](https://leetcode.com/problems/3sum/ "LeetCode Submission Link") <a name="threesum"></a>

#### Description

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

Example 1: <br>
Input: `nums = [-1,0,1,2,-1,-4]` <br>
Output: `[[-1,-1,2],[-1,0,1]]` <br>
Explanation:  <br>
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0. <br>
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0. <br>
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0. <br>
The distinct triplets are [-1,0,1] and [-1,-1,2]. <br>
Notice that the order of the output and the order of the triplets does not matter. <br>
Example 2: <br>
Input: `nums = [0,1,1]` <br>
Output: `[]` <br>
Explanation: The only possible triplet does not sum up to 0. <br>
Example 3: <br>
Input: `nums = [0,0,0]` <br>
Output: `[[0,0,0]]` <br>
Explanation: The only possible triplet sums up to 0. <br>


Constraints: <br>
3 $\le$ `nums.length` $\le$ 3000 <br>
-10<sup>5</sup> $\le$ `nums[i]` $\le$ 10<sup>5</sup> <br>

####

#### Editorial

As per the second step of "my general approach", we recall that we have previously solved a similar problem, which also had a similar name "two sum". Therefore, our initial attempt should be to apply the same idea, which is to use Two Pointers. This problem was quite important for me as it helped me gain a better understanding of how to use the Two Pointers approach properly.

Let's discuss my first attempt at using the Two Pointers technique, which **DID NOT** result in getting an `accepted` solution. But I believe it's good to mention and learn from that.

Since we need to search for a third element, and sorting `nums` does not conflict with what the problem requires, I sorted the `nums`. Next, I set `pointer1` at the beginning and `pointer2` at the end of the `sorted_nums`. This left me with only searching for the third element in the range of elements between these two pointers.

If no third element was found, and `nums[pointer1] + nums[pointer2] > 0`, then we can safely decrease `pointer2` by one, as there are no two elements small enough to create the zero, with `pointer2` included. Similarly, if no third element was found, and `nums[pointer1] + nums[pointer2] < 0`, then we can safely increase `pointer1` by one, as there are no two elements big enough to create the zero, with `pointer1` included. However, things get tricky when we find the third element. The question we need to ask ourselves is what is the right thing to do in this case? Do we move `pointer1`, `pointer2`, both, or none? There is no right answer to this question, and this is the crucial key to using the Two Pointers technique. When moving a pointer, we must guarantee that this is the right decision to make; otherwise, we are not using this technique correctly.

To solve the problem, we need to loop through the `sorted_nums`. For each element `i`, we set `pointer1` to `i+1` and `pointer2` to the end of the `sorted_nums` array. Then, we check if the sum of these three elements is zero. If it is, we append them to the solution set. If the sum is greater than zero, we decrease `pointer2`, and if it's less than zero, we increase `pointer1`. We continue doing this for all elements in the array while ensuring that we move each pointer correctly. Also, this approach guarantees that we consider all possible triplets. The only downside to this method is that it has a runtime of $O(n^2)$, which is not an issue as range of values of `n` is small. However, there may be more efficient solutions available.

##

### 10. LeetCode: Container With Most Water [[Link]](https://leetcode.com/problems/container-with-most-water/ "LeetCode Submission Link") <a name="containerwithmostwater"></a>

#### Description

You are given an integer array height of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `i`th line are `(i, 0)` and `(i, height[i])`. <br>
Find two lines that together with the x-axis form a container, such that the container contains the most water. <br>
Return the maximum amount of water a container can store. <br>
Notice that you may not slant the container. <br>

Example 1: <br>
<p style="text_align:center"><img src="./Figures/FIGURE10.png" alt="Two-Pointer Figure" style="height: 150px; width:380px;"/></p>

Input: `height = [1,8,6,2,5,4,8,3,7]` <br>
Output: `49` <br>
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49. <br>
Example 2: <br>
Input: `height = [1,1]` <br>
Output: `1` <br>
 
Constraints: <br>
`n == height.length` <br>
2 $\le$ `n` $\le$ 10<sup>5</sup> <br>
0 $\le$ `height[i]` $\le$ 10<sup>4</sup> <br>

####

#### Editorial

Upon reading the problem description, the first idea that came to mind was using the Two Pointers approach. Although this idea may stem from solving previous problems, I believe there is a pattern in problems that can be solved using this approach. Generally, `(1)` in Two Pointer problems, we need to find a set of elements that fulfill certain constraints through searching. This set of elements in the array can be a pair, a triplet, or even a subarray. Two Sum and 3Sum problems are two examples of this case. `(2)` Usually, the Two Pointer approach is used when the array is sorted. `(3)` However, the most important aspect of this approach (as in this problem) is to avoid nested loops and take advantage of having two pointers. `(4)` We need to find the logic and ensure the correctness of moving each pointer, which allows us to solve the problem more efficiently. These 4 bullet points are the keys I am going to use from now on to recognize and solve the Two Pointer problems.

In this problem, we are looking for a pair of heights that together with the x-axis form a container, such that the container contains the most water (1). One naive solution is to use bruteforce and compare all of the existing containers but that would be $O(n^2)$ and we can be more efficient(3). So all is left to do is to find the logic of moving the pointers and guarantee its correctness (4). 

To find the largest container, we set `pointer1` to the first element and `pointer2` to the last element of the `height` array. We calculate the area of the container created by these two pointers and compare it to the `globalMax` we store at each step. Then we move one of the pointers. If `height[pointer1] < height[pointer2]`, we increase `pointer1`, otherwise, we decrease `pointer2`. 

The width of the next container is decreased by moving each pointer closer to each other. The height of the next container is equal to `min(height[pointer1], height[pointer2])`. To find a larger container, we need to change the `min` of these two pointers. For example, if `height[pointer1] < height[pointer2]`, the height of our container is `height[pointer1]`. By moving `pointer2`, we either reach a `new_pointer2 > pointer2` which does not result in finding a larger container, or `new_pointer2 < pointer2` and `new_pointer2 > pointer1`, which again does not result in finding a larger container, or `new_pointer2 < pointer1`, which results in finding a smaller container as it has a smaller height now. Therefore, it is guaranteed that if there exists a larger container, it can only be found by moving the pointer with the smaller height.

##

### 11. LeetCode: Sum of Two Integers [[Link]](https://leetcode.com/problems/sum-of-two-integers/ "LeetCode Submission Link") <a name="sumoftwointegers"></a>

#### Description

Given two integers `a` and `b`, return the sum of the two integers without using the operators `+` and `-`.

Example 1: <br>
Input: `a = 1`, `b = 2` <br>
Output: `3` <br>
Example 2: <br>
Input: `a = 2`, `b = 3` <br>
Output: `5` <br>

Constraints: <br>
-1000 $\le$ `a`, `b` $\le$ 1000

####

#### Editorial

We have to solve this problem using bitwise operations as we are not allowed to use operators `+` and `-`. Given two binary numbers `a` and `b`, we either can use `a & b`, `a | b`, or `a ^ b`. Also, we can apply `<<`, `>>`, or `~`  on each binary number. As someone who has no idea what to do, I start by taking a numeric example and playing with the operators I have. Consider `a=1101` and `b=0011`. `a & b == 0001`, `a | b == 1111`, and `a ^ b == 1110`. Next, by considering these three, I try to understand what each one of them is. Or at least, what does it look like it is. `a & b == 0001`, so it seems like `a & b` returns the carry we would have if we could apply the `+` operator. Also, `a ^ b == 1110`, which is similar to what we would have if we ignored considering the carry in calculating their sum. What I get from this, is I must shift the carry (as we do regularly in `+`) and add it to the sum without carry (`a ^ b`).

So I should use a recursive function, and pass these two as parameters of the function we call inside. As the base case, we know we pass the carry as the second parameter, and we do not always have the carry, which means finally second parameter `b` would be zero and we can return `a` as the answer of that sum. 

I know this editorial may seem a bit confusing and if you haven't seen a similar problem, the chance of finding the idea is not that much. But as you play with different numbers and walk through this editorial, it will make more sense for you and it may be useful for your future problem solving. 
