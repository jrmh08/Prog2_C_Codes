#include<stdio.h>
#include "Sorting_Algs.h"

void selectionSort(int list[]){
	display(list, 5);
	int a, b, size = 5, smallest;
	
	for(a = 0; a<size-1; a++){
		smallest = a;
		for(b = a; b<size; b++){
			if(list[b] < list[smallest]){
				smallest = b;
			}
		}
		swap(list+a, list+smallest);
		display(list, 5);
	}
}

void insertionSort(int list[]){
	display(list, 5);
	int a, b, ndx, size = 5;
	for(a=1; a<size; a++){
		if(list[a] < list[a-1]){
			ndx = a;
			while(a != 0 && list[ndx] < list[a-1]){
				a--;
			}
			swap(list+a, list+ndx);
			display(list, size);
		}
	}
}



void swap(int *x, int *y){
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

void display(int list[], int size){
	int a;
	
	for(a=0; a<size; a++){
		printf("%d ", list[a]);
	}
	printf("\n");
}
