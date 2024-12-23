#include<stdio.h>

int main(){
	int m, n;
	printf("Nhap so hang: ");
	scanf("%d", &m);
	printf("nhap so cot: ");
	scanf("%d", &n);
	int array[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("array[%d][%d] = ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	printf("mang truoc sap xep: \n");
	for(int i = 0; i < m; i++){	
	for(int j = 0; j < n; j++){
		printf("%d ", array[i][j]);
    }
	printf("\n");
  }
    for(int j = 0; j < n; j++){
    	for(int i = 0; i < m - 1; i++){
    		for(int k = i + 1; k < m; k++){
    			if(array[i][j] > array[k][j]){
    				int temp = array[i][j];
    				array[i][j] = array[k][j];
    				array[k][j] = temp;
    			}
    		}
    	}
    }
    printf("mang sau sap xep: \n");
	for(int i = 0; i < m; i++){	
	for(int j = 0; j < n; j++){
		printf("%d ", array[i][j]);
    }
	printf("\n");
  }
  return 0;
}
