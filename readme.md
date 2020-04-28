## 1. 分冶算法

### 1.1 二分查找
划分多段
(start, mid-1) mid (mid+1, end)

[34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

[69. Sqrt(x)](https://leetcode.com/problems/sqrtx/)

[374. Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/)

### 1.2 快排 & 归并

第k小

### 1.3 快速幂

[50. Pow(x, n)](https://leetcode.com/problems/powx-n/)

## 2. 递归算法
## 3. 排列组合
## 4. 高精度算法
## 5. 贪心
## 6. 双指针
[11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
[75. Sort Colors](https://leetcode.com/problems/sort-colors/)
[80. Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)

[287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/submissions/) // 同快慢指针

[345. Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/)
[455. Assign Cookies](https://leetcode.com/problems/assign-cookies/)

## 排序

## 搜索

## 6. 穷举算法

### 6.1 追赶法
[POJ_1650. Integer Approximation](http://poj.org/problem?id=1650)

## 7. 动态规划
[53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)
[264. Ugly Number II](https://leetcode.com/problems/ugly-number-ii/)]

## 4.最大最小问题
### 4.1 最大最小值
INT32\_MAX = 2147483647;
INT32\_MIN = -2147483648;
LLONG\_MAX = 9223372036854775807;
LLONG\_MIN = -9223372036854775808;

* 思路：取min， max， 大赋小，小赋大；然后逐个遍历；

[414. Third Maximum Number](https://leetcode.com/problems/third-maximum-number/)
[908. Smallest Range I](https://leetcode.com/problems/smallest-range-i/)



## 5. 数学方法

### 5.1 数学运算（归纳总结）

[258. Add Digits](https://leetcode.com/problems/add-digits/)

[292. Nim Game](https://leetcode.com/problems/nim-game/) // 巴什博奕



# 数据结构

## 1. 链表

经典技巧：快慢指针

[141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

[142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/submissions/)

[328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/submissions/) // 奇偶链表

## 2. 栈和队列

## 3. 字符串
### 3.1 注意事项
### 3.1.1 数组大小
末尾+'\0'，初始化时多加1
### 3.2 字符串比较
strcmp(str1, str2)  //字典序

str1 = str2, return 0;

str1 > str2, return +;

str1 < str2, return -;

### 3.3 查找子串(KMP)
[28. Implement strStr()](https://leetcode.com/problems/implement-strstr/)

## 4. 树
[100. Same Tree](https://leetcode.com/problems/same-tree/)
[104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
[108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)
[110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)
[993. Cousins in Binary Tree](https://leetcode.com/problems/cousins-in-binary-tree/)

## 5. 图

## 6. 哈希表 （hashtable）

* 思路：将值映射至数组O(n)，查找O(1)
* 注意：初始数组大小

[26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
[575. Distribute Candies](https://leetcode.com/problems/distribute-candies/)
[1365. How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/)

## 7. 位运算

### 7.1 按位操作

^&|!
^： 按位异或， 用于取反

[136. Single Number](https://leetcode.com/problems/single-number/)
[137. Single Number II](https://leetcode.com/problems/single-number-ii/)
[389. Find the Difference](https://leetcode.com/problems/find-the-difference/)
[476. Number Complement](https://leetcode.com/problems/number-complement/)