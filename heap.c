#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
    return NULL;
}



void heap_push(Heap* pq, void* data, int priority){
  if (pq -> size + 1 > pq -> capac) {
    pq -> capac = (pq -> capac) * 2 + 1;
    pq -> heapArray = realloc (pq -> heapArray, (pq -> capac) *sizeof(heapElem));  
  }
  int actual = pq -> size;
  while ((actual > 0) && (pq -> heapArray[(actual - 1)/2].priority < priority)) {
    pq -> heapArray[actual] = pq -> heapArray[(actual - 1)/2];
    actual = (actual - 1)/2;
  }
  pq -> heapArray[actual].priority = priority;
  pq -> heapArray[actual].data = data;
  pq -> size++;
}


void heap_pop(Heap* pq){

}

Heap* createHeap(){

   return NULL;
}
