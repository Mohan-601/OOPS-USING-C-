// wap to find the sum of items of an array 
#include <iostream>
using namespace std;

class ArraySum {
public:
    int calculate(int arr[], int size) {
        int sum = 0;

        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }

        return sum;
    }
};

int main() {
    ArraySum obj;

    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[100];

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Sum of elements = " << obj.calculate(arr, size);

    return 0;
}