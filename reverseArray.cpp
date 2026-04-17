// 32.WAP to reverse an array

#include <iostream>
using namespace std;

class ArrayReverse {
public:
    void reverse(int arr[], int size) {
        int start = 0;
        int end = size - 1;

        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void display(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }
};
int main() {
    ArrayReverse obj;

    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    obj.reverse(arr, size);
    cout << "Reversed Array: ";
    obj.display(arr, size);
    return 0;
}
