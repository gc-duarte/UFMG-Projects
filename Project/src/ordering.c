#include "ordering.h"

void swap(int* A,int i,int j){

  int aux;
  aux = A[i]; 
  A[i] = A[j];
  A[j] = aux;
}

bool sorted(int* A,int size,bool ordering_mode){
  
  switch(ordering_mode){
  
    case ascendente:
    for(int i = 0;i < size-1;i++){
      for(int j = i + 1;j < size;j++){
        if(A[i] <= A[j]){
          continue;
        }else{
          return false;
        }
      }
    }
    return true;
    break;

    case descendente:
    for(int i = 0;i < size-1;i++){
      for(int j = i + 1;j < size;j++){
        if(A[i] >= A[j]){
          continue;
        }else{
          return false;
        }
      }
    }
    return true;
    break;
  }
}

void bubblesort(int* A,int size,bool ordering_mode){
  
  switch(ordering_mode){

    case ascendente:
    while(!sorted(A,size,ascendente)){
      for(int i = 0;i < size-1;i++){
        for(int j = i + 1;j < size;j++){
          if(A[i] <= A[j]){
            continue;
          }else{
            swap(A,i,j);
          }       
        }
      }
    }
    break;

    case descendente:
    while(!sorted(A,size,descendente)){
      for(int i = 0;i < size-1;i++){
        for(int j = i + 1;j < size;j++){
          if(A[i] >= A[j]){
            continue;
          }else{
            swap(A,i,j);
          }       
        }
      }
    }
    break;
  }
}

void initialize(int* A,int size){
  
  int aux;
  if(A == NULL){
    printf("\nError during memory allocation!\a\n");
  }else{
    for(int i = 0;i < size;i++){
      while(1){
        
        printf("->");
        scanf("%d",&aux);
        if(aux > 0 || aux < 0){
          A[i] = aux;
          break;
        }else{
          system("cls");
          printf("\nChoose an integer number\n\n");
          system("pause");
          system("cls");
          getchar();
        }
      }
    }
  }
}

void show(int* A,int size){
  
  printf("\nA = [");
  for(int i = 0;i < size;i++){
    if(i == size-1){
      printf("%d]\n",A[i]);
    }else{
      printf("%d, ",A[i]);
    }
  }
}

bool ascending(){
  
  int k;
  while(1){

    printf("\n-> Ascendente(1) ou Descendente(0)? ");
    scanf("%d",&k);
    if(k == 1){
      return ascendente;
    }else if(k == 0){
      return descendente;
    }else{
      continue;
    }
  }
}