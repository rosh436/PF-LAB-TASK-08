#include <stdio.h>

int main() {
    int arr1[20], arr2[20], result[40];
    int n1, n2, i, j, k = 0, found;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Add unique elements from arr1 to result
    for (i = 0; i < n1; i++) {
        found = 0;
        for (j = 0; j < k; j++) {
            if (arr1[i] == result[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[k++] = arr1[i];
        }
    }

    // Add unique elements from arr2 that are not in result
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

    //Sort the union array 
    for (i = 0; i < k - 1; i++) {
        for (j = i + 1; j < k; j++) {
            if (result[i] > result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }

    printf("Union : ");
    for (i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

