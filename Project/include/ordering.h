#ifndef ORDERING_H
#define ORDERING_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

enum ordenacao{
  ascendente = true,
  descendente = false
};

void swap(int* A,int i,int j);
bool sorted(int* A,int size,bool ordering_mode);
void bubblesort(int* A,int size,bool ordering_mode);
void initialize(int* A,int size);
void show(int* A,int size);
bool ascending();

#endif //ORDERING_H