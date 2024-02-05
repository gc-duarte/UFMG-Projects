/*
------------------------------------------------------------------------
|  The Bubble Sort, or float sorting, is one of the simplest sorting   |
|algorithms. The idea is to go through the array several times, and    |
|with each pass I float to the top the largest/smallest element of the |
| sequence.                                                            |
------------------------------------------------------------------------
*/

#include "ordering.h"
//#include <string.h>

const int MAX_INDEX = 1000;

int main() {
  
  system("cls");
  
  bool ordering_mode;
  int n;
  int* A;

  while(1){
    
    printf("----------------------------------\n");
    printf("|Ordering algorithms(Bubble Sort)|\n");
    printf("----------------------------------\n\n");
    printf("What is the array size: ");
    scanf("%d",&n);
    if(n > 0){
      ordering_mode = ascending();
      break;
    }else{
      system("cls");
      printf("\nChoose an integer number bigger than 0\n\n");
      system("pause");
      system("cls");
      getchar();
    }
  }
  
  A = (int*)calloc((n) * sizeof(int),sizeof(int));

  initialize(A,n);
  bubblesort(A,n,ordering_mode);
  show(A,n);
  
  free(A);
  A = NULL;
  
  printf("\nThe End.\n");
  getchar();
  return 0;
}