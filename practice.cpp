// #include <iostream>
// using namespace std;
// int main(){
// int a,b,add;
// cout<<"Enter the value of a";
// cin>>a;
// cout<<"Enter the value of b";
// cin>>b;
// add = a+b;
// cout<<"the sum of two numbers is:"<<add ;
// return 0;
// }


// #include <iostream>
// using namespace std;
// void SUM(float a, float b){
//     cout<<a+b;
// }



// int main(){
//     int a = 10,b = 20;
//    SUM(a,b);
// //    cout<<"the sum of two numbers is:"<<SUM(a,b);
//     return 0;
// }   

// #include <iostream>
// using namespace std;
// int main(){
// int n;
// int fact =1;
// cout<<"enter your number";
// cin>>n;
// for(int i = 1;i <= n;i++){
//     fact = fact*i;
// }
// cout<<"factorial of given number is:"<<fact;
// return 0;
// }
// int factorial(int n){
//     int fact = 1;
//    for(int i = 1;i <= n;i++){
//     fact = fact*i;
// }     
// return fact;
// }

// int main(){

// cout<<factorial(5);
// // cout<<check();

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Student {
// public:    
//     int rollno;
//     char name[10];
//     float cgpa;
//     void input(){
//             cout<<"enter roll no. of the student ";
//             cin>>rollno;
//             cout<<"enter nameof the student ";
//             cin>> name;
//             cout<<"enter cgpa the student ";
//             cin>> cgpa;}
//     void display(){
//             cout<<"roll no. of student"<<rollno<<endl;
//             cout<<"name of student"<<name<<endl;
//             cout<<"cgpa of student"<<cgpa<<endl;

//     }
// };
// int main(){
// //    int num;
// Student s1;
// s1.input();
// s1.display();
// Student s2;
// s2.input();
// s2.display();

// class Add{
// public:
//     float a,b;
//     void input(){
//         cout<<"enter the value of a "<<endl;
//         cin>>a;
//         cout<<"enter the value of b "<<endl;
//         cin>>b;
//     }
    
//     void sum(){
//       cout<<"The sum of  a and b is:"<<a+b;
//     }
// };
// int main(){
// // CLASSNAME OBJECTNAME;
// Add sum1;
// sum1.input();
// sum1.sum();

//     return 0;
// }
//wap to enter and display the students name, roll no and marks:
// #include <iostream>
// #include <string.h>
// using namespace std;
// class Student{
// public:
//     string name;
//     int rollno;
//     int marks[5];
//      void insert(){
// cout<<"enter the students name"<<endl;
// cin>>name;
// cout<<"enter the students roll no"<<endl;
// cin>>rollno;
// for(int i = 0;i<5;i++)
// {cin>>marks[i];}
//      }
//       void display(){
//         cout<<"the name of student is: "<<name<<endl;
//         cout<<"the roll no. of student is: "<<rollno<<endl;
//         for(int i = 0;i<5;i++)
//         {cout<<" "<<marks[i];}
//       }

// };

// int main(){
// s2.name = 'mohan';
// s2.rollno = 606;
//     return 0;
// }


// Develop a module where input is given by user about student's
//  detail which include student's ID, name, marks of five subjects. 
//  Calculate and display total marks, percentage and grade of student.
// #include <iostream>
// #include <string.h>
// using namespace std;
// class Student{
// public:
//         int ID;
//         string name;
//         int marks[5];
//         int total_marks = 0;
//         float percentage;
//         char grade;
//      void input(){
//         cout<<"enter the ID of Student: ";
//         cin>>ID;
//         cout<<"Enter the name of the student: ";
//         cin>>name;
//         cout<<"Enter the marks of the student: ";
//         for(int i = 0;i<5;i++){
//             cin>>marks[i];
//             total_marks = total_marks + marks[i];
//         }
//      }
//      void calculate(){
//         percentage = (total_marks/500.0)*100.0;
//         if(percentage<=100 && percentage>=90){
//             grade = 'O';
//         }
//         else if(percentage<90 && percentage>=80)
//         {grade = 'A';}
//         else if(percentage<80 && percentage>=70)
//         {grade = 'B';}
//         else if(percentage<70 && percentage>=60)
//         {grade = 'C';}
//         else if(percentage<60 && percentage>=50)
//         {grade = 'D';}
//         else if(percentage<50 && percentage>=40)
//         {grade = 'E';}
    
//         else if(percentage<40 && percentage>=0)
//         {grade = 'F';}
//         else
//         {cout<<"Invalid marks...";}
//      }
//      void display(){
//         cout<<"The ID of the student is: "<<ID<<endl;
//         cout<<"The name of the student is:"<<name<<endl;
//         cout<<"The marks of the student is:";
//         for(int i =0;i<5;i++){
//             cout<<" "<<marks[i];
//         }cout<<endl;
//         cout<<"the percentage of the student:"<<percentage<<"%"<<endl;
//         cout <<"The grade of the student is :"<<grade<<endl;
//      }
// };
// int main(){
// Student s1;//default constructor
// s1.input();
// s1.calculate();
// s1.display();
// return 0;


// }

// 17.WAP to demonstrate default constructor 

// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int roll;
//     string name;

// public:
    
//     Student() {
//         roll = 0;
//         name = "Not Assigned";
       
//     }
//     void display() {
//         cout << "Roll: " << roll << endl;
//         cout << "Name: " << name << endl;
//     }
// };
// int main() {
//     Student s1;   
//     s1.display();
//     return 0;
// }


// // 18.WAP to demonstrate parameterized constructor 

// #include <iostream>
// using namespace std;

// class Student {
// private:
//     int roll;
//     string name;

// public:
   
//     Student(int r, string n) {
//         roll = r;
//         name = n;
       
//     }
//     void display() {
//         cout << "Roll: " << roll << endl;
//         cout << "Name: " << name << endl;
//     }
// };
// int main() {
//     Student s1(101, "Rizul");  
//     s1.display();
//     return 0;
// }



// // 19. WAP to demonstrate copy constructor 
 
// #include <iostream>
// using namespace std;
// class Student {
// private:
//     int roll;
// public:
//     Student(int r) {
//         roll = r;
//     }

   
//     Student(const Student &s) {
//         roll = s.roll;
      
//     }

//     void display() {
//         cout << "Roll: " << roll << endl;
//     }
// };

// int main() {
//     Student s1(101);
//     Student s2 = s1;   
//     s2.display();
//     return 0;
// }


// // 20.WAP to demonstrate move constructor 

// #include <iostream>
// using namespace std;
// class Number {
// private:
//     int *data;

// public:
    
//     Number(int value) {
//         data = new int(value);
        
//     }

    
//     Number(Number &&obj) {
//         data = obj.data;      
//         obj.data = nullptr;   
        
//     }

//     void display() {
//         if (data != nullptr)
//             cout << "Value: " << *data << endl;
//     }

// };

// int main() {
//     Number n1(50);
//     Number n2 = move(n1);  

//     n2.display();
//     return 0;
// }




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






// #include<iostream>
// #include <string>
// using namespace std;
// class Student{
//    private:
//          int ID ;
//          string name;
//          int t_marks;
//         Student(){//default constructor;
//             cout<<"Enter your name";
//             cin>>name;
//         }
//         Student(int id,string name_,int marks){//parameterized constructor
//               ID = id;
//               name = name_;
//               t_marks = marks;
//         }
//       Student(Student &s1){
//         ID = s1.ID;
//         name = s1.name;
//         t_marks =s1.t_marks;
//       }
//       Student(Student &&obj){
//          ID = obj.ID;
//               name = obj.name;
//               t_marks = obj.t_marks;
//       }
      
// };
// main(){
   // Student s1
//    Student s2 = s1;
//    return 0;
// }


//

// develop an atm system which includes the following:
// acc no.
// pin number
// bal
//withdraw
// authenticator

// #include <iostream>
// using  namespace std;
// class ATM{
// private:
//      long accno;
//      int PIN;
//      double balance;
// public:
//       bool isvalidpin(int pin){
//             if(pin == PIN)
//               return true;
//               else
//                 return false;  
//       }
     
//      ATM(long acc_number,int pin,double balance_){
//            accno = acc_number;
//            PIN = pin;
//            balance = balance_;
//      }
//      void checkbalance(){
//       cout<<"Rs."<< balance;
//      }
//      void withdraw(double amt){
//       cout<<"enter your account pin";
//       cin>>PIN;
//       if(isvalidpin(PIN)){
//          if(amt > 0&&amt<= balance)
//           {
//              balance = balance - amt;
//            cout<<"THE AMMOUNT WITHDRAWN:Rs "<<amt<<endl;
//            cout<<"THE AMMOUNT :Rs "<<balance<<endl;
//           }

//            else{
//             cout<<"in valid ammount";
//            }
//       }
//       else{
//          cout<<"wrong pin";
//       }
//      }
// };
// int main(){
//    ATM a1(23, 1234, 1234567);
//    a1.withdraw(5);
//    a1.checkbalance();

//    return 0;
// }











































































// #include <iostream>
// using namespace std;

// class ATM {
// private:
//     int pin;
//     double balance;

// public:

//     // Constructor
//     ATM(int p, double b) {
//         pin = p;
//         balance = b;
//     }

//     // Verify PIN
//     bool verifyPin(int enteredPin) {
//         return enteredPin == pin;
//     }

//     // Deposit function
//     void deposit(double amount) {
//         balance += amount;
//         cout << "Amount Deposited Successfully\n";
//     }

//     // Withdraw function
//     void withdraw(double amount) {
//         if (amount > balance) {
//             cout << "Insufficient Balance\n";
//         }
//         else {
//             balance -= amount;
//             cout << "Please collect your cash\n";
//         }
//     }

//     // Getter for balance
//     double getBalance() {
//         return balance;
//     }
// };

// int main() {

//     ATM user(1234, 5000);   // PIN and initial balance
//     int enteredPin;
//     int choice;
//     double amount;

//     cout << "Enter ATM PIN: ";
//     cin >> enteredPin;

//     if (!user.verifyPin(enteredPin)) {
//         cout << "Incorrect PIN\n";
//         return 0;
//     }

//     do {
//         cout << "\n------ ATM MENU ------\n";
//         cout << "1. Check Balance\n";
//         cout << "2. Deposit Money\n";
//         cout << "3. Withdraw Money\n";
//         cout << "4. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch(choice) {

//             case 1:
//                 cout << "Current Balance: " << user.getBalance() << endl;
//                 break;

//             case 2:
//                 cout << "Enter amount to deposit: ";
//                 cin >> amount;
//                 user.deposit(amount);
//                 break;

//             case 3:
//                 cout << "Enter amount to withdraw: ";
//                 cin >> amount;
//                 user.withdraw(amount);
//                 break;

//             case 4:
//                 cout << "Thank you for using ATM\n";
//                 break;

//             default:
//                 cout << "Invalid choice\n";
//         }

//     } while(choice != 4);

//     return 0;
// }








