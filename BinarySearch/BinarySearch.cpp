#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid; // Key found at index mid
        }
        else if (arr[mid] < key) {
            start = mid + 1; // Search in the right half
        }
        else {
            end = mid - 1; // Search in the left half
        }
    }
    return -1; // Key not found
}
