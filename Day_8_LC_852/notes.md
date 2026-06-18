# LeetCode 852 - Peak Index in a Mountain Array

## 📌 Problem
We are given a **mountain array** (pehle strictly increasing, phir strictly decreasing).  
Task: Find the **index of the peak element** (sabse bada element jo apne dono neighbors se bada ho).

---

## 🐢 Brute Force Approach

### Idea
- Har element ko check karo (except first and last).
- Agar `arr[i] > arr[i-1] && arr[i] > arr[i+1]`, toh woh peak hai.
- Return that index.

### Example
Array: `[0, 2, 3, 4, 5, 3, 1]`  
- Check each element → Peak at index `4` (value = 5).

### Complexity
- **Time Complexity:** O(n) → Har element check karna padta hai.  
- **Space Complexity:** O(1) → Extra memory use nahi hoti.

---

## ⚡ Optimized Approach (Binary Search)

### Idea
Instead of checking har element, hum **binary search** use karte hain.  
Binary search har step mein array ko half kar deta hai, isliye fast hai.

### Step-by-Step Explanation
1. Start aur end pointers set karo (0 aur n-1).
2. Har step mein ek `mid` index calculate karo.
3. Compare `arr[mid]` aur `arr[mid+1]`:
   - Agar `arr[mid] > arr[mid+1]` → matlab abhi descending slope pe ho.  
     Peak left side mein hai (mid bhi ho sakta hai).  
     → End ko mid pe shift karo.
   - Agar `arr[mid] < arr[mid+1]` → matlab abhi ascending slope pe ho.  
     Peak right side mein hai.  
     → Start ko mid+1 pe shift karo.
4. Loop tab tak chalega jab tak `start == end`.  
   Yehi peak index hoga.

### Example Dry Run
Array: `[0, 2, 3, 4, 5, 3, 1]`  
- mid = 3 → arr[3]=4 < arr[4]=5 → move right  
- mid = 4 → arr[4]=5 > arr[5]=3 → move left  
- Converges at index **4**, peak = 5.

### Complexity
- **Time Complexity:** O(log n) → Har step mein search space half ho jaata hai.  
- **Space Complexity:** O(1) → Extra memory use nahi hoti.

---

## ✅ Summary
- **Brute Force:** Easy to understand, O(n) time.  
- **Binary Search:** Efficient, O(log n) time.  
- Best approach = **Binary Search** (fast and optimal).
