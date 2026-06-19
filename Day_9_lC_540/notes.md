# LeetCode 540 – Single Element in a Sorted Array

## 📘 Problem Statement
Ek sorted array diya hai jisme har element **exactly twice** aata hai, sirf ek element aisa hai jo **single** hai.  
Hume us single element ko find karna hai.

### Example
Input: [1,1,2,3,3,4,4,8,8]  
Output: 2

---

## 🔑 Approaches

### 1. Brute Force Approach
- Har element ko check karo aur dekho ki uska pair hai ya nahi.
- Agar koi element ka pair nahi mila → wahi answer hai.

**Time Complexity:** O(n)  
**Space Complexity:** O(1)  

---

### 2. XOR Approach
- Property: `a ^ a = 0` aur `a ^ 0 = a`.  
- Agar hum saare elements ko XOR kar denge, toh pairs cancel ho jayenge aur single element bacha rahega.

**Time Complexity:** O(n)  
**Space Complexity:** O(1)  

---

### 3. Binary Search (Optimized Approach)
Array sorted hai → binary search use kar sakte hain.  
Is approach me hum **index parity (odd/even)** ka use karte hain.

**Detailed Steps:**
1. **Initialize:** `low = 0`, `high = n-1`.  
2. **Find mid:** `mid = (low + high) / 2`.  
3. **Check pairing rule:**  
   - Agar `mid` even hai → normally `nums[mid]` ka pair `nums[mid+1]` hona chahiye.  
   - Agar `mid` odd hai → normally `nums[mid]` ka pair `nums[mid-1]` hona chahiye.  
4. **If pair exists (rule follow ho raha hai):**  
   - Matlab single element abhi tak nahi mila → move to **right half** (`low = mid+1`).  
5. **If pair break ho gaya (rule follow nahi ho raha):**  
   - Matlab single element left side me hai → move to **left half** (`high = mid`).  
6. Continue binary search jab tak `low < high`.  
7. End me `low` hi single element ka index hoga.

**Time Complexity:** O(log n)  
**Space Complexity:** O(1)  

---

## 🚨 Common Pitfalls
- Indexing galat ho sakti hai (odd/even check carefully karna).  
- Binary search me boundaries handle karna zaroori hai.  
- XOR approach simple hai but binary search zyada efficient hai.

---

## ✅ Conclusion
- Agar array chhota hai → XOR approach best hai (easy to code).  
- Agar array bada hai → Binary Search approach use karo (fastest).
