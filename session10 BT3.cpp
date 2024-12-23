#include<stdio.h>

int main(){
	int array[10] = {2,4,6,5,8,10,1,3,9,7};
	int size = 10;
	for(int i = 1; i < size; i++){
		int key = array[i];
		int j = i - 1;
		while(j >= 0 && array[j] > key){
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
	printf("mang sau sap xep la: \n");
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
