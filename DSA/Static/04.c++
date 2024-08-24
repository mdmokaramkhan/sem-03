// You are using GCC
#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
    //Type your code here
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]){
                arr[j] += arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] -= arr[j+1];
            }
        }
    }
    
}

void selectionSort(int arr[], int n) {
    //Type your code here
    for(int i = 0; i<n-1; i++) {
        int min_idx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        int tmp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = tmp;
    }
}

bool isNearlySorted(int scores[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (scores[i] > scores[i + 1]) {
            count++;
            if (count > 1) {
                return false;
            }
        }
    }
    return true;
}

void sortArray(int scores[], int n) {
    if (isNearlySorted(scores, n)) {
        printf("Using Bubble Sort\n");
        bubbleSort(scores, n);
    } else {
        printf("Using Selection Sort\n");
        selectionSort(scores, n);
    }
}

void printArray(int scores[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int examScores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &examScores[i]);
    }

    sortArray(examScores, n);
    
    printf("Sorted Exam Scores: ");
    printArray(examScores, n);

    return 0;
}