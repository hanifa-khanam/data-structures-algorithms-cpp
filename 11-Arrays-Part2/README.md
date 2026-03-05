# Arrays Part 2 - Advanced Problems
---

## Topics Covered

#### 1️⃣ Print All Subarrays
- Generate all possible continuous subarrays.
- Demonstrates triple nested loop logic.
- Time Complexity: O(n³)

---

#### 2️⃣ Subarray Questions
- Based on generating and analyzing subarrays.
- Helps build foundation for advanced problems.

---

#### 3️⃣ Maximum Sum Subarray (Brute Force)
- Check sum of every possible subarray.
- Time Complexity: O(n³)
- Concept: Exhaustive search

---

#### 4️⃣ Maximum Sum Subarray (Slightly Optimized)
- Avoid recalculating sum repeatedly.
- Time Complexity: O(n²)
- Concept: Reusing previous computation

---

#### 5️⃣ Kadane’s Algorithm (Most Important)
- Finds maximum sum subarray in O(n).
- Uses greedy logic.
- If running sum becomes negative → reset.
- Time Complexity: O(n)
- Space Complexity: O(1)

Key Idea:

**`If past sum hurts future gain, reset it.`**

---

#### 6️⃣ Buy and Sell Stock (Single Transaction)
- Find maximum profit from one buy and one sell.
- Track minimum price so far.
- Calculate profit dynamically.
- Time Complexity: O(n)
- Space Complexity: O(1)

Core Formula:

**`profit = current_price - minimum_price_so_far`**


### Complexity Summary

| Problem | Time Complexity | Space Complexity |
|----------|----------------|----------------|
| Print Subarrays | O(n³) | O(1) |
| Max Subarray (Brute) | O(n³) | O(1) |
| Max Subarray (Optimized) | O(n²) | O(1) |
| Kadane’s Algorithm | O(n) | O(1) |
| Buy & Sell Stock | O(n) | O(1) |

---
