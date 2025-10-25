#include<stdio.h>
int main(){
	//Write a C program to find the intersection of two arrays.
//Intersection means elements that are common in both arrays.
int arr[10],arr2[10],m, n1, n2,any, result[50], i, j,found, k=0;
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
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr[i] == arr2[j]) {
                // Check if it's already in result (avoid duplicates)
                found = 0;
                for (m = 0; m < k; m++) {
                    if (result[m] == arr[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    result[k++] = arr[i];
                    any = 1; // means we found at least one intersection
                }
            }
        }
    }

    if (!any) {
        printf("No intersection found.\n");
    } else {
        printf("Intersection: ");
        for (i = 0; i < k; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    return 0;
}
