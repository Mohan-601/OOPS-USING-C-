
// WAP to search for an given element in an array 
#include <iostream>
using namespace std;

class SearchElement {
public:
    int searchitem(int arr[], int size, int key) {

        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                return i;  
            }
        }
        return -1;  
    }
};
int main() {
    SearchElement obj;
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = obj.searchitem(arr, size, key);

    if (result != -1)
        cout << "Element found at index " << result; 
    else
        cout << "Element not found.";
    return 0;
}
