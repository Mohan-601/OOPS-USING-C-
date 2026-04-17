
// WAP to find the largest item in an array

#include <iostream>
using namespace std;

class LargestElement {
public:
    int findLargest(int arr[], int size) {

        if (size <= 0) {
            cout << "Array is empty." << endl;
            return -1;
        }

        int largest = arr[0];

        for (int i = 1; i < size; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        return largest;
    }
};

int main() {
    LargestElement obj;

    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result = obj.findLargest(arr, size);

    if (size > 0)
        cout << "Largest element = " << result;
    return 0;
}
