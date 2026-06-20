# LeetCode 75 – Sort Colors (Dutch National Flag Problem)

## Problem Statement
Hume ek array diya hai jisme sirf 3 types ke numbers hote hain:  
- 0 → Red  
- 1 → White  
- 2 → Blue  

Task: Array ko sort karna hai in-place (without using extra space), taki order ho:  
`0s → 1s → 2s`.

---

## Approach 1: Brute Force (Sorting)
Sabse simple idea: Array ko directly sort kar do using built-in sort function.

### Steps
- Use `sort(nums.begin(), nums.end())` in C++.
- Ye automatically 0,1,2 ko ascending order mein arrange kar dega.

### Complexity
- **Time:** O(n log n) (sorting cost)  
- **Space:** O(1) (in-place sort)

⚠️ Ye approach easy hai but not optimal, kyunki problem specifically O(n) solution maangti hai.

---

## Approach 2: Counting Sort (Frequency Count)
Ek aur simple approach hai counting sort use karna.

### Steps
1. Count karo kitne 0, 1, 2 hain.
2. Array ko overwrite karo:
   - Pehle saare 0 likho.
   - Fir saare 1 likho.
   - Fir saare 2 likho.

### Example
Input: `[2,0,2,1,1,0]`  
Count: 0 → 2, 1 → 2, 2 → 2  
Output: `[0,0,1,1,2,2]`

### Complexity
- **Time:** O(n) (single pass for counting + rewriting)  
- **Space:** O(1) (sirf counters use kiye)

✅ Ye approach efficient hai, but do passes lagte hain.

---

## Approach 3: Dutch National Flag Algorithm (Optimal)
Ye sabse famous aur optimal solution hai. Sirf **one pass** mein array sort ho jaata hai.

### Idea
- Use 3 pointers: `low`, `mid`, `high`.
- `low` → boundary for 0s  
- `mid` → current element check karne ke liye  
- `high` → boundary for 2s

### Steps
1. Start with `low=0`, `mid=0`, `high=n-1`.
2. Jab tak `mid <= high`:
   - Agar `nums[mid] == 0`: swap with `nums[low]`, increment `low` & `mid`.
   - Agar `nums[mid] == 1`: just increment `mid`.
   - Agar `nums[mid] == 2`: swap with `nums[high]`, decrement `high`.

### Example
Input: `[2,0,2,1,1,0]`  
Process:
- Swap 2 with last → `[0,0,2,1,1,2]`  
- Swap 0 with low → `[0,0,2,1,1,2]`  
- Continue until sorted → `[0,0,1,1,2,2]`

### Complexity
- **Time:** O(n) (single pass)  
- **Space:** O(1) (no extra memory)

✅ Ye best approach hai, interview mein yehi expected hota hai.

---

## Final Notes
- **Brute Force:** Easy but O(n log n).  
- **Counting Sort:** O(n), do passes.  
- **Dutch National Flag:** O(n), one pass, most optimal.

---

## Summary
  "Brute force mein sort karenge → O(n log n). Counting sort mein frequency count karke overwrite karenge → O(n). Optimal Dutch National Flag algorithm mein 3 pointers use karke ek hi pass mein solve karenge → O(n)."

