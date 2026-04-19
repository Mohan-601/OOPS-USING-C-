
// wap to check for a perfect number
#include <iostream>
using namespace std;

class PerfectNumber {
public:
    void check(int num){

        int sum=0;

        for(int i=1;i<=num/2;i++){
            if(num%i==0)
                sum+=i;
        }

        if(sum==num)
            cout<<"Perfect Number";
        else
            cout<<"Not Perfect Number";
    }
};

int main(){
    PerfectNumber obj;
    int n;

    cout<<"Enter number: ";
    cin>>n;

    obj.check(n);
}