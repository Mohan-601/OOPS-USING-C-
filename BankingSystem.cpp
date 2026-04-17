// wap for creating a banking system using encapsulation
//banking system

// #include <iostream>
// #include <string>
// using namespace std;
// class BankAccout{
// private:
//       string account_holder;
//       int account_number;
//       double bank_balance;
// public:
//       bool isvalid(){
//        return bank_balance>0;
//        }
//        BankAccout(string name,long number,double balance){
//            account_holder = name;
//            account_number = number;
//            if(isvalid())
//            {bank_balance = balance;}
//            else{bank_balance = 0;}
//        }
//        void deposit(double amt){
//              if(amt>0){
//               bank_balance + amt;
//               cout<<"the amount you have deposited: Rs."<<amt;
//               cout<<"BANK BALANCE: Rs."<<bank_balance; }
//               else{
//                cout<<"ERROR........";
//               }
      
//        }
//        void withdraw(double amt){
//       if(amt>0 && bank_balance>=amt){
//         bank_balance= bank_balance-amt;
//          cout<<"the amount you have withdrawn: Rs."<<amt;
//        cout<<"BANK BALANCE: Rs."<<bank_balance; }
//       }
//       else{
//           cout<<"ERROR........";
//       }
//     void display(){
//       cout<<"the name of the account Holder: "<<account_holder;
//       cout<<"the name of the account number: "<<account_number;
//       cout<<"the bank balance:Rs. "<<bank_balance;
//     }

//        };
// int main(){
// BankAccout B1("Rizul",12345678,100000000000);
// B1.display();


//   return 0;
// }