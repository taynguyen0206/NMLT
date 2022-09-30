#include <iostream>
#include <climits>
using namespace std;


void findSecondMin(int* arr, int size, int& min, int& min2, int& max) {
    for (int i = 0; i < size; i++) { 
        if(arr[i] > max) { 
            max = arr[i];
        }
        if(arr[i] < min) { 
            min2 = min;
            min = arr[i];
        } else if(arr[i] < min2 && arr[i] > min) { 
            min2 = arr[i];
        }
    }
}


int main() {
    int arr[] { 1, 4, 5};
    
    int min = INT_MAX;
    int min2 = min;
    int max = INT_MIN;
    findSecondMin(arr, 3, min, min2, max);
    
    if(min != min2 && min2 <= max) {
        cout << "Gia tri nho thu 2 trong mang: " << min2 << endl;
    } else {
        cout << "Khong co gia tri nho thu 2." << endl;
    }
}