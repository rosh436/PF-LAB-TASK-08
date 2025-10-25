#include <stdio.h>

int main() {
    int arr1[10], arr2[10], result[10];
    int n1, n2, i, j, k = 0, m, found;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter elements of the first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter elements of the second array: ");
    for (j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
    }

    // Find intersection
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if already added to result
                found = 0;
                for (m = 0; m < k; m++) {
                    if (result[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    result[k++] = arr1[i];
                }
                break; // move to next arr1 element
            }
        }
    }

 

    printf("\nTotal number of common elements: %d\n", k);
    return 0;
}

