#include <iostream>
using namespace std;

// Fungsi binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Menghindari overflow
        if (arr[mid] == target) {
            return mid; // Elemen ditemukan
        } else if (arr[mid] < target) {
            left = mid + 1; // Cari di sisi kanan
        } else {
            right = mid - 1; // Cari di sisi kiri
        }
    }
    return -1; // Elemen tidak ditemukan
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 30;

    int result = binarySearch(data, size, target);

    if (result != -1) {
        cout << "Elemen ditemukan di indeks " << result << endl;
    } else {
        cout << "Elemen tidak ditemukan" << endl;
    }

    return 0;
}
