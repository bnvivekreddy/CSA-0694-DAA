#include <iostream>
using namespace std; 
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];   
    }
    return sum;
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int totalSum = sumArray(arr, size);
    cout << "Sum of elements in the array: " << totalSum << endl;
    return 0;
}
