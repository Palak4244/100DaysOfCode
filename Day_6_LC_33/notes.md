# LeetCode 33 - Search in Rotated Sorted Array

## Problem Statement
Given a rotated sorted array `nums` (without duplicates) and an integer `target`, 
return the index of `target` if it exists, otherwise return -1.

---

## Approach 1: Brute Force (Linear Search)
- Traverse the array one by one.
- Compare each element with `target`.
- If found, return index; else return -1.

### Example
nums = [4,5,6,7,0,1,2], target = 0  
→ Check each element until we find 0 at index 4.

### Time Complexity
- **O(N)** (check all elements)
- **Space Complexity:** O(1)

---

## Approach 2: Modified Binary Search (Optimized)
- Array is rotated, but still partially sorted.
- At each step:
  1. Find `mid`.
  2. Check if `nums[mid] == target`.
  3. Decide which half is sorted:
     - If `nums[left] <= nums[mid]`, then left half is sorted.
       - Check if target lies in `[left, mid]`.
     - Else right half is sorted.
       - Check if target lies in `[mid, right]`.
- Narrow down search space accordingly.

### Example
nums = [4,5,6,7,0,1,2], target = 0  
- mid = 7 → right half [0,1,2] is sorted → target lies here → binary search continues → found at index 4.

### Time Complexity
- **O(log N)** (binary search style)
- **Space Complexity:** O(1)

---

## Approach 3: Two-Step Search (Alternative)
1. First find the pivot (index of smallest element).
   - Use binary search to detect rotation point.
2. Then perform normal binary search in the correct half.

### Example
nums = [4,5,6,7,0,1,2]  
Pivot = index 4 (value 0).  
Search target in correct half using binary search.

### Time Complexity
- Pivot search: O(log N)  
- Binary search: O(log N)  
- **Total:** O(log N)  
- **Space Complexity:** O(1)

---

## Summary
- Brute Force → Easy but slow (O(N)).
- Modified Binary Search → Best approach (O(log N)).
- Pivot + Binary Search → Alternative method (O(log N)).

✅ For interviews, **Approach 2 (Modified Binary Search)** is most preferred.
