# LeetCode 31 - Next Permutation

## 📝 Problem Statement
Array ko next lexicographical permutation mein convert karna hai.  
Agar next permutation possible nahi hai (array descending order mein hai), toh usko ascending order mein rearrange karna hai.

---

## 🔎 Example
Input: [1,2,3] → Output: [1,3,2]  
Input: [3,2,1] → Output: [1,2,3]  

---

## 🛠️ Approaches

### **[Brute Force Approach](ca://s?q=Brute_force_approach_for_Next_Permutation)**
- Sare permutations generate karo.
- Unko sort karo aur current permutation ke baad wala pick karo.
- Bahut inefficient hai kyunki permutations `n!` hote hain.
- **Time Complexity:** `O(n!)`  
- **Space Complexity:** `O(n)` (permutations store karne ke liye)

---

### **[Sorting Based Approach](ca://s?q=Sorting_based_approach_for_Next_Permutation)**
- Array ke agle permutation ko find karne ke liye:
  1. Pivot element identify karo (jaha `nums[i] < nums[i+1]`).
  2. Uske baad ke elements ko sort karo.
  3. Just larger element ke saath swap karo.
- Sorting step costly hai.
- **Time Complexity:** `O(n log n)`  
- **Space Complexity:** `O(1)` (agar in-place sort use karein)

---

### **[Optimized Approach](ca://s?q=Optimized_approach_for_Next_Permutation)**
Steps:
1. Right se traverse karke pehla index `i` find karo jaha `nums[i] < nums[i+1]`. (Pivot)
2. Fir right se traverse karke pehla element `j` find karo jaha `nums[j] > nums[i]`.
3. Swap `nums[i]` aur `nums[j]`.
4. Reverse subarray from `i+1` to end (isse smallest order milta hai).
- Yehi standard aur efficient solution hai.
- **Time Complexity:** `O(n)` (single traversal + reverse)  
- **Space Complexity:** `O(1)` (in-place)

---

## ✅ Key Insight
- Next permutation matlab: current arrangement se thoda bada lexicographical order.
- Agar array descending hai → koi next permutation nahi → ascending order return karo.
- Optimized approach interview ke liye must-know hai.

---

## 📌 Example Walkthrough
Input: [1,2,3]  
- Pivot = 2 (kyunki 2 < 3)  
- Just larger element = 3  
- Swap → [1,3,2]  
- Reverse suffix (already sorted) → [1,3,2] ✅

---

## 🎯 Final Notes
- Brute force → sirf samajhne ke liye.  
- Sorting based → thoda better but still costly.  
- Optimized → best approach (pivot → swap → reverse suffix).
