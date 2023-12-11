### Assignment-on-Array
### Task 1
#### Description
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
**First Approach:** Bruteforce
+ Link: (https://github.com/Nayem1503019/Assignment-on-Array/blob/6a14ba6d6fbb2a963767c0fd94664399ae022f6d/Bruteforce.cpp)
```cpp
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(i!=j){
         if(arr[i]+arr[j]==target){
           return {i,j};
         }
       }
     }
  }
```
+ Time Complexity:  
$`\ O(n^2) `$ , $`\ n=10^4  =>n^2=10^8  `$ loops  will  be  finished  in  1  second.  So ,   it   will   pass.
+ Space Complexity: $`\ O(n) `$  to store the data.

**Second Approach:**
+ Link: (https://ideone.com/eI9VWo)
+ Link: (https://github.com/Nayem1503019/Assignment-on-Array/blob/c0f37fe5a6743d8cb7541d9cf3f39a914b60ef16/Task-1%3A%20Second%20Approach.cpp)
+ Time Complexity:<br />
Time complexity of map::count  is $`\ O(log(n)) `$.As map stores each element with unique key, then it will return 1 if match if found, otherwise return 0. So the overall time complexity will be $`\ O(nlog(n))`$
+ Space Complexity: $`\ O(n) `$ extra map taken.

### Task 2
#### Description
#### Write a function that does the following task.     
You are given an array prices where prices[i] is the price of a given stock on the ith day.You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
Also, mention the Time and Space Complexity of your solution
#### Constraints: 
$`\ 1 <= prices.length <= 10^5 `$ <br/>
$`\ 0 <= prices[i] <= 10^4 `$
#### Example   
$`\ Input: prices = [7,1,5,3,6,4] `$ <br/>
$`\ Output: 5 `$ <br/>
**Explanation:** Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

#### Solution:   
+ Link: (https://ideone.com/w7i9QO)
+ Link: (https://github.com/Nayem1503019/Assignment-on-Array/blob/4f9be30ef63c5870c8af44d52a4d04ff9cde02a4/Task%202%20Max%20Profit.cpp)
+ Time Complexity: $`\ O(n) `$
+ Space Complexity: $`\ O(n) `$






