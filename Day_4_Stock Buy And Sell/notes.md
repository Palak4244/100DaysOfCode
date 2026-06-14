# LeetCode 121 - Best Time to Buy and Sell Stock

## Problem Statement
Ek array `prices[]` diya hai jisme `prices[i]` represent karta hai stock ka price on day `i`.  
Tumhe ek hi transaction karni hai (ek din buy aur ek din sell) aur maximum profit find karna hai.  
Agar profit possible nahi hai toh answer `0`.

---

## Approaches to Solve

### 1. Brute Force (Naive Approach)
- Har possible pair `(buyDay, sellDay)` check karo.  
- Profit = `prices[sellDay] - prices[buyDay]`.  
- Maximum profit track karo.  
- **Drawback:** Time complexity O(n²), bada input hoga toh slow ho jayega.

---

### 2. Optimized Approach (Single Pass)
- Ek variable `minPrice` rakho jo ab tak ka lowest price store karega.  
- Har din ke liye profit calculate karo: `currentPrice - minPrice`.  
- Agar yeh profit maximum hai toh `maxProfit` update karo.  
- End mein `maxProfit` return karo.  
- **Benefit:** Sirf ek loop chalta hai, fast solution.

---

## Example Dry Run
Input: `prices = [7,1,5,3,6,4]`  
- Day 1: minPrice = 7, profit = 0  
- Day 2: minPrice = 1, profit = 0  
- Day 3: profit = 5 - 1 = 4 → maxProfit = 4  
- Day 4: profit = 3 - 1 = 2 → maxProfit = 4  
- Day 5: profit = 6 - 1 = 5 → maxProfit = 5  
- Day 6: profit = 4 - 1 = 3 → maxProfit = 5  

Output: `5`

---

## Time & Space Complexity
- **Brute Force:**  
  - Time Complexity: O(n²)  
  - Space Complexity: O(1)  

- **Optimized Approach:**  
  - Time Complexity: O(n) (sirf ek loop chalta hai)  
  - Space Complexity: O(1) (extra space nahi use hota)

---

## Key Notes
- Always **buy at minimum price** aur uske baad **sell at maximum price**.  
- Har din ke liye profit calculate karke maximum update karna hai.  
- Agar profit possible nahi hai toh answer `0`.  
- Optimized approach hamesha prefer karo kyunki fast hai aur large inputs handle kar sakta hai.

