#include <stdio.h>

int main() {
  int n;
  int A[n][n], B[n][n];
  int row, col, isSym;
 printf("\n enter the value of n:");
scanf("%d",&n);
  // Take a matrix A as input from user
  printf("Enter the elements in matrix of size 3x3: \n");
  for (row = 0; row < n; row++) {
    for (col = 0; col < n; col++) {
      scanf("%d", &A[row][col]);
    }
  }

  // Finds the transpose of matrix A
  for (row = 0; row < n; row++) {
    for (col = 0; col < n; col++) {
      // Stores each row of matrix A to each column of matrix B
      B[row][col] = A[col][row];
    }
  }

  // Checks whether matrix A is equal to its transpose or not
  isSym = 1;
  for (row = 0; row < n && isSym; row++) {
    for (col = 0; col < n; col++) {
      if (A[row][col] != B[row][col]) {
        isSym = 0;
        break;
      }
    }
  }

  // If the given matrix is symmetric.
  if (isSym == 1) {
    printf("\n Matrix is Symmetric. \n");

   
      printf("\n");
    }
  else {
  printf("\n matrix is not symmetric.");
  }
  return 0;
  }

