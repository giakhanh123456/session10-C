#include<stdio.h>

int main(){
	int array[10] = {2,4,6,5,8,10,1,3,9,7};
	int size = 10;
	for(int i = 0; i < size - 1; i++){
		int minindex = i;
		for(int j = i + 1; j < size; j++){
			if(array[j] < array[minindex]){
				minindex = j;
			}
		}
		int temp = array[minindex];
		array[minindex] = array[i];
		array[i] = temp;
	}
	printf("mang sau sap xep la: \n");
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
