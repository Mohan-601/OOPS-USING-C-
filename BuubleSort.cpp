// WAP to sort an given array 
#include <iostream>
using namespace std;

class SortArray {
public:


void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

    void display(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SortArray obj;

    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    obj.sort(arr, size);
    cout << "Sorted Array: ";
    obj.display(arr, size);
    return 0;
}