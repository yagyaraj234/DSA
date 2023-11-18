
#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int *arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int *arr, int low, int high) {
    if (low < high) {
        int partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main() {
    int arr[9] = {52, 626, 46, 6736, 3, 6, 2, 25, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array:" << endl;
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array:" << endl;
    printArray(arr, n);

    return 0;
}
