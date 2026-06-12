# Day 02 | LeetCode 53: Maximum Subarray

## Problem
Array me contiguous subarray ka maximum sum find karna hai.
Ex: [-2,1,-3,4,-1,2,1,-5,4] → Ans: 6

## Approach 1: Brute Force
Har possible subarray i se j tak ka sum nikalo.
TC: O(n²) | SC: O(1) | Status: TLE

## Approach 2: Kadane's Algorithm
Agar currentSum negative ho jaye to reset karke nums[i] se naya start karo,kyoki subarray ek continuous hoti hai.

Core Logic: maxSum = max(currentSum , maxSum)
TC: O(n) | SC: O(1) | Status: Accepted ✅

## Key Learning
Negative sum ko carry karne ka faayda nahi hai. DP ka basic concept hai ye.

---
Code: solution.cpp
Topic: Arrays, DP
