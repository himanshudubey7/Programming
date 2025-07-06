#include <stdio.h>

int partition(int ar[], int s, int e) {
    int cnt = 0;
    int pivot = ar[s];
    for (int i = s + 1; i <= e; i++) {
        if (ar[i] <= pivot) {
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    int temp = ar[pivotIndex];
    ar[pivotIndex] = ar[s];
    ar[s] = temp;
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        while (ar[i] <= pivot) {
            i++;
        }
        while (ar[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int ar[], int s, int e) {
    if (s >= e) {
        return;
    } else {
        int p = partition(ar, s, e);
        quickSort(ar, s, p - 1);
        quickSort(ar, p + 1, e);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int s = 0;
    int e = n - 1;
    quickSort(ar, s, e);
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}

