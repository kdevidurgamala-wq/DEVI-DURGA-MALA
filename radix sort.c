#include <stdio.h>
int getMax(int arr[], int n) {
    int max = arr[0],i;
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i]; }
    return max;}
void countingSort(int arr[], int n, int exp) {
    int output[n];      
    int count[10] = {0},i;
    for(i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    for(i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for(i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--; 
    for( i = 0; i < n; i++)
        arr[i] = output[i];}
void radixSort(int arr[], int n) {
    int max = getMax(arr, n);
    for( exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, n, exp);}
int main() {
    int n;
printf("Enter number of elements: ");
    scanf("%d", &n);
int arr[n];
printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
		radixSort(arr, n);
printf("Sorted array:\n");
    for( i = 0; i < n; i++)
        printf("%d ", arr[i]);
 return 0;}
