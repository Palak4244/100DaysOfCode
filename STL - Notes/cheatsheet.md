# C++ STL Cheatsheet - 100 Days of Code

This file tracks all STL concepts I use daily. Updated after each problem.

---

## 📌 Vector - Day 1 | LC 136 Single Number

**What is Vector?**
Dynamic array. Size khud badhata hai. Array se better.

**When to Use?**
Jab size pehle se pata na ho. Elements add/remove karne ho.

### Basic Syntax
```cpp
#include <vector>
using namespace std;

vector<int> nums; // Empty vector banaya
vector<int> arr(5, 0); // Size 5, sab 0 se fill
vector<int> v = {1, 2, 3}; // Direct values se initialize
```
```cpp
nums.push_back(10); // End me 10 daalo - O(1)
nums.pop_back(); // Last element hatao - O(1)
int n = nums.size(); // Kitne elements hain - O(1)
int x = nums[0]; // 0th index ka element - O(1)
nums.empty(); // Check khali hai ya nahi - O(1)
nums.clear(); // Sab delete kar do - O(n)
```
```cpp
// Method 1: Range-based loop - Easy & Clean
for(int x : nums) {
    cout << x << " ";
}

// Method 2: Index-based - Jab index chahiye ho
for(int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
}
```
