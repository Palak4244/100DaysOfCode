# Day-05: Container With Most Water (LeetCode 11)

## 📝 Problem Statement
Given `n` non-negative integers where each represents the height of a vertical line on the x-axis, find two lines that together with the x-axis form a container, such that the container holds the most water.

---

## 🚀 Brute Force Approach

### Idea
- Har possible pair of lines `(i, j)` ko check karo.
- Container ka area calculate karo:  
  `Area = min(height[i], height[j]) * (j - i)`
- Sabhi pairs ke liye maximum area track karo.

### Dry Run Example
Heights = [1, 8, 6, 2, 5, 4, 8, 3, 7]  
- Pair (1, 8): Area = min(1,8) * (1-0) = 1  
- Pair (8, 7): Area = min(8,7) * (8-1) = 49  
- Aur aise hi sabhi pairs check karte hain.

### Complexity
- **Time Complexity:** O(n²) → Har pair check karna hai.  
- **Space Complexity:** O(1) → Extra space nahi lagta.

---

## ⚡ Optimized Two Pointer Approach

### Idea
- Ek pointer start mein (`left = 0`) aur ek end mein (`right = n-1`) rakho.
- Area calculate karo:  
  `Area = min(height[left], height[right]) * (right - left)`
- Maximum area update karo.
- **Pointer movement rule:**  
  - Jo line chhoti hai usko move karo (kyunki area ka limit chhoti line decide karti hai).  
  - Agar left height < right height → `left++`  
  - Else → `right--`

### Dry Run Example
Heights = [1, 8, 6, 2, 5, 4, 8, 3, 7]  
- left=0, right=8 → Area = min(1,7) * 8 = 8  
- left=1, right=8 → Area = min(8,7) * 7 = 49 (max so far)  
- left=1, right=7 → Area = min(8,3) * 6 = 18  
- left=1, right=6 → Area = min(8,8) * 5 = 40  
- … continue until pointers meet.

Final Answer = 49

### Complexity
- **Time Complexity:** O(n) → Har element ek hi baar consider hota hai.  
- **Space Complexity:** O(1) → Extra space nahi lagta.

---

## ✨ Key Takeaways
- Brute force approach simple hai but inefficient (O(n²)).  
- Two pointer approach smartly eliminate karta hai unnecessary comparisons aur O(n) mein solve hota hai.  
- Yeh problem ek classic example hai **Greedy + Two Pointer Technique** ka.

---

## 📊 Complexity Comparison

| Approach                | Time Complexity | Space Complexity |
|--------------------------|-----------------|-----------------|
| Brute Force              | O(n²)           | O(1)            |
| Two Pointer Optimized    | O(n)            | O(1)            |

---
