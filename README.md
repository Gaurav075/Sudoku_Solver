# Sudoku_Solver
<div align="center">
  <br />
    <a href="#" >
      <img src="https://your-project-banner-link.com" alt="Project Banner">
    </a>
  <br />

  <h3 align="center">Sudoku Solver using Backtracking in C++</h3>

   <div align="center">
    Efficiently solves any valid Sudoku puzzle using the power of backtracking.
    </div>
</div>

## 📋 <a name="table">Table of Contents</a>

1. 🤖 [Introduction](#introduction)
2. ⚙️ [Tech Stack](#tech-stack)
3. 🔋 [Features](#features)
4. 🤸 [Quick Start](#quick-start)
5. 🔗 [Links](#links)

## <a name="introduction">🤖 Introduction</a>

The Sudoku Solver project is a command-line tool written in C++ that employs the backtracking algorithm to solve Sudoku puzzles. Backtracking is a depth-first search (DFS) technique widely used in solving constraint satisfaction problems like Sudoku. This solver takes a partially filled 9x9 grid and fills it in such a way that every row, column, and 3x3 sub-grid contains digits from 1 to 9 without repetition.

This project demonstrates key Data Structures and Algorithms (DSA) concepts, including recursion, optimization, and problem-solving strategies.

## <a name="tech-stack">⚙️ Tech Stack</a>

- **Language**: C++
- **Algorithm**: Backtracking
- **Development Environment**: Any C++ Compiler (e.g., GCC, Clang, MSVC)
- **IDE**: Visual Studio Code / Code::Blocks (Optional)

## <a name="features">🔋 Features</a>

- Solves any valid Sudoku puzzle with efficiency.
- Outputs the solution in a user-friendly grid format.
- Detects invalid inputs and prompts the user to re-enter.
- Demonstrates the concept of recursive backtracking in DSA.
- Lightweight and fast with minimal dependencies.

## <a name="quick-start">🤸 Quick Start</a>

Follow these steps to set up and run the project locally on your machine.

### Prerequisites:

Make sure you have the following installed:

- A C++ compiler (e.g., GCC, Clang, or MSVC)
- A code editor (e.g., [VS Code](https://code.visualstudio.com/), Code::Blocks, or Sublime Text)

### Steps to Run:

1. **Clone the Repository**

   Open your terminal and run the following command:

   ```bash
   git clone https://github.com/Gaurav075/Sudoku_Solver.git
   cd sudoku-solver
   ```

2. **Compile the Program**

   Use a C++ compiler to compile the source code. For example, using GCC:

   ```bash
   g++ sudoku_solver.cpp -o sudoku_solver
   ```

3. **Run the Program**

   Execute the compiled file:

   ```bash
   ./sudoku_solver
   ```

4. **Input a Sudoku Puzzle**

   Enter the puzzle as a 9x9 grid where empty cells are represented by 0. Example:

   ```
   5 3 0 0 7 0 0 0 0
   6 0 0 1 9 5 0 0 0
   0 9 8 0 0 0 0 6 0
   8 0 0 0 6 0 0 0 3
   4 0 0 8 0 3 0 0 1
   7 0 0 0 2 0 0 0 6
   0 6 0 0 0 0 2 8 0
   0 0 0 4 1 9 0 0 5
   0 0 0 0 8 0 0 7 9
   ```

5. **View the Solution**

   The program will print the solved Sudoku grid or notify if the puzzle is invalid.

### Example Output:

Input Grid:

```
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9
```

Solved Grid:

```
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```

## <a name="links">🔗 Links</a>

- [GitHub Repository](https://github.com/Gaurav075/Sudoku_Solver.git)
- [Sudoku Algorithm Explanation](https://en.wikipedia.org/wiki/Sudoku_solving_algorithms)

---

**Maintained By**: [Gaurav Gupta](https://github.com/Gaurav075)

