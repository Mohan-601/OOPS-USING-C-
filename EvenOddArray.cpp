
// WAP to counting even and odd numbers

#include <iostream>
using namespace std;

class EvenOddCount {
public:
    void count(int arr[], int size) {
        int even = 0, odd = 0;

        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        cout << "Even count = " << even << endl;
        cout << "Odd count = " << odd << endl;
    }
};

int main() {
    EvenOddCount obj;

    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[100];

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    obj.count(arr, size);

    return 0;
}