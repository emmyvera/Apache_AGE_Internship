/*

typedef struct Node
{
TypeTag type;
} Node;
typedef enum TypeTag {
...
}

Using this structure, please write a function 
that returns fibonacci sequence based on the 
following arithmetic operations (+, -,*, /) 
and conditions. 
The fibonacci function should be implemented 
using Dynamic Programming.
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
    ADD, SUB, MUL, DIV, ABS, FIB,
} TypeTag;

typedef struct Node {
    TypeTag type;
    int value;
    struct Node *left;
    struct Node *right;
} Node;

Node* makeFunc(TypeTag type) {
    Node *node = (Node*)malloc(sizeof(Node));
    node->type = type;
    return node;
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

void calc(Node *node) {
    if (node->type == ADD) {
        node->value = node->left->value + node->right->value;
    } else if (node->type == SUB) {
        node->value = node->left->value - node->right->value;
    } else if (node->type == MUL) {
        node->value = node->left->value * node->right->value;
    } else if (node->type == DIV) {
        node->value = node->left->value / node->right->value;
    } else if (node->type == ABS) {
        node->value = abs(node->left->value);
    } else if (node->type == FIB) {
        node->value = fibonacci(abs(node->left->value));
    }
}

int main(){
    Node *add = makeFunc(ADD);
    add->left = makeFunc(10);
    add->left->value = 10;
    add->right = makeFunc(6);
    add->right->value = 6;
    calc(add);
    printf("add : %d\n", add->value);

    Node *mul = makeFunc(MUL);
    mul->left = makeFunc(5);
    mul->left->value = 5;
    mul->right = makeFunc(4);
    mul->right->value = 4;
    calc(mul);
    printf("mul : %d\n", mul->value);

    Node *sub = makeFunc(SUB);
    sub->left = add;
    sub->right = mul;
    calc(sub);
    printf("sub : %d\n", sub->value);

    Node *fibo = makeFunc(FIB);
    fibo->left = sub;
    calc(fibo);
    printf("fibo : %d\n", fibo->value);
    
    getchar();
    return 0;
}