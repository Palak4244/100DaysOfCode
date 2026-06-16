# Day 06 – LeetCode 238: Product of Array Except Self

## 🎯 Aim
Ek array `nums` diya hai. Har element ke liye product of all elements except itself return karna hai.  
⚠️ Division use nahi karna.

---

## 🧩 Theory / Approaches

### 1. Brute Force Approach
- Har index ke liye baaki sab elements multiply kar do.
- Example: nums = [1,2,3,4]  
  For index 0 → 2*3*4 = 24  
  For index 1 → 1*3*4 = 12  
  … and so on.

⏱️ Time Complexity: **O(n²)**  
📦 Space Complexity: **O(1)** (no extra array)

---

### 2. Prefix + Suffix Arrays (Optimized Approach)
- Idea: Har element ke liye uske left side ka product aur right side ka product calculate karo.
- Step 1: Prefix array banao → prefix[i] = product of all elements before i.  
- Step 2: Suffix array banao → suffix[i] = product of all elements after i.  
- Step 3: Final result[i] = prefix[i] * suffix[i].

Example: nums = [1,2,3,4]  
- Prefix = [1, 1, 2, 6]  
- Suffix = [24, 12, 4, 1]  
- Result = [24, 12, 8, 6]

⏱️ Time Complexity: **O(n)**  
📦 Space Complexity: **O(n)** (prefix + suffix arrays)

---

### 3. Space Optimized Approach (Best Approach)
- Output array ko hi prefix store karne ke liye use karo.  
- Fir ek variable `rightProduct` rakho jo right side ka product maintain kare.  
- Traverse left → fill prefix in output.  
- Traverse right → multiply with `rightProduct`.

Example: nums = [1,2,3,4]  
- Left pass → output = [1, 1, 2, 6]  
- Right pass → output = [24, 12, 8, 6]

⏱️ Time Complexity: **O(n)**  
📦 Space Complexity: **O(1)** (excluding output array)

---

## ✅ Conclusion
- **Brute Force** → Easy but slow (O(n²)).  
- **Prefix + Suffix** → Fast but extra space.  
- **Space Optimized** → Best for interviews (O(n) time, O(1) space).  

---

## 📊 Result
Efficient solution possible without division, using prefix + suffix logic.
