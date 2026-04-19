
//  wap to enter an element in between of an array
#include <iostream>
using namespace std;

class ArrayInsert {
public:
    void insertElement() {
        int arr[100], n, pos, value;

        cout<<"Enter number of elements: ";
        cin>>n;

        cout<<"Enter elements:\n";
        for(int i=0;i<n;i++)
            cin>>arr[i];

        cout<<"Enter position to insert: ";
        cin>>pos;

        cout<<"Enter value: ";
        cin>>value;

        for(int i=n;i>=pos;i--)
            arr[i]=arr[i-1];

        arr[pos-1]=value;
        n++;

        cout<<"Array after insertion:\n";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
};

int main(){
    ArrayInsert obj;
    obj.insertElement();
}
