# Day 3 – LeetCode 50: Pow(x, n)

## 📌 Problem
Implement the function `pow(x, n)` which calculates \(x^n\).

---

## 🧠 Key Concepts
- **Negative Exponent Handling**
  - If \(n < 0\), convert it to positive by taking reciprocal:
    

\[
    x^n = \frac{1}{x^{-n}}
    \]



- **Binary Exponentiation (Fast Power)**
  - Reduces multiplications using divide-and-conquer:
    - If \(n\) is even: \(x^n = x^(n/2)* x^(n/2)\)
    - If \(n\) is odd: \(x^n = x * x^(n-)\)

- **Time Complexity**
  - **O(log n)** using binary exponentiation.
  - Much faster than naive **O(n)** approach.

---
