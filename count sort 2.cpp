#include <stdio.h>

void countingSort(int arr[], int n) {
    int i;

    // Find maximum element
    int max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    int count[max + 1];

    // Initialize count array
    for(i = 0; i <= max; i++)
        count[i] = 0;

    // Store frequency
    for(i = 0; i < n; i++)
        count[arr[i]]++;

    // Print sorted array
    printf("Sorted array: ");
    for(i = 0; i <= max; i++) {
        while(count[i] > 0) {
            printf("%d ", i);
            count[i]--;
        }
    }
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n);
    return 0;
}
