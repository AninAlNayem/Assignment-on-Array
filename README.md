### Assignment-on-Array
### Task 1
### Description
#### Write a function that does the following task.  
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order.
Also, mention the Time and Space Complexity of your solution
+ Use of C++ or JavaScript is preferred.
#### Constraints:
+ $\ 2 <= nums.length <= 10^4 $  
+ $\ -10^9 <= nums[i] <= 10^9 $  
+ $\-10^9 <= target <= 10^9 $  
+ Only one valid answer exists.

#### Example:
$\ Input: nums=[2,7,11,15], target=9 $  
$\ Output: [0,1] $  
**Explanation: Because  nums[0] + nums[1] =9, we return [0, 1].**

#### Solution  
+ **First Approach:** Bruteforce
+ Link: (https://github.com/Nayem1503019/Assignment-on-Array/blob/6a14ba6d6fbb2a963767c0fd94664399ae022f6d/Bruteforce.cpp)
  
Time Complexity:  
$\ O(n^2) $     
$\ n=10^4 $  so, $\ 10^8 $ loops will be finished in 1 second. So , it will pass.
