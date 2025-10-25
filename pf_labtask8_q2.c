#include <stdio.h>

int main() {
   
    int arr1[20], arr2[20], result[20];
    int n1, n2, i, j, k = 0, m, found, any = 0;
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
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if already in result (avoid duplicates)
                found = 0;
                for (m = 0; m < k; m++) {
                    if (result[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    result[k++] = arr1[i];
                    any = 1;
                }
                break; // Stop checking after a match is found
            }
        }
    }

    // Display result 
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

