/*
Quesion 2
Problem
F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2

Assume that n will be less than or equal to 
the maximum integer value and non-negative. 
You only need to write the function(s).

*/

#include<stdio.h>

// Using Dynamic Programming - (First way)
int dynamicFn(int n){
  
  /* Declare an array to store Fn numbers. */
  int f[n+2];   // 1 extra to handle case, n = 0
  int i;
 
  /* 0th, 1st and 2nd number of the series are 0, 1 and 2*/
  f[0] = 0;
  f[1] = 1;
  f[2] = 2;
 
  for (i = 3; i <= n; i++){
      /* F(n) = F(n-3) + F(n -2) and continue the series 
          */
      f[i] = f[i-3] + f[i-2];
  }
  
  return f[n];
}

// Using Recursive Programming
int recursiveFn(int n){
    if (n <= 2) // it with return n when F(0) = 0, F(1) = 1 and F(2) = 2
        return n;
    return recursiveFn(n - 3) + recursiveFn(n - 2); // F(n) = F(n-3) + F(n -2)
}

// Using Recursive solution with memoization

int recursive_Memoization(int n) {
    int memo[n + 1];
    for (int i = 0; i <= n; i++) memo[i] = -1;
    return F_helper(n, memo);
}

int F_helper(int n, int memo[]) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (memo[n] != -1) return memo[n];
    memo[n] = F_helper(n - 3, memo) + F_helper(n - 2, memo);
    return memo[n];
}


int main(){
//printf("Testing Dynamics: %d \n", dynamicFn(10));
//printf("Testing Recursive: %d", recursiveFn(10));

for (int i = 0; i <= 15; i++){
    printf("Testing Dynamics: %d \n", dynamicFn(i));
}

for (int i = 0; i <= 15; i++){
    printf("Testing Recursive: %d \n", recursiveFn(i));
}

for (int i = 0; i <= 15; i++){
    printf("Testing Recursive Memoization: %d \n", recursive_Memoization(i));
}

getchar();
return 0;
}
