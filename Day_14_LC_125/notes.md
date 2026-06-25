# LeetCode 125: Valid Palindrome

## 📝 Problem Statement
Ek string diya gaya hai. Hume check karna hai ki kya ye **palindrome** hai ya nahi.  
Palindrome matlab: string ko agar reverse karein to wahi string milti hai.  
Example: `"madam"`, `"racecar"` are palindromes.

Important point:  
- Sirf **alphanumeric characters** consider karne hain (letters + digits).  
- Case-insensitive check karna hai (Uppercase aur lowercase ko same treat karna hai).  
- Spaces, commas, punctuation ignore karna hai.

---

## 🔑 Approach

### [1. Clean and Two Pointer](ca://s?q=Explain_two_pointer_approach_for_palindrome)
1. Sabse pehle string ko filter karo:
   - Non-alphanumeric characters hatao.
   - Sabko lowercase mein convert karo.
2. Ab **two pointer technique** use karo:
   - Ek pointer start se (`left`), ek end se (`right`).
   - Agar dono characters same hain → aage badho.
   - Agar mismatch mila → palindrome nahi hai.
3. Agar poora traversal bina mismatch ke complete ho gaya → palindrome hai.

---

## 📊 Complexity Analysis

- **Time Complexity (TC):**  
  - O(n), kyunki hum string ke har character ko ek baar check karte hain.  
  - `n` = length of string.

- **Space Complexity (SC):**  
  - O(1), agar hum inplace two pointer use karein.  
  - O(n), agar hum ek cleaned string banate hain alphanumeric filter ke liye.

---

## ✅ Example Walkthrough

Input: `"A man, a plan, a canal: Panama"`  
- Cleaned string → `"amanaplanacanalpanama"`  
- Two pointer check → sab match ho gaye.  
- Output → `true`

Input: `"race a car"`  
- Cleaned string → `"raceacar"`  
- Two pointer check → mismatch mila.  
- Output → `false`

---

## 🎯 Key Takeaways
- Palindrome check karte waqt **ignore non-alphanumeric** aur **case-insensitive** comparison karna zaroori hai.  
- **Two pointer** approach is most efficient.  
