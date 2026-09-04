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
| **Microsoft,Amazon,Meta,Uber,GoldmannSaches** | [LC 74: Search A 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) | Medium | C++ | [✅ Code](./solutions/Search_a_2D_Matrix.cpp) |
| **Microsoft,Amazon,Meta,Google,GoldmannSaches** | [LC 74: Search A 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii) | Medium | C++ | [✅ Code](./solutions/Search_a_2D_Matrix_II.cpp) |
| **TCS,Wipro,Infosys,Cognizant,Capgemini,Accenture** | [LC 344: Reverse String](https://leetcode.com/problems/reverse-string/) | Easy | C++ | [✅ Code](./solutions/Reverse_String.cpp) |
| **Amazon,Meta,Google,Microsoft,Aobe,Uber,GoldmannSaches,Walmart** | [LC 560: Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) | Easy | C++ | [✅ Code](./solutions/Subarray_Sum_Equals_k.cpp) |
| **Amazon,Meta,Google,Microsoft** | [LC 47: Permutations II](https://leetcode.com/problems/permutations-ii/) | Medium | C++ | [✅ Code](./solutions/Permutations_II.cpp) |
| **Amazon,Meta,Google,Microsoft,Apple,Goldmannsaches,ByteDance,Uber,Adobe,Oracle,Bloomberg** | [LC 51:N-Queens](https://leetcode.com/problems/n-queens/) | Hard | C++ | [✅ Code](./solutions/N_Queens.cpp) |
| **Amazon,Meta,Google,Microsoft,Apple,Goldmannsaches,CapitonOne,Visa,Walmart** | [LC 49:Group Anagrams](https://leetcode.com/problems/group-anagrams/) | Medium | C++ | [✅ Code](./solutions/Group_Anagrams.cpp) |
| **Amazon,Meta,Google,Microsoft** | [LC 52:N Queens II](https://leetcode.com/problems/n-queens-ii/) | Hard | C++ | [✅ Code](./solutions/N_Queens_II.cpp) |
| **Goldmannsaches,CapitonOne,Visa,Walmart,LinkedIn** | [LC 69:SQRT(x)](https://leetcode.com/problems/sqrtx/) | Easy | C++ | [✅ Code](./solutions/sqrt(x).cpp) |
| **Goldmannsaches,Amazon,Meta,Apple,Oracle** | [LC 64:Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/) | Medium | C++ | [✅ Code](./solutions/Minimum_Path_Sum.cpp) |
| **Google,Microsoft,Goldmannsaches,Amazon,Meta,Apple,Oracle** | [LC 55:Jump Game](https://leetcode.com/problems/jump-game/) | Medium | C++ | [✅ Code](./solutions/Jump_Game.cpp) |
| **Google,Microsoft,Adobe,Amazon,Meta,Apple** | [LC 60:Permutation Sequence](https://leetcode.com/problems/permutation-sequence/) | Hard | C++ | [✅ Code](./solutions/Permutation_Sequence.cpp) |
| **Google,Microsoft,Adobe,Amazon,Meta,Apple,AirBnb,LinkedIn,Cortera** | [LC 68:Text Justification](https://leetcode.com/problems/text-justification/) | Hard | C++ | [✅ Code](./solutions/Text_Justification.cpp) |
| **Google,Microsoft,Adobe,Amazon,Meta,Apple,LinkedIn,TripAdvisor** | [LC 65:Valid Number](https://leetcode.com/problems/valid-number/) | Hard | C++ | [✅ Code](./solutions/Valid_Number.cpp) |
| **Google,Microsoft,Adobe,Amazon,Meta,Apple,LinkedIn,Uber,Oracle,Airbnb** | [LC 76:Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | Hard | C++ | [✅ Code](./solutions/Minimum_Window_Substring.cpp) |
| **Google,Microsoft,Adobe,Amazon,Meta,Apple,Uber** | [LC 94:Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | Hard | C++ | [✅ Code](./solutions/Binary_Tree_Inorder_Traversal.cpp) |
| **Google,Microsoft,Adobe,Amazon,Meta,Apple,Uber** | [LC 57:Insert Interval](https://leetcode.com/problems/binary-tree-inorder-traversal/) | Medium | C++ | [✅ Code](./solutions/Insert_Interval.cpp) |
| **Google,Microsoft,Adobe,Amazon,Meta,Bloomberg** | [LC 86:Partition List](https://leetcode.com/problems/partition-list/) | Medium | C++ | [✅ Code](./solutions/Partition_List.cpp) |

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
