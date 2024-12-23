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
    for(int i = 0; i < m; i++){
    	for(int j = i + 1; j < n; j++){	
    			if(array[i][i] > array[j][j]){
    				int temp = array[i][i];
    				array[i][i] = array[j][j];
    				array[j][j] = temp;  		
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
