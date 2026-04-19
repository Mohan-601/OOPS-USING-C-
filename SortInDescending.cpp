// wap to sort an array in descending order
#include <iostream>
using namespace std;

class SortDescending {
public:
    void sortArray() {
        int arr[100], n;

        cout<<"Enter size: ";
        cin>>n;

        cout<<"Enter elements:\n";
        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(arr[i]<arr[j])
                    swap(arr[i],arr[j]);

        cout<<"Descending order:\n";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
};

int main(){
    SortDescending obj;
    obj.sortArray();
}
