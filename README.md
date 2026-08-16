<div align="center">

# 🎯 AlgoVault: Data Structures & Algorithms Interview Engine

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B17-blue.svg" alt="Language">
  <img src="https://img.shields.io/badge/Focus-FAANG%20%2F%20SDE%20Interviews-orange.svg" alt="Focus">
  <img src="https://img.shields.io/badge/Status-Active%20Prep-brightgreen.svg" alt="Status">
  <img src="https://img.shields.io/badge/License-MIT-yellow.svg" alt="License">
</p>

<p align="center">
  <b>A comprehensive, production-grade DSA portfolio designed for software engineering interviews.</b><br>
  <i>Focusing on core pattern recognition, theoretical foundations, and optimal space-time complexities.</i>
</p>

---

</div>

## 📌 Core Perspective & Vision

Cracking technical coding interviews requires more than just solving a problem; it requires **deep algorithmic understanding, clear communication of trade-offs, and clean execution**. 

**AlgoVault** serves as a centralized, open-source dashboard that documents a systematic approach to technical interviews. Rather than memorizing individual solutions, this repository emphasizes **pattern recognition** across different categories of problems.

---

## 🧠 Algorithmic Cheatsheet & Theoretical Foundations

### 1. Complexity Analysis Reference
When evaluating solutions in interviews, we aim to optimize both Time and Space complexity:

| Complexity Class | Big-O Notation | Typical Algorithm Example |
| :--- | :--- | :--- |
| **Constant** | $\mathcal{O}(1)$ | Hash Map lookup, Array index access |
| **Logarithmic** | $\mathcal{O}(\log N)$ | Binary Search, Binary Search Trees |
| **Linear** | $\mathcal{O}(N)$ | Single-pass traversal, Two Pointers |
| **Log-Linear** | $\mathcal{O}(N \log N)$ | Merge Sort, Quick Sort, Heap Operations |
| **Quadratic** | $\mathcal{O}(N^2)$ | Nested loops, Matrix traversals, Brute-force DP |
| **Exponential** | $\mathcal{O}(2^N)$ | Backtracking, Recursive subsets |

---

### 2. Core Pattern Blueprint

> 💡 **Two Pointers:** Used in sorted arrays or strings to find pairs or ranges in linear time $\mathcal{O}(N)$ without extra space.  
> 💡 **Sliding Window:** Tracks contiguous sub-segments of linear structures (strings/arrays) to optimize sub-array evaluation from $\mathcal{O}(N^2)$ to $\mathcal{O}(N)$.  
> 💡 **Binary Search:** Applied when the search space is monotonic or ordered to achieve logarithmic execution $\mathcal{O}(\log N)$.  
> 💡 **Dynamic Programming:** Solves complex overlapping sub-problems by storing intermediate results using memoization or tabular state transitions.

---

## 📊 Interview Solutions Progress

| Company | Problem Name | Difficulty | Language | Solution |
| :--- | :--- | :---: | :---: | :---: |
| **Amazon,Google,Microsoft** | [LC 3731:Find Missing Elements](https://leetcode.com/problems/find-missing-elements/description/?envType=daily-question&envId=2026-08-04) | Easy | C++ | [✅ Code](./solutions/Find_Missing_Elements.cpp) |
| **Amazon,Google,Microsoft,Meta,Apple,Uber,Bloomberg** | [LC 75: Sort Colors in 0s,1s and 2s](https://leetcode.com/problems/sort-colors/) | Medium | C++ | [✅ Code](./solutions/Sort_Colors.cpp) |
| **Amazon,Google,Microsoft,Meta,Apple,Uber,GoldmannSaches** | [LC 31: Next Permutation](https://leetcode.com/problems/next-permutation/) | Medium | C++ | [✅ Code](./solutions/Next_Permutataion.cpp) |
| **Microsoft** | [LC 567: Permutation in a String](https://leetcode.com/problems/permutation-in-string/) | Medium | C++ | [✅ Code](./solutions/Permutataion_In_String.cpp) |
| **Amazon,Microsoft,Google,Apple,Uber,Bloomberg** | [LC 48: Rotate Image](https://leetcode.com/problems/rotate-image/) | Medium | C++ | [✅ Code](./solutions/Rotate_Image.cpp) |
| **Microsoft,Adobe,Samsung,MakeMyTrip,J.P.Morgan,PayPal,PayTM** | [LC 151: Reverse Words In String](https://leetcode.com/problems/reverse-words-in-a-string/) | Medium | C++ | [✅ Code](./solutions/Reverse_Words_In_String.cpp) |
| **Microsoft,Amazon,Meta,Uber,GoldmannSaches** | [LC 74: Search A 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) | Medium | C++ | [✅ Code](./solutions/ Search_A_2D_Matrix.cpp) |

---

## 📂 Repository Structure

```text
AlgoVault/
├── 📂 Array-TwoPointers/
│   ├── LC001_Two_Sum.cpp
│   └── LC011_Container_With_Most_Water.cpp
├── 📂 Linked-List/
│   └── LC002_Add_Two_Numbers.cpp
├── 📂 Strings-SlidingWindow/
│   ├── LC003_Longest_Substring.cpp
│   ├── LC006_Zigzag_Conversion.cpp
│   └── LC007_Reverse_Integer.cpp
├── 📂 Binary-Search/
│   └── LC004_Median_Two_Arrays.cpp
├── 📂 Dynamic-Programming/
│   └── LC010_Regex_Matching.cpp
└── 📄 README.md
