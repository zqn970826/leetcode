[TOC]

# 分冶算法

## 二分查找

划分多段
(start, mid-1) mid (mid+1, end)

[34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

[69. Sqrt(x)](https://leetcode.com/problems/sqrtx/)

[374. Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/)

## 快排 & 归并

第k小

[215. Kth Largest Element in an Array (Medium)](https://leetcode.com/problems/kth-largest-element-in-an-array/)

## 快速幂

[50. Pow(x, n)](https://leetcode.com/problems/powx-n/)

# 双指针

[11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)

[75. Sort Colors](https://leetcode.com/problems/sort-colors/)

[80. Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)

[88. Merge Sorted Array (Easy)](https://leetcode.com/problems/merge-sorted-array/)

[287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) // 同快慢指针

[345. Reverse Vowels of a String (Easy)](https://leetcode.com/problems/reverse-vowels-of-a-string/)

[633. Sum of Square Numbers (Easy)](https://leetcode.com/problems/sum-of-square-numbers/)

[125. Valid Palindrome (Easy)](https://leetcode.com/problems/valid-palindrome/)

[680. Valid Palindrome II (Easy)](https://leetcode.com/problems/valid-palindrome-ii/)

[977. Squares of a Sorted Array (Easy)](https://leetcode.com/problems/squares-of-a-sorted-array/)

[524. Longest Word in Dictionary through Deleting (Medium)](https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/)



# 穷举

## 追赶法

[POJ_1650. Integer Approximation](http://poj.org/problem?id=1650)



# 贪心

* 局部最优 -> 全局最优

[455. Assign Cookies (Easy)](https://leetcode.com/problems/assign-cookies/)

[435. Non-overlapping Intervals (Medium)](https://leetcode.com/problems/non-overlapping-intervals/) //无重叠区间

[452. Minimum Number of Arrows to Burst Balloons (Medium)](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) // 重叠区间

[121. Best Time to Buy and Sell Stock (Easy)](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

[122. Best Time to Buy and Sell Stock II (Easy)](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)



# 动态规划

* 全局最优

[53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

[264. Ugly Number II](https://leetcode.com/problems/ugly-number-ii/)



# 数学方法

## 数学运算（归纳总结）

[258. Add Digits](https://leetcode.com/problems/add-digits/)

[292. Nim Game](https://leetcode.com/problems/nim-game/) // 巴什博奕

[319. Bulb Switcher (Medium)](https://leetcode.com/problems/bulb-switcher/submissions/) // DP



## 最大最小值

INT32\_MAX = 2147483647;

INT32\_MIN = -2147483648;

LLONG\_MAX = 9223372036854775807;

LLONG\_MIN = -9223372036854775808;

* 思路：取min， max， 大赋小，小赋大；然后逐个遍历；

[414. Third Maximum Number](https://leetcode.com/problems/third-maximum-number/)

[908. Smallest Range I](https://leetcode.com/problems/smallest-range-i/)



## 经典数学题

[172. Factorial Trailing Zeroes (Easy)](https://leetcode.com/problems/factorial-trailing-zeroes/submissions/) // 阶乘



# 排序

## 计数排序

[41. First Missing Positive (Hard)](https://leetcode.com/problems/first-missing-positive/)

[448. Find All Numbers Disappeared in an Array (Easy)](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/)



***

# 链表

经典技巧：快慢指针(双指针)

[19. Remove Nth Node From End of List (Medium)](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) // 删除倒数第n个结点

[141. Linked List Cycle (Easy)](https://leetcode.com/problems/linked-list-cycle/) // 循环链表

[142. Linked List Cycle II (Medium)](https://leetcode.com/problems/linked-list-cycle-ii/) // 循环链表找头

[206. Reverse Linked List (Easy)](https://leetcode.com/problems/reverse-linked-list/submissions/) // 链表逆置

[328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/submissions/) // 奇偶链表

# 栈和队列

应用：括号匹配等

[20. Valid Parentheses (Easy)](https://leetcode.com/problems/valid-parentheses/description/)

# 字符串

## 注意事项

### 数组大小

末尾+'\0'，初始化时多加1

[14. Longest Common Prefix (Easy)](https://leetcode.com/problems/longest-common-prefix/)

[1309. Decrypt String from Alphabet to Integer Mapping (Easy)](https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/submissions/)

## 字符串比较

strcmp(str1, str2)  //字典序

str1 = str2, return 0;

str1 > str2, return +;

str1 < str2, return -;

[524. Longest Word in Dictionary through Deleting (Medium)](https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/submissions/)

## 查找子串(KMP)

[28. Implement strStr()](https://leetcode.com/problems/implement-strstr/)



# 树

[100. Same Tree](https://leetcode.com/problems/same-tree/)

[104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

[108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)

[110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)

[993. Cousins in Binary Tree](https://leetcode.com/problems/cousins-in-binary-tree/)

# 图

# 哈希表 （hashtable）

* 思路：将值映射至数组O(n)，查找O(1)
* 注意：初始数组大小

[26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

[575. Distribute Candies](https://leetcode.com/problems/distribute-candies/)

[1365. How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/)

# 位运算

## 按位操作

^&|!
^： 按位异或， 用于取反

[136. Single Number](https://leetcode.com/problems/single-number/)

[137. Single Number II](https://leetcode.com/problems/single-number-ii/)

[389. Find the Difference](https://leetcode.com/problems/find-the-difference/)

[476. Number Complement](https://leetcode.com/problems/number-complement/)