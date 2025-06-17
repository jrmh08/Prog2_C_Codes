#include <stdio.h>
#include "Sorting_Algs.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numlist[5] = {1,50,21,0,22};
	
	//selectionSort
	//selectionSort(numlist);
	//insertionSort
	insertionSort(numlist);
	//display(numlist, 5);
	
	return 0;
}
