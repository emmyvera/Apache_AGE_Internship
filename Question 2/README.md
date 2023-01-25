# Question No. 2

The provided code defines three functions for calculating the value of `F(n)` according to the given formula `F(n) = F(n-3) + F(n -2)` where `F(0) = 0`, `F(1) = 1`, and `F(2) = 2`.

The first function `dynamicFn()` uses dynamic programming to calculate the value of F(n). It declares an array 'f' of size n+2 to store the values of F(n) and uses a for loop to iterate from i = 3 to n. Inside the loop it sets the value of `f[i]` to be `f[i-3] + f[i-2]`. It then returns the value of f[n].

The second function `recursiveFn()` uses recursion to calculate the value of F(n). The base case is when `n <= 2`, in which case it returns n. Otherwise, it returns `recursiveFn(n - 3) + recursiveFn(n - 2)`.

The third function `recursive_Memoization()` uses recursion with memoization to calculate the value of F(n). Memoization is a technique for storing the results of expensive function calls and returning the cached result when the same inputs occur again. It uses an array memo[] to store the value of F(n) if it has been already calculated. This way it avoids recalculating the same values again and again.

In the main function, the code calls each of the three functions with different inputs and prints the results.

## Dynamic Programming

Dynamic programming (DP) is a method for solving problems by breaking them down into smaller subproblems and storing the solutions to these subproblems in a table, so that they can be reused to solve the larger problem.

### Advantages of Dynamic Programming (DP)

1. Efficiency: DP can be much more efficient than other methods for solving problems, such as brute force or recursion, because it avoids redundant computations by reusing previously computed solutions.

2. Simplicity: DP can make solving complex problems simpler by breaking them down into smaller subproblems that are easier to understand and solve.

3. Optimality: DP can be used to find optimal solutions to problems, such as the shortest path in a graph or the longest common subsequence of two strings.

### Disadvantages of Dynamic Programming (DP)

1. Space complexity: DP requires storing the solutions to subproblems in a table, which can take up a lot of memory, especially for large problems.

2. Overlapping subproblems: DP is most effective when subproblems are overlapping, but if subproblems are not overlapping, it can lead to unnecessary computation.

3. Complexity of designing the DP: Designing the DP for a problem can be a complex task, especially for problems that are not well understood.

Overall, dynamic programming is a powerful tool for solving problems, but it requires careful design and implementation to be used effectively. It is best suited for problems that have overlapping subproblems and when we need optimal solutions.

## Recursive programming

Recursive programming is a method for solving problems by breaking them down into smaller subproblems and solving them recursively.

### Advantages of Recursive Programming

1. Simplicity: Recursive algorithms can be simple and easy to understand, especially for problems that have a recursive structure, such as tree traversal or file system navigation.

2. Code Reusability: Recursive functions can be called multiple times, in different parts of the code, making it very reusable.

### Disadvantages of Recursive Programming

1. Overhead: Recursive algorithms can be computationally expensive due to the overhead of function calls and the need to maintain a call stack.

2. Stack overflow: Recursive functions that call themselves repeatedly without a proper base case can cause a stack overflow, which is an error that occurs when the call stack exceeds its maximum size.

3. Difficulty in debugging: It can be difficult to debug recursive algorithms because the flow of control is not always intuitive, and it can be hard to understand how the function is behaving at each step of the recursion.

4. Space complexity: Recursive algorithms can require additional memory to store the call stack, and can also incur in large space complexity if the problem doesn't have a proper base case and it recurse indefinitely.

Overall, recursive programming can be a powerful tool for solving problems, but it requires careful design and implementation to be used effectively. It is best suited for problems that have a natural recursive structure or have a clear base case.

## Recursive Solution with Memoization

Recursive solution with memoization is a technique that combines the advantages of recursion and dynamic programming. Memoization is a technique where the solution to a subproblem is stored in a table (or memo) so that it can be reused later, rather than recomputing it. This can significantly improve the performance of recursive algorithms.

### Advantages of using Memoization with Recursive Solutions

1. Efficiency: Memoization can make a recursive algorithm much more efficient by avoiding redundant computations and reducing the time complexity of the algorithm.

2. Simplicity: Memoization can make a recursive algorithm simpler by breaking it down into smaller subproblems that are easier to understand and solve.

3. Space-time trade-off: Memoization allows for a trade-off between space and time complexity, where we can use more space to reduce the time complexity, or vice versa.

### Disadvantages of using Memoization with Recursive Solutions

1. Space complexity: Memoization requires storing the solutions to subproblems in a table, which can take up a lot of memory, especially for large problems.

2. Overlapping subproblems: Memoization is most effective when subproblems are overlapping, but if subproblems are not overlapping, it can lead to unnecessary computation.

3. Complexity of designing the memoization: Designing the memoization for a problem can be a complex task, especially for problems that are not well understood.

Overall, recursive solution with memoization is a powerful tool for solving problems, but it requires careful design and implementation to be used effectively. It can be a good option when the problem has overlapping subproblems and when we need to optimize the time complexity.

## Getting Started

### Pre-requisites and Local Development

Developers who want to use or run this project should already have C/C++ compilers, VS Code and C/C++ Extension installed on their local machines.

#### Build and Run

To build the application run the following commands on the terminal:
`gcc -o main.exe main.c`

To run the application run the following commands on the terminal:
`main.exe`

## Deployment N/A

## Authors

Oluwaloni Emmanuel

## Acknowledgements

The awesome team at Apache AGE Bitnine (Agens Graph Extension)!
