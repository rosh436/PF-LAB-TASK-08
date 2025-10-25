#include<stdio.h>
int main(){
	int arr[10], arr2[10];
	int i,j,k,n1,n2,found, result[20];
	printf("Enter the number of numbers in the first array: ");
	scanf("%d", &n1);
	printf("Enter the array 1: ");
	for(i=0;i<n1;i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the number of numbers in the second array: ");
	scanf("%d", &n2);
	printf("Enter the second array: ");
	for(j=0;j<n2;j++){
		scanf("%d", &arr2[j]);
    }
    for(i=0;i<n1;i++){
    	result[k++]=arr[i];
	}
	 // Add elements from arr2 that are not already in result
    for (i = 0; i < n2; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (arr2[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[k++] = arr2[i];
        }
    }

    printf("Union: ");
    for (i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
		
	

