# Question No. 1

The provided code defines a struct `Node` which is used to represent a node in a tree-like data structure. Each node has a `TypeTag` field, which determines the type of operation that the node represents (e.g. addition, subtraction, etc.). The `Node` struct also has two pointers, left and right, which point to other `Nodes`.

The `makeFunc()` function is used to create new Nodes, and it takes a `TypeTag` argument to set the type of the new node.

The `fibonacci()` function is used to calculate the fibonacci sequence. It uses dynamic programming to store the previously calculated values of the fibonacci sequence, so that it doesn't have to recalculate them.

The `calc()` function takes a `Node`\* as an argument, and uses the `TypeTag` field of the node to determine which operation to perform. It then sets the value field of the node to the result of the operation.

The `main()` function creates several Nodes and links them together to form a tree-like data structure. It then calls the `calc()` function on each node to calculate the values of the tree. Finally, it prints the results of the calculations.

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
