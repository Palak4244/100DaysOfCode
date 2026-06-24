# 📝 LeetCode 344 – Reverse String

## 📌 Problem Statement
You are given a string `s`. Reverse the string **in-place** and return the result.  
Example:  
Input → `"palak"`  
Output → `"kalap"`

---

## 🔹 Approaches using STL

### ✅ Method 1: `std::reverse`
- Use the built-in STL function `reverse(start, end)` from `<algorithm>`.
- It directly reverses the string in-place with a single call.
- Cleanest and shortest solution.

### ✅ Method 2: Two Pointers + `swap`
- Initialize two pointers: one at the start (`left`), one at the end (`right`).
- Swap characters at these positions until they meet in the middle.
- Uses `std::swap` from STL for clarity.

---

## ⏱️ Time Complexity
- **O(n)** → Each character is processed once.  
- `n` = length of the string.

## 💾 Space Complexity
- **O(1)** → In-place reversal, no extra memory required.

---

## 📌 Notes
- `std::reverse` is the most concise STL-based solution.  
- Two-pointer + `swap` is more interview-friendly, as it shows the logic explicitly.  
- Both approaches are efficient and accepted on LeetCode.  
- Recommended: **Use `std::reverse` for clean code in contests/projects.**
