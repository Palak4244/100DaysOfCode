# LeetCode 88 - Merge Sorted Array

## 📘 Problem Statement
You are given two sorted arrays:
- `nums1` of length `m + n` (first `m` elements valid, last `n` reserved as 0s).
- `nums2` of length `n`.

Merge `nums2` into `nums1` as one sorted array.

**Example:**

---

## 🔑 Key Insight
- Arrays are already sorted.  
- Merge from the **end of nums1** to avoid overwriting.  
- Use three pointers:  
  - `i = m-1` → last valid element of nums1  
  - `j = n-1` → last element of nums2  
  - `k = m+n-1` → last index of nums1  

---

## 🛠️ Approaches

### 1. [Brute Force](ca://s?q=LeetCode_88_Brute_Force_Approach)
- Copy all elements of `nums2` into `nums1`.  
- Sort the entire array.  
- **Time Complexity:** O((m+n) log(m+n))  
- **Space Complexity:** O(1)  

---

### 2. [Two Pointer (Optimized ✅)](ca://s?q=LeetCode_88_Two_Pointer_Approach)
- Compare elements from the end of both arrays.  
- Place the larger one at the end of `nums1`.  
- Continue until all elements of `nums2` are placed.  
- **Time Complexity:** O(m+n)  
- **Space Complexity:** O(1)  

---

## ✅ Dry Run
```
nums1 = [1,2,3,0,0,0], m=3
nums2 = [2,5,6], n=3

Step 1: Compare 3 vs 6 → place 6
Step 2: Compare 3 vs 5 → place 5
Step 3: Compare 3 vs 2 → place 3
Step 4: Compare 2 vs 2 → place 2
Final Result: [1,2,2,3,5,6]
```



## 📊 Summary Table

| **Approach** | **Method** | **Time** | **Space** |
|--------------|------------|----------|-----------|
| **[Brute Force](ca://s?q=LeetCode_88_Brute_Force_Approach)** | Copy + Sort | O((m+n) log(m+n)) | O(1) |
| **[Two Pointer ✅](ca://s?q=LeetCode_88_Two_Pointer_Approach)** | Merge from end | O(m+n) | O(1) |

---

## 🚨 Tips
- Always merge **from the end** to avoid overwriting.  
- If `nums2` still has elements left after `nums1` finishes, copy them directly.  
- This is a classic **[array merge problem](ca://s?q=Array_merge_problems_in_LeetCode)**, very common in interviews.  

---
