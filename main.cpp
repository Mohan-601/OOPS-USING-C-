//1.wap for sum of  two numbers

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, sum;
//     cin >> a;
//     cin >> b;
//     sum = a + b;
//     cout << sum;
//     return 0;
// }

//2.wap for finding greater of two numbers

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cin >> a;
//     cin >> b;
//     cin >> c;

//     if (a >= b && a >= c)
//         cout << a;
//     else if (b >= a && b >= c)
//         cout << b;
//     else
//         cout << c;

//     return 0;
// }

// 3.wap for swapping values of  two numbers using third one

// #include <iostream>
// using namespace std;
// int main() {
//     int x, y, temp;

//     cin >> x;
//     cin >> y;
//     temp = x;
//     x = y;
//     y = temp;
//     cout << x << " " << y;
//     return 0;
// }

// 4.wap for finding area of a rectangle

// #include <iostream>
// using namespace std;
// int main() {
//     int length, breadth, area;
//     cin >> length;
//     cin >> breadth;
//     area = length * breadth;
//     cout << area;
//     return 0;
// }

// 5.wap to print square of a number

// #include <iostream>
// using namespace std;
// int main() {
//     int n, square;
//     cin >> n;
//     square = n * n;
//     cout << square;
//     return 0;
// }

// 6.wap for finding area of a circle

// #include <iostream>
// using namespace std;
// int main() {
//     float radius, area;
//     float pi = 3.14;
//     cin >> radius;
//     area = pi * radius * radius;
//     cout << area;
//     return 0;
// }

// 7.wap to check for zero positive or negative

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     if (n > 0)
//         cout << "Positive";
//     else if (n < 0)
//         cout << "Negative";
//     else
//         cout << "Zero";
//     return 0;
// }

// 8.wap to check for even or odd

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     if (n % 2 == 0)
//         cout << "Even";
//     else
//         cout << "Odd";
//     return 0;
// }

// 9.wap to check wheather a given year is leap year or not.

// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cin >> year;
//     if (year % 4 == 0)
//         cout << "Leap Year";
//     else
//         cout << "Not Leap Year";
//     return 0;
// }

// 10.wap to find ASCII value of given character

// #include <iostream>
// using namespace std;
// int main() {
//     char ch;
//     cin >> ch;
//     cout << int(ch);
//     return 0;
// }

// 11.wap to display simple class and object

// #include <iostream>
// using namespace std;
// class Student {
// public:
//     int roll;
//     int marks;
// };
// int main() {
//     Student s;

//     s.roll = 1;
//     s.marks = 90;
//     cout << s.roll << endl;
//     cout << s.marks;
//     return 0;
// }

//12.wap to add two numbers using class

// #include <iostream>
// using namespace std;
// class Add {
// public:
//     int a, b;

//     void sum() {
//         cout << a + b;
//     }
// };
// int main() {
//     Add obj;

//     obj.a = 3;
//     obj.b = 4;
//     obj.sum();
//     return 0;
// }


// 13.wap to print star right angled trinagle

//  #include <iostream>
// using namespace std;

// class RightTriangle {
//     int n;
// public:
//     RightTriangle(int rows) {
//         n = rows;
//     }

//     void display() {
//         for(int i = 1; i <= n; i++) {
//             for(int j = 1; j <= i; j++) {
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     RightTriangle obj(rows);
//     obj.display();

//     return 0;
// }



// 14.wap to print pyramid of star

// #include <iostream>
// using namespace std;

// class Pyramid {
//     int n;
// public:
//     Pyramid(int rows) {
//         n = rows;
//     }

//     void display() {
//         for(int i = 1; i <= n; i++) {
//             for(int space = 1; space <= n-i; space++)
//                 cout << " ";

//             for(int star = 1; star <= (2*i-1); star++)
//                 cout << "*";

//             cout << endl;
//         }
//     }
// };

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     Pyramid obj(rows);
//     obj.display();

//     return 0;
// }


 
// 15.wap to print star upside down pyramid

// #include <iostream>
// using namespace std;

// class InvertedPyramid {
//     int n;
// public:
//     InvertedPyramid(int rows) {
//         n = rows;
//     }

//     void display() {
//         for(int i = n; i >= 1; i--) {
//             for(int space = 1; space <= n-i; space++)
//                 cout << " ";

//             for(int star = 1; star <= (2*i-1); star++)
//                 cout << "*";

//             cout << endl;
//         }
//     }
// };

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     InvertedPyramid obj(rows);
//     obj.display();

//     return 0;
// }


//  16.wap to display a numbers triangle

// #include <iostream>
// using namespace std;

// class Pattern {
// public:
//     void print(int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 cout << j;
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Pattern obj;
//     int n;

//     cout << "Enter rows: ";
//     cin >> n;

//     obj.print(n);
//     return 0;
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
//        
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


// 18.WAP to demonstrate parameterized constructor


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
//        
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



// 19. WAP to demonstrate copy constructor

 
// #include <iostream>
// using namespace std;
// class Student {
// private:
//     int roll;
// public:
//     Student(int r) {
//         roll = r;
//     }

   
//     Student( Student &s) {
//         roll = s.roll;
//       
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


// 20.WAP to demonstrate move constructor


// #include <iostream>
// using namespace std;
// class Number {
// private:
//     int *data;

// public:
    
//     Number(int value) {
//         data = new int(value);
//         
//     }

    
//     Number(Number &&obj) {
//         data = obj.data;      
//         obj.data = nullptr;   
//         
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


// 21. WAP to demonstrate constructor overloading 

// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int length;
//     int breadth;

// public:
//     
//     Rectangle() {
//         length = 0;
//         breadth = 0;
//     }

    
//     Rectangle(int side) {
//         length = side;
//         breadth = side;
        
//     }

    
//     Rectangle(int l, int b) {
//         length = l;
//         breadth = b;
       
//     }

//     void display() {
//         cout << "Length: " << length << endl;
//         cout << "Breadth: " << breadth << endl;
//         cout << "Area: " << length * breadth << endl;
//        
//     }
// };

// int main() {

//     Rectangle r1;     
//     r1.display();

//     Rectangle r2(5);       
//     r2.display();

//     Rectangle r3(4, 6);   
//     r3.display();

//     return 0;
// }



// 22.wap to print star diamond

// #include <iostream>
// using namespace std;

// class Diamond {
//     int n;
// public:
//     Diamond(int rows) {
//         n = rows;
//     }

//     void display() {
      
//         for(int i = 1; i <= n; i++) {
//             for(int space = 1; space <= n-i; space++)
//                 cout << " ";

//             for(int star = 1; star <= (2*i-1); star++)
//                 cout << "*";

//             cout << endl;
//         }

       
//         for(int i = n-1; i >= 1; i--) {
//             for(int space = 1; space <= n-i; space++)
//                 cout << " ";

//             for(int star = 1; star <= (2*i-1); star++)
//                 cout << "*";

//             cout << endl;
//         }
//     }
// };

// int main() {
//     int rows;
//     cout << "Enter number of rows: ";
//     cin >> rows;

//     Diamond obj(rows);
//     obj.display();

//     return 0;
// }


 
// 23.wap to print reverse a string


// #include <iostream>
// #include <string>
// using namespace std;

// class ReverseString {
//     string str;
// public:
//     ReverseString(string s) {
//         str = s;
//     }

//     void reverse() {
//         for(int i = str.length()-1; i >= 0; i--)
//             cout << str[i];
//     }
// };

// int main() {
//     string input;
//     cout << "Enter string: ";
//     cin >> input;

//     ReverseString obj(input);
//     obj.reverse();

//     return 0;
// }



 
// 24.wap to print check for pallindrome

// #include <iostream>
// using namespace std;

// class Palindrome {
//     int num;
// public:
//     Palindrome(int n) {
//         num = n;
//     }

//     void check() {
//         int temp = num, rev = 0, remainder;

//         while(temp != 0) {
//             remainder = temp % 10;
//             rev = rev * 10 + remainder;
//             temp /= 10;
//         }

//         if(rev == num)
//             cout << "Palindrome number";
//         else
//             cout << "Not a palindrome number";
//     }
// };

// 25.wap to print sum of digits of a number


// #include <iostream>
// using namespace std;

// class SUM {
//     int num;
// public:
//     SUM(int n) {
//         num = n;
//     }

//     void check() {
//         int temp = num, sum = 0, remainder;

//         while(temp != 0) {
//             remainder = temp % 10;
//             sum = sum + remainder;
//             temp /= 10;
//         }



// int main() {
//     int number;
//     cout << "Enter number: ";
//     cin >> number;

//     SUM obj(number);
//     obj.check();

//     return 0;
// }




// 26. WAP for printing factorial of a number

// #include <iostream>
// using namespace std;
// class Factorial {
// public:
//     long long calculate(int n) {
//         if (n < 0) {
//             cout << "Factorial not defined for negative numbers." << endl;
//             return -1;
//         }

//         long long fact = 1;
//         for (int i = 1; i <= n; i++) {
//             fact *= i;
//         }
//         return fact;
//     }
// };

// int main() {
//     Factorial obj;
//     int num;

//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "Factorial = " << obj.calculate(num);

//     return 0;
// }


// 27 .WAP for printing fibonacci sequence
// #include <iostream>
// using namespace std;
// class Fibonacci {
// public:
//     void generate(int n) {
//         if (n <= 0) {
//             cout << "Invalid input.";
//             return;
//         }

//         long long a = 0, b = 1, next;

//         cout << "Fibonacci Series: ";

//         for (int i = 1; i <= n; i++) {
//             cout << a << " ";
//             next = a + b;
//             a = b;
//             b = next;
//         }
//     }
// };
// int main() {
//     Fibonacci obj;
//     int terms;

//     cout << "Enter number of terms: ";
//     cin >> terms;

//     obj.generate(terms);

//     return 0;
// }

// 28. WAP to check for armstrong number

// #include <iostream>
// using namespace std;

// class Armstrong {
// public:
//     void check(int n) {
//         int original = n;
//         int sum = 0;

//         while (n != 0) {
//             int digit = n % 10;
//             sum += digit * digit * digit;
//             n /= 10;
//         }

//         if (sum == original)
//             cout << "Armstrong Number";
//         else
//             cout << "Not Armstrong Number";
//     }
// };

// int main() {
//     Armstrong obj;
//     int num;

//     cout << "Enter number: ";
//     cin >> num;

//     obj.check(num);
//     return 0;
// }



// 29. WAP to check for strong number

// #include <iostream>
// using namespace std;

// class StrongNumber {
// public:
//     int factorial(int n) {
//         int fact = 1;
//         for (int i = 1; i <= n; i++)
//             fact *= i;
//         return fact;
//     }

//     void check(int n) {
//         int original = n;
//         int sum = 0;

//         while (n != 0) {
//             int digit = n % 10;
//             sum += factorial(digit);
//             n /= 10;
//         }

//         if (sum == original)
//             cout << "Strong Number";
//         else
//             cout << "Not Strong Number";
//     }
// };

// int main() {
//     StrongNumber obj;
//     int num;
//     cout << "Enter number: ";
//     cin >> num;
//     obj.check(num);
//     return 0;
// }


// 30.WAP TO CALCULATE GCD 


// #include <iostream>
// using namespace std;

// class GCD {
// public:
//     int calculate(int a, int b) {
//         while (b != 0) {
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     }
// };

// int main() {
//     GCD obj;
//     int num1, num2;

//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "GCD = " << obj.calculate(num1, num2);
//     return 0;
// }



// 31. WAP to check for LCM

// #include <iostream>
// using namespace std;
// class LCM {
// public:
//     int gcd(int a, int b) {
//         while (b != 0) {
//             int temp = b;
//             b = a % b;
//             a = temp;
//         }
//         return a;
//     }

//     int calculate(int a, int b) {
//         return (a * b) / gcd(a, b);
//     }
// };

// int main() {
//     LCM obj;
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "LCM = " << obj.calculate(num1, num2);
//     return 0;
// }

// 32.WAP to reverse an array

// #include <iostream>
// using namespace std;

// class ArrayReverse {
// public:
//     void reverse(int arr[], int size) {
//         int start = 0;
//         int end = size - 1;

//         while (start < end) {
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }
//     }

//     void display(int arr[], int size) {
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//     }
// };
// int main() {
//     ArrayReverse obj;

//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     obj.reverse(arr, size);
//     cout << "Reversed Array: ";
//     obj.display(arr, size);
//     return 0;
// }


// 33.WAP to print pascals triangle

// #include <iostream>
// using namespace std;

// class PascalTriangle {
// public:
//     void generate(int n) {
//         for (int i = 1; i < n; i++) {
           
//             for (int space = 1; space < n - i ; space++) {
//                 cout << " ";
//             }
//             int number = 1;
//             for (int j = 1; j <= i; j++) {
//                 cout << number << " ";
//                 number = number * (i - j) / (j );
//             }
//             cout << endl;
//         }
//     }
// };
// int main() {
//     PascalTriangle obj;
//     int rows;

//     cout << "Enter number of rows: ";
//     cin >> rows;

//     obj.generate(rows);

//     return 0;
// }


// 34. wap to find the sum of items of an array 
// #include <iostream>
// using namespace std;

// class ArraySum {
// public:
//     int calculate(int arr[], int size) {
//         int sum = 0;

//         for (int i = 0; i < size; i++) {
//             sum += arr[i];
//         }

//         return sum;
//     }
// };

// int main() {
//     ArraySum obj;

//     int size;
//     cout << "Enter size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];

//     cout << "Sum of elements = " << obj.calculate(arr, size);

//     return 0;
// }

// 35.WAP to counting even and odd numbers

// #include <iostream>
// using namespace std;

// class EvenOddCount {
// public:
//     void count(int arr[], int size) {
//         int even = 0, odd = 0;

//         for (int i = 0; i < size; i++) {
//             if (arr[i] % 2 == 0)
//                 even++;
//             else
//                 odd++;
//         }

//         cout << "Even count = " << even << endl;
//         cout << "Odd count = " << odd << endl;
//     }
// };

// int main() {
//     EvenOddCount obj;

//     int size;
//     cout << "Enter size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];

//     obj.count(arr, size);

//     return 0;
// }

// 36.WAP to find the largest item in an array

// #include <iostream>
// using namespace std;

// class LargestElement {
// public:
//     int findLargest(int arr[], int size) {

//         if (size <= 0) {
//             cout << "Array is empty." << endl;
//             return -1;
//         }

//         int largest = arr[0];

//         for (int i = 1; i < size; i++) {
//             if (arr[i] > largest) {
//                 largest = arr[i];
//             }
//         }

//         return largest;
//     }
// };

// int main() {
//     LargestElement obj;

//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int result = obj.findLargest(arr, size);

//     if (size > 0)
//         cout << "Largest element = " << result;
//     return 0;
// }




// 37.WAP to find the smallest element in a array
// #include <iostream>
// using namespace std;

// class SmallestElement {
// public:
//     int findSmallest(int arr[], int size) {

//         if (size <= 0) {
//             cout << "Array is empty." << endl;
//             return -1;
//         }

//         int smallest = arr[0];

//         for (int i = 1; i < size; i++) {
//             if (arr[i] < smallest) {
//                 smallest = arr[i];
//             }
//         }

//         return smallest;
//     }
// };

// int main() {
//     SmallestElement obj;

//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int result = obj.findSmallest(arr, size);

//     if (size > 0)
//         cout << "Smallest element = " << result;

//     return 0;
// }


// 38.WAP to search for an given element in an array 


// #include <iostream>
// using namespace std;

// class SearchElement {
// public:
//     int searchitem(int arr[], int size, int key) {

//         for (int i = 0; i < size; i++) {
//             if (arr[i] == key) {
//                 return i;  
//             }
//         }
//         return -1;  
//     }
// };
// int main() {
//     SearchElement obj;
//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter element to search: ";
//     cin >> key;

//     int result = obj.searchitem(arr, size, key);

//     if (result != -1)
//         cout << "Element found at index " << result; 
//     else
//         cout << "Element not found.";
//     return 0;
// }

// 39. WAP to sort an given array 
// #include <iostream>
// using namespace std;

// class SortArray {
// public:


// void sort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

//     void display(int arr[], int size) {
//         for (int i = 0; i < size; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     SortArray obj;

//     int size;
//     cout << "Enter array size: ";
//     cin >> size;

//     int arr[100];

//     cout << "Enter elements: ";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     obj.sort(arr, size);
//     cout << "Sorted Array: ";
//     obj.display(arr, size);
//     return 0;
// }

// 40.// Develop a module where input is given by user about student's
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

// 41.wap for creating a banking system using encapsulation
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

// 42.create an atm system using concept of encapsulation which has following
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


//43. wap to enter an element in between of an array
// #include <iostream>
// using namespace std;

// class ArrayInsert {
// public:
//     void insertElement() {
//         int arr[100], n, pos, value;

//         cout<<"Enter number of elements: ";
//         cin>>n;

//         cout<<"Enter elements:\n";
//         for(int i=0;i<n;i++)
//             cin>>arr[i];

//         cout<<"Enter position to insert: ";
//         cin>>pos;

//         cout<<"Enter value: ";
//         cin>>value;

//         for(int i=n;i>=pos;i--)
//             arr[i]=arr[i-1];

//         arr[pos-1]=value;
//         n++;

//         cout<<"Array after insertion:\n";
//         for(int i=0;i<n;i++)
//             cout<<arr[i]<<" ";
//     }
// };

// int main(){
//     ArrayInsert obj;
//     obj.insertElement();
// }



// 44.wap to delete a particular element in a given array
// #include <iostream>
// using namespace std;

// class ArrayDelete {
// public:
//     void deleteElement() {
//         int arr[100], n, value, pos=-1;

//         cout<<"Enter size: ";
//         cin>>n;

//         cout<<"Enter elements:\n";
//         for(int i=0;i<n;i++)
//             cin>>arr[i];

//         cout<<"Enter element to delete: ";
//         cin>>value;

//         for(int i=0;i<n;i++){
//             if(arr[i]==value){
//                 pos=i;
//                 break;
//             }
//         }

//         if(pos==-1){
//             cout<<"Element not found";
//             return;
//         }

//         for(int i=pos;i<n-1;i++)
//             arr[i]=arr[i+1];

//         n--;

//         cout<<"Array after deletion:\n";
//         for(int i=0;i<n;i++)
//             cout<<arr[i]<<" ";
//     }
// };

// int main(){
//     ArrayDelete obj;
//     obj.deleteElement();
// }


// 45.wap a program to sort an array in ascending order
// #include <iostream>
// using namespace std;

// class SortAscending {
// public:
//     void sortArray() {
//         int arr[100], n;

//         cout<<"Enter size: ";
//         cin>>n;

//         cout<<"Enter elements:\n";
//         for(int i=0;i<n;i++)
//             cin>>arr[i];

//         for(int i=0;i<n-1;i++)
//             for(int j=i+1;j<n;j++)
//                 if(arr[i]>arr[j])
//                     swap(arr[i],arr[j]);

//         cout<<"Ascending order:\n";
//         for(int i=0;i<n;i++)
//             cout<<arr[i]<<" ";
//     }
// };

// int main(){
//     SortAscending obj;
//     obj.sortArray();
// }


// 46.wap to sort an array in descending order
// #include <iostream>
// using namespace std;

// class SortDescending {
// public:
//     void sortArray() {
//         int arr[100], n;

//         cout<<"Enter size: ";
//         cin>>n;

//         cout<<"Enter elements:\n";
//         for(int i=0;i<n;i++)
//             cin>>arr[i];

//         for(int i=0;i<n-1;i++)
//             for(int j=i+1;j<n;j++)
//                 if(arr[i]<arr[j])
//                     swap(arr[i],arr[j]);

//         cout<<"Descending order:\n";
//         for(int i=0;i<n;i++)
//             cout<<arr[i]<<" ";
//     }
// };

// int main(){
//     SortDescending obj;
//     obj.sortArray();
// }

// 47.wap to print letters right triangle
// #include <iostream>
// using namespace std;

// class RightTriangle {
// public:
//     void print(int n) {
//         for(int i=1;i<=n;i++){
//             for(int j=0;j<i;j++)
//                 cout<<char('A'+j);
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     RightTriangle obj;
//     obj.print(5);
// }


// 48.wap to print hollow square
// #include <iostream>
// using namespace std;

// class HollowSquare {
// public:
//     void print(int n) {
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){
//                 if(i==1||i==n||j==1||j==n)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     HollowSquare obj;
//     obj.print(5);
// }
// 49.wap to print hollow pyramid
// #include <iostream>
// using namespace std;

// class HollowPyramid {
// public:
//     void print(int n) {
//         for(int i=1;i<=n;i++){
//             for(int j=i;j<n;j++)
//                 cout<<" ";

//             for(int j=1;j<=2*i-1;j++){
//                 if(j==1||j==2*i-1||i==n)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     HollowPyramid obj;
//     obj.print(5);
// }


// 50.wap to print hollow diamond
// #include <iostream>
// using namespace std;

// class HollowDiamond {
// public:
//     void print(int n) {

//         for(int i=1;i<=n;i++){
//             for(int j=i;j<n;j++) cout<<" ";

//             for(int j=1;j<=2*i-1;j++){
//                 if(j==1||j==2*i-1)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//             cout<<endl;
//         }

//         for(int i=n-1;i>=1;i--){
//             for(int j=n;j>i;j--) cout<<" ";

//             for(int j=1;j<=2*i-1;j++){
//                 if(j==1||j==2*i-1)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     HollowDiamond obj;
//     obj.print(5);
// return 0;
// }

// 51.wap to print x star pattern
// #include <iostream>
// using namespace std;
// class XPattern {
// public:
//     void print(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n;j++){
//                 if(j==i || j==n-i+1)
//                     cout<<"*";
//                 else
//                     cout<<" ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     XPattern obj;
//     obj.print(5);
// }


// 52.wap to print binary triangle
// #include <iostream>
// using namespace std;

// class BinaryTriangle {
// public:
//     void print(int n){
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout<<(i+j)%2;
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     BinaryTriangle obj;
//     obj.print(5);
// }


// 53.wap to print star butterfly
// #include <iostream>
// using namespace std;

// class Butterfly {
// public:
//     void print(int n){

//         for(int i=1;i<=n;i++){

//             for(int j=1;j<=i;j++)
//                 cout<<"*";

//             for(int j=1;j<=2*(n-i);j++)
//                 cout<<" ";

//             for(int j=1;j<=i;j++)
//                 cout<<"*";

//             cout<<endl;
//         }

//         for(int i=n;i>=1;i--){

//             for(int j=1;j<=i;j++)
//                 cout<<"*";

//             for(int j=1;j<=2*(n-i);j++)
//                 cout<<" ";

//             for(int j=1;j<=i;j++)
//                 cout<<"*";

//             cout<<endl;
//         }
//     }
// };

// int main(){
//     Butterfly obj;
//     obj.print(5);
// }


// 54.wap to check for a perfect number
// #include <iostream>
// using namespace std;

// class PerfectNumber {
// public:
//     void check(int num){

//         int sum=0;

//         for(int i=1;i<=num/2;i++){
//             if(num%i==0)
//                 sum+=i;
//         }

//         if(sum==num)
//             cout<<"Perfect Number";
//         else
//             cout<<"Not Perfect Number";
//     }
// };

// int main(){
//     PerfectNumber obj;
//     int n;

//     cout<<"Enter number: ";
//     cin>>n;

//     obj.check(n);
// }



// 55. wap to check for prime number
// #include <iostream>
// using namespace std;

// class Prime{
//     int n;

// public:
//     void input(){
//         cout<<"Enter number: ";
//         cin>>n;
//     }

//     void check(){
//         int flag=0;

//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 flag=1;
//                 break;
//             }
//         }

//         if(flag==0)
//             cout<<"Prime Number";
//         else
//             cout<<"Not Prime";
//     }
// };

// int main(){
//     Prime p;
//     p.input();
//     p.check();
// return 0;
// }

//56. wap to create a linked list:
// #include<iostream>
// using namespace std;
// class node{
//      public:
//           int data;   
//          node* next;
//          node(int value){
//             // data = value;  
//             next = nullptr;
//          }
//       
// };
//   void display(node* head){
//           node* p = head;
//           while(p)     
//           {             
//             cout<<p->data<<"->";
//             p = p->next;  
//           }
//          }
// int main(){
//     node* n1,*n2,*n3;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     display(n1);
// return 0;
// }



// 57. wap to insert an element at the start of the linked list
// #include<iostream>
// using namespace std;
// class node{
//  public:
//            int data;
//            node*next;
//         node(int value){
//             data = value;
//             next = nullptr;
//         }
//         node* insertatstart(node* head,int value){
//             node*p = new node(value);
//             p->next = head;
//             head = p;
//             return head;
//         }
// };
//  int main(){
//     node* n1,*n2,*n3,*n;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     n1 = insertatstart(n1,90);
//     return 0;
//  }                  


// 58. wap to insert an element at the end of the linked lis
// #include<iostream>
// using namespace std;


// class node{
//  public:
//            int data;
//            node*next;
//         node(int value){
//             data = value;
//             next = nullptr;
//         }
//        node* insertatend(node* head,int value){
//         node * n = new node(value);
//         node* p = head;
//         while(p->next != nullptr){
//             p = p->next; }
//         p->next =n;         
//        }

//     };
//         int main(){
//     node* n1,*n2,*n3,*n;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     n1 = n1->insertatend(n1,90);
//     return 0;
//  }   

//  59. wap to insert before an element in a linked list
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// void insertBefore(Node*& head, int key, int newData) {

//     if (head == NULL) {
//         cout << "List is empty\n";
//         return;
//     }

    
//     if (head->data == key) {
//         Node* newNode = new Node();
//         newNode->data = newData;
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* curr = head;

//     while (curr->next != NULL && curr->next->data != key) {
//         curr = curr->next;
//     }


//     if (curr->next == NULL) {
//         cout << "Element not found\n";
//         return;
//     }

    
//     Node* newNode = new Node();
//     newNode->data = newData;
//     newNode->next = curr->next;
//     curr->next = newNode;
// }


// void display(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " -> ";
//         head = head->next;
//     }
//     cout << "NULL\n";
// }

// int main() {
   
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};
//     head->next->next = new Node{30, NULL};
//     head->next->next->next = new Node{40, NULL};

//     cout << "Original List:\n";
//     display(head);

//     int key, value;
//     cout << "Enter element before which to insert: ";
//     cin >> key;
//     cout << "Enter new value: ";
//     cin >> value;

//     insertBefore(head, key, value);

//     cout << "Updated List:\n";
//     display(head);

//     return 0;
// }


// 60.wap to delete an element at the start of a linked list
// #include <iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int value){
//     data = value;
//     next = nullptr;
// }
// node* deleteatstart(node* head){
//         node* p = head;
//         head = head->next;
//         delete p;
//         return head;}
// };                               
//       int main(){
//     node* n1,*n2,*n3,*n;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     n1 = n1->deleteatstart(n1);
//     return 0;}



// 61.wap to delete an element at the end of a linked list
// #include <iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int value){
//     data = value;
//     next = nullptr;
// }
// node* deleteatend(node* head){
//         node* p = head;
//         while(p->next->next != nullptr){
//             p = p->next; }
        
//         delete p->next;
//          p->next = nullptr;   
//         return head;}        
// };
//       int main(){
//     node* n1,*n2,*n3,*n;
//     n1 = new node(10);
//     n2 = new node(20);
//     n3 = new node(30);
//     n1->next = n2;
//     n2->next =n3;
//     n1 = n1->deleteatend(n1);
//     return 0;}




// 62.wap to delete before an element in a linked list
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// void deleteBefore(Node*& head, int key) {

//     if (head == NULL || head->next == NULL) {
//         cout << "Deletion not possible\n";
//         return;
//     }

    
//     if (head->data == key) {
//         cout << "No node exists before the given element\n";
//         return;
//     }

//     Node *prev = NULL, *curr = head, *nextNode = head->next;

//     // Traverse list
//     while (nextNode != NULL && nextNode->data != key) {
//         prev = curr;
//         curr = nextNode;
//         nextNode = nextNode->next;
//     }

//     // If key not found
//     if (nextNode == NULL) {
//         cout << "Element not found\n";
//         return;
//     }

//     // Deleting node before key
//     if (prev == NULL) {
//         // Delete head
//         head = curr->next;
//         delete curr;
//     } else {
//         prev->next = curr->next;
//         delete curr;
//     }

//     cout << "Node deleted successfully\n";
// }

// void display(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " -> ";
//         head = head->next;
//     }
//     cout << "NULL\n";
// }

// int main() {
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};
//     head->next->next = new Node{30, NULL};
//     head->next->next->next = new Node{40, NULL};

//     cout << "Original List:\n";
//     display(head);

//     int key;
//     cout << "Enter element: ";
//     cin >> key;

//     deleteBefore(head, key);

//     cout << "Updated List:\n";
//     display(head);

//     return 0;
// }



// 63.wap to search for an element in a linked list
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// bool search(Node* head, int key) {
//     Node* current = head;
//     while (current != NULL) {
//         if (current->data == key)
//             return true;
//         current = current->next;
//     }
//     return false;
// }

// int main() {

//     Node* head = new Node();
//     head->data = 10;

//     head->next = new Node();
//     head->next->data = 20;

//     head->next->next = new Node();
//     head->next->next->data = 30;

//     head->next->next->next = new Node();
//     head->next->next->next->data = 40;

//     head->next->next->next->next = NULL;

//     int key;
//     cout << "Enter element to search: ";
//     cin >> key;

//     if (search(head, key))
//         cout << "Element found in the linked list.";
//     else
//         cout << "Element not found in the linked list.";

//     return 0;
// }

// 64.wap to reverse a linked list
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// void reverseList(Node*& head) {
//     Node* prev = NULL;
//     Node* curr = head;
//     Node* next = NULL;

//     while (curr != NULL) {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     head = prev;
// }

// void display(Node* head) {
//     while (head != NULL) {
//         cout << head->data << " -> ";
//         head = head->next;
//     }
//     cout << "NULL";
// }

// int main() {
//     Node* head = new Node{10, NULL};
//     head->next = new Node{20, NULL};
//     head->next->next = new Node{30, NULL};
//     head->next->next->next = new Node{40, NULL};

//     reverseList(head);
//     display(head);

//     return 0;
// }


// 65.develop a library book issued system
// #include <iostream>
// using namespace std;

// class Library {
// private:
//     int bookId;
//     string bookName;
//     bool issued;

// public:
//     // constructor

//     Library() {
//         issued = false;
//     }

//     void addBook() {
//         cout << "Enter Book ID and Name: ";
//         cin >> bookId >> bookName;
//         issued = false;
//         cout << "Book added successfully\n";
//     }

//     void issueBook() {
//         if(bookId == 0) {
//             cout << "No book available\n";
//             return;
//         }

//         if(!issued) {
//             issued = true;
//             cout << "Book issued successfully\n";
//         } else {
//             cout << "Book already issued\n";
//         }
//     }

//     void returnBook() {
//         if(bookId == 0) {
//             cout << "No book exists\n";
//             return;
//         }

//         if(issued) {
//             issued = false;
//             cout << "Book returned successfully\n";
//         } else {
//             cout << "Book was not issued\n";
//         }
//     }

//     void displayStatus() {
//         if(bookId == 0) {
//             cout << "No book available\n";
//             return;
//         }

//         cout << "\nBook ID: " << bookId;
//         cout << "\nBook Name: " << bookName;
//         cout << "\nStatus: " << (issued ? "Issued" : "Available") << endl;
//     }
// };

// int main() {
//     Library lib;
//     int choice;

//     do {
//         cout << "\n----- LIBRARY MENU -----\n";
//         cout << "1. Add Book\n";
//         cout << "2. Issue Book\n";
//         cout << "3. Return Book\n";
//         cout << "4. Display Status\n";
//         cout << "5. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch(choice) {
//             case 1: lib.addBook(); break;
//             case 2: lib.issueBook(); break;
//             case 3: lib.returnBook(); break;
//             case 4: lib.displayStatus(); break;
//         }

//     } while(choice != 5);

//     return 0;
// }


//66.develop a temperature convertor using c++
// #include <iostream>
// using namespace std;

// class Temperature {
// private:
//     float value;  // encapsulated data

// public:
//     // Setter
//     void setValue(float v) {
//         value = v;
//     }

//     // Conversion functions
//     float celsiusToFahrenheit() {
//         return (value * 9 / 5) + 32;
//     }

//     float fahrenheitToCelsius() {
//         return (value - 32) * 5 / 9;
//     }

//     float celsiusToKelvin() {
//         return value + 273.15;
//     }

//     float kelvinToCelsius() {
//         return value - 273.15;
//     }

//     // Display menu
//     void menu() {
//         cout << "\n--- Temperature Converter ---\n";
//         cout << "1. Celsius to Fahrenheit\n";
//         cout << "2. Fahrenheit to Celsius\n";
//         cout << "3. Celsius to Kelvin\n";
//         cout << "4. Kelvin to Celsius\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//     }
// };

// int main() {
//     Temperature t;
//     int choice;
//     float input;

//     do {
//         t.menu();
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter temperature in Celsius: ";
//             cin >> input;
//             t.setValue(input);
//             cout << "Fahrenheit = " << t.celsiusToFahrenheit() << endl;
//             break;

//         case 2:
//             cout << "Enter temperature in Fahrenheit: ";
//             cin >> input;
//             t.setValue(input);
//             cout << "Celsius = " << t.fahrenheitToCelsius() << endl;
//             break;

//         case 3:
//             cout << "Enter temperature in Celsius: ";
//             cin >> input;
//             t.setValue(input);
//             cout << "Kelvin = " << t.celsiusToKelvin() << endl;
//             break;

//         case 4:
//             cout << "Enter temperature in Kelvin: ";
//             cin >> input;
//             t.setValue(input);
//             cout << "Celsius = " << t.kelvinToCelsius() << endl;
//             break;

//         case 5:
//             cout << "Exiting program...\n";
//             break;

//         default:
//             cout << "Invalid choice! Try again.\n";
//         }

//     } while (choice != 5);

//     return 0;
// }

// 67.wap to input and dislay a matrix
// #include <iostream>
// using namespace std;

// class Matrix {
// private:
//     int a[10][10];
//     int rows, cols;

// public:
//      Matrix(){
//         cout<<"enter the no. of rows and columns";
//         cin>>rows>>cols;
//         for(int i=0;i<rows;i++)
//             for(int j=0;j<cols;j++)
//                 cin >> a[i][j];
//      }



//     void display() {
//         cout << "\nResult Matrix:\n";
//         for(int i=0;i<rows;i++) {
//             for(int j=0;j<cols;j++)
//                 cout << a[i][j] << " ";
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Matrix m;
//   m.display();
//     return 0;
// }


// 68.wap to add two matrices

// #include <iostream>
// using namespace std;

// class Matrix {
// private:
//     int a[10][10], b[10][10], result[10][10];
//     int rows, cols;

// public:
//     void input() {
//         cout << "Enter rows and columns: ";
//         cin >> rows >> cols;

//         cout << "Enter Matrix A:\n";
//         for(int i=0;i<rows;i++)
//             for(int j=0;j<cols;j++)
//                 cin >> a[i][j];

//         cout << "Enter Matrix B:\n";
//         for(int i=0;i<rows;i++)
//             for(int j=0;j<cols;j++)
//                 cin >> b[i][j];
//     }

//     void add() {
//         for(int i=0;i<rows;i++)
//             for(int j=0;j<cols;j++)
//                 result[i][j] = a[i][j] + b[i][j];
//     }

//     void display() {
//         cout << "\nResult Matrix:\n";
//         for(int i=0;i<rows;i++) {
//             for(int j=0;j<cols;j++)
//                 cout << result[i][j] << " ";
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Matrix m;
//     int choice;

//     do {
//         cout << "\n--- MATRIX MENU ---\n";
//         cout << "1. Input Matrices\n";
//         cout << "2. Add Matrices\n";
//         cout << "3. Display Result\n";
//         cout << "4. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch(choice) {
//             case 1: m.input(); break;
//             case 2: m.add(); break;
//             case 3: m.display(); break;
//         }

//     } while(choice != 4);

//     return 0;
// }

// 69.WAP to multiply two matrices
// #include <iostream>
// using namespace std;

// class Matrix {
// private:
//     int a[10][10], b[10][10], res[10][10];
//     int r1,c1,r2,c2;

// public:
//     void input() {
//         cout<<"Enter rows & cols of A: ";
//         cin>>r1>>c1;
//         cout<<"Enter Matrix A:\n";
//         for(int i=0;i<r1;i++)
//             for(int j=0;j<c1;j++)
//                 cin>>a[i][j];

//         cout<<"Enter rows & cols of B: ";
//         cin>>r2>>c2;
//         cout<<"Enter Matrix B:\n";
//         for(int i=0;i<r2;i++)
//             for(int j=0;j<c2;j++)
//                 cin>>b[i][j];
//     }

//     void multiply() {
//         if(c1!=r2) {
//             cout<<"Multiplication not possible\n";
//             return;
//         }

//         for(int i=0;i<r1;i++) {
//             for(int j=0;j<c2;j++) {
//                 res[i][j]=0;
//                 for(int k=0;k<c1;k++)
//                     res[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//         cout<<"Multiplication done\n";
//     }

//     void display() {
//         for(int i=0;i<r1;i++) {
//             for(int j=0;j<c2;j++)
//                 cout<<res[i][j]<<" ";
//             cout<<endl;
//         }
//     }
// };

// int main() {
//     Matrix m;
//     int ch;
//     do {
//         cout<<"1.Input 2.Multiply 3.Display 4.Exit\n";
//         cin>>ch;
//         if(ch==1) m.input();
//         else if(ch==2) m.multiply();
//         else if(ch==3) m.display();
//     } while(ch!=4);
// }



// 70.wap to perfor dot product on two vectors
// #include <iostream>
// using namespace std;

// class Vector {
// private:
//     int a[10], b[10];
//     int n;

// public:
//     void input() {
//         cout << "Enter size of vectors: ";
//         cin >> n;

//         cout << "Enter elements of Vector A:\n";
//         for(int i=0;i<n;i++)
//             cin >> a[i];

//         cout << "Enter elements of Vector B:\n";
//         for(int i=0;i<n;i++)
//             cin >> b[i];
//     }

//     void dotProduct() {
//         int dot = 0;

//         for(int i=0;i<n;i++)
//             dot += a[i] * b[i];

//         cout << "Dot Product = " << dot << endl;
//     }

//     void display() {
//         cout << "Vector A: ";
//         for(int i=0;i<n;i++) cout << a[i] << " ";

//         cout << "\nVector B: ";
//         for(int i=0;i<n;i++) cout << b[i] << " ";

//         cout << endl;
//     }
// };

// int main() {
//     Vector v;
//     int ch;

//     do {
//         cout << "\n--- VECTOR MENU ---\n";
//         cout << "1. Input Vectors\n";
//         cout << "2. Display Vectors\n";
//         cout << "3. Dot Product\n";
//         cout << "4. Exit\n";
//         cout << "Enter choice: ";
//         cin >> ch;

//         switch(ch) {
//             case 1: v.input(); break;
//             case 2: v.display(); break;
//             case 3: v.dotProduct(); break;
//         }

//     } while(ch != 4);

//     return 0;
// }


// 71.wap to demonatrate inheritance
// #include <iostream>
// using namespace std;


// class Student {
// protected:
//     int roll;
//     string name;

// public:
//     void getStudent() {
//         cout << "Enter Roll Number: ";
//         cin >> roll;
//         cout << "Enter Name: ";
//         cin >> name;
//     }

//     void displayStudent() {
//         cout << "\nRoll Number: " << roll;
//         cout << "\nName: " << name;
//     }
// };


// class Result : public Student {
// private:
//     int marks1, marks2, total;

// public:
//     void getMarks() {
//         cout << "Enter Marks for Subject 1: ";
//         cin >> marks1;
//         cout << "Enter Marks for Subject 2: ";
//         cin >> marks2;
//     }

//     void calculate() {
//         total = marks1 + marks2;
//     }

//     void displayResult() {
//         displayStudent();  
//         cout << "\nMarks 1: " << marks1;
//         cout << "\nMarks 2: " << marks2;
//         cout << "\nTotal: " << total << endl;
//     }
// };


// int main() {
//     Result r;

//     r.getStudent();
//     r.getMarks();
//     r.calculate();
//     r.displayResult();

//     return 0;
// }

// 72.wap to demonstrate inheritance using class
// #include <iostream>
// using namespace std;

// class Calculator{
// public:
//     void add(int a,int b){
//         cout<<"Sum = "<<a+b<<endl;
//     }

//     void sub(int a,int b){
//         cout<<"Difference = "<<a-b<<endl;
//     }

//     void mul(int a,int b){
//         cout<<"Product = "<<a*b<<endl;
//     }

//     void div(int a,int b){
//         cout<<"Division = "<<a/b<<endl;
//     }
// };

// int main(){
//     Calculator c;

//     c.add(10,5);
//     c.sub(10,5);
//     c.mul(10,5);
//     c.div(10,5);
// return 0;
// }


// 73🔹 LeetCode #1 — Two Sum
// Problem:
// Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i = 0; i < nums.size(); i++) {
//             for(int j = i + 1; j < nums.size(); j++) {
//                 if(nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,7,11,15};
//     vector<int> res = obj.twoSum(nums, 9);

//     cout << res[0] << " " << res[1];
// }



// 74🔹 LeetCode #9 — Palindrome Number
// Problem:
// Given an integer x, return true if x is a palindrome, and false otherwise.


// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x < 0) return false;

//         int rev = 0, temp = x;
//         while(temp > 0) {
//             rev = rev * 10 + temp % 10;
//             temp /= 10;
//         }
//         return rev == x;
//     }
// };

// int main() {
//     Solution obj;
//     cout << obj.isPalindrome(121);
// }

// 75🔹 LeetCode #26 — Remove Duplicates from Sorted Array
// Problem:
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int> temp;

//         for(int i = 0; i < nums.size(); i++) {
//             bool found = false;

//             for(int j = 0; j < temp.size(); j++) {
//                 if(nums[i] == temp[j]) {
//                     found = true;
//                     break;
//                 }
//             }

//             if(!found)
//                 temp.push_back(nums[i]);
//         }

//         nums = temp;
//         return nums.size();
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {1,1,2};

//     cout << obj.removeDuplicates(nums);

// }



// 76🔹 LeetCode #27 — Remove Element
// Problem:
// Given an integer array nums and an integer val, remove all occurrences of val in-place.
// Return the number of elements k that are not equal to val.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         vector<int> temp;

//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] != val)
//                 temp.push_back(nums[i]);
//         }

//         nums = temp;
//         return nums.size();
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {3,2,2,3};

//     cout << obj.removeElement(nums, 3);
// }

// 77🔹 LeetCode #121 — Best Time to Buy and Sell Stock
// Problem:
// You are given an array prices where prices[i] is the price of a stock on day i.
// You want to maximize your profit by:
// Choosing a day to buy
// Choosing a later day to sell
// Return the maximum profit you can achieve.
// If no profit is possible, return 0.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0;

//         for(int i = 0; i < prices.size(); i++) {
//             for(int j = i+1; j < prices.size(); j++) {
//                 if(prices[j] - prices[i] > maxProfit)
//                     maxProfit = prices[j] - prices[i];
//             }
//         }
//         return maxProfit;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> prices = {7,1,5,3,6,4};
//     cout << obj.maxProfit(prices);
// }

// 78.🔹HackerRank — Simple Array Sum

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int simpleArraySum(vector<int>& arr) {
//         int sum = 0;

//         for(int i = 0; i < arr.size(); i++)
//             sum += arr[i];

//         return sum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1,2,3,4};

//     cout << obj.simpleArraySum(arr);
// }


// 79🔹 LeetCode #136 — Single Number
// Problem:
// Given a non-empty array of integers nums, every element appears twice except for one.
// Find that single one.
// Find the element that appears once (others appear twice).
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++) {
//             int count = 0;

//             for(int j = 0; j < nums.size(); j++) {
//                 if(nums[i] == nums[j])
//                     count++;
//             }

//             if(count == 1)
//                 return nums[i];
//         }
//         return -1;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,2,1};
//     cout << obj.singleNumber(nums);
// }

// 80.🔹 LeetCode #53 — Maximum Subarray
// Problem:
// Given an integer array nums, find the contiguous subarray with the largest sum, and return its sum.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxSum = nums[0];

//         for(int i = 0; i < nums.size(); i++) {
//             int sum = 0;
//             for(int j = i; j < nums.size(); j++) {
//                 sum += nums[j];
//                 if(sum > maxSum)
//                     maxSum = sum;
//             }
//         }
//         return maxSum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//     cout << obj.maxSubArray(nums);
// }

// 81.🔹hacker rank -- MINI-MAX SUM
// Find min sum of 4 elements and max sum of 4 elements.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void miniMaxSum(vector<int>& arr) {
//         long total = 0;

//         for(int i = 0; i < arr.size(); i++)
//             total += arr[i];

//         long minSum = total - arr[0];
//         long maxSum = total - arr[0];

//         for(int i = 0; i < arr.size(); i++) {
//             long sum = total - arr[i];

//             if(sum < minSum) minSum = sum;
//             if(sum > maxSum) maxSum = sum;
//         }

//         cout << minSum << " " << maxSum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1,2,3,4,5};
//     obj.miniMaxSum(arr);
// }



// 82🔹 LeetCode #88 — Merge Sorted Array
// Problem:
// You are given two sorted integer arrays nums1 and nums2, and two integers m and n.
// nums1 has size m + n
// First m elements are valid
// Last n elements are 0 (placeholders)
// Merge nums2 into nums1 as one sorted array.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i = 0; i < n; i++) {
//             nums1[m+i] = nums2[i];
//         }

//         // simple sort
//         for(int i = 0; i < m+n; i++) {
//             for(int j = i+1; j < m+n; j++) {
//                 if(nums1[i] > nums1[j]) {
//                     int temp = nums1[i];
//                     nums1[i] = nums1[j];
//                     nums1[j] = temp;
//                 }
//             }
//         }
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums1 = {1,2,3,0,0,0};
//     vector<int> nums2 = {2,5,6};

//     obj.merge(nums1, 3, nums2, 3);

//     for(int i = 0; i < nums1.size(); i++)
//         cout << nums1[i] << " ";
// }



// 🔹 83. Reverse Linked List//Leet Code #206
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* reverseList(node* head) {
//         node* prev = NULL;
//         node* curr = head;

//         while (curr) {
//             node* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };

// void printList(node* head) {
//     while (head) {
//         cout << head->val << " -> ";
//         head = head->next;
//     }
//     cout << "NULL\n";
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     Solution obj;
//     head = obj.reverseList(head);

//     printList(head);
//     return 0;
// }

// 🔹 84. Middle of Linked List // leet code #876

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* middlenode(node* head) {
//         node* slow = head;
//         node* fast = head;

//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);
//     head->next->next->next = new node(4);

//     Solution obj;
//     node* mid = obj.middlenode(head);

//     cout << "Middle: " << mid->val;
//     return 0;
// }


// 🔹 85. Remove Duplicates from Sorted List leet code #83


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* deleteDuplicates(node* head) {
//         node* curr = head;

//         while (curr && curr->next) {
//             if (curr->val == curr->next->val)
//                 curr->next = curr->next->next;
//             else
//                 curr = curr->next;
//         }
//         return head;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(1);
//     head->next->next = new node(2);

//     Solution obj;
//     head = obj.deleteDuplicates(head);

//     print(head);
//     return 0;
// }


// 🔹 86. Merge Two Sorted Lists leetcode #21


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* mergeTwoLists(node* l1, node* l2) {
//         node dummy(0);
//         node* tail = &dummy;

//         while (l1 && l2) {
//             if (l1->val < l2->val) {
//                 tail->next = l1;
//                 l1 = l1->next;
//             } else {
//                 tail->next = l2;
//                 l2 = l2->next;
//             }
//             tail = tail->next;
//         }

//         if (l1) tail->next = l1;
//         if (l2) tail->next = l2;

//         return dummy.next;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* l1 = new node(1);
//     l1->next = new node(3);

//     node* l2 = new node(2);
//     l2->next = new node(4);

//     Solution obj;
//     node* result = obj.mergeTwoLists(l1, l2);

//     print(result);
//     return 0;
// }


// 🔹 87. Linked List Cycle leetcode #141

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     bool hasCycle(node* head) {
//         node* slow = head;
//         node* fast = head;

//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if (slow == fast) return true;
//         }
//         return false;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = head; // create cycle

//     Solution obj;
//   if (obj.hasCycle(head)) {
//         cout << "Cycle Found";
//     } else {
//         cout << "No Cycle";
//     }
//     return 0;
// }

// 🔹 88. HACKER-RANK:Compare Two Linked Lists
// Given two linked lists, determine whether they are identical.
// Two lists are identical if they have the same data and same order.

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     bool compareLists(node* head1, node* head2) {
//         while (head1 && head2) {
//             if (head1->data != head2->data)
//                 return false;

//             head1 = head1->next;
//             head2 = head2->next;
//         }

//         return (head1 == NULL && head2 == NULL);
//     }
// };

// int main() {
//     node* l1 = new node(1);
//     l1->next = new node(2);

//     node* l2 = new node(1);
//     l2->next = new node(2);

//     Solution obj;
//     if (obj.compareLists(l1,l2)) {
//         cout << "Identical";
//     } else {
//         cout << "Not Identical";
//     }
//     return 0;
// }

// 89.🔹 1. Delete node in a Linked List leetcode -#237


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     void deletenode(node* node) {
//         node->val = node->next->val;
//         node->next = node->next->next;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(4);
//     head->next = new node(5);
//     head->next->next = new node(1);
//     head->next->next->next = new node(9);

//     Solution obj;
//     obj.deletenode(head->next); 

//     print(head);
//     return 0;
// }


// 🔹 90. Palindrome Linked List leetcode #234


// #include <iostream>
// #include <vector>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     bool isPalindrome(node* head) {
//         vector<int> arr;

//         while (head) {
//             arr.push_back(head->val);
//             head = head->next;
//         }

//         int i = 0, j = arr.size() - 1;
//         while (i < j) {
//             if (arr[i] != arr[j])
//                 return false;
//             i++;
//             j--;
//         }
//         return true;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(2);
//     head->next->next->next = new node(1);

//     Solution obj;
//   if (obj.isPalindrome(head)) {
//         cout << "Given lis is a Palindrome";
//     } else {
//         cout << "Given list is not a Not Palindrome";
//     }
//     return 0;
// }


// 🔹 91. Remove Nth node From End leetcode#19

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* removeNthFromEnd(node* head, int n) {
//         int size = 0;
//         node* temp = head;

//         while (temp) {
//             size++;
//             temp = temp->next;
//         }

//         if (n == size)
//             return head->next;

//         temp = head;
//         for (int i = 0; i < size - n - 1; i++)
//             temp = temp->next;

//         temp->next = temp->next->next;
//         return head;
//     }
// };

// void print(node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     Solution obj;
//     head = obj.removeNthFromEnd(head, 2);

//     print(head);
//     return 0;
// }

// 🔹 92. Hacker Rank-Find Merge Point of Two Lists
// Given two linked lists that merge at some point, find the node where they merge.
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;

//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     int findMergenode(node* head1, node* head2) {
//         node* a = head1;
//         node* b = head2;

//         while (a != b) {
//             a = (a == NULL) ? head2 : a->next;
//             b = (b == NULL) ? head1 : b->next;
//         }

//         return a->data;
//     }
// };

// int main() {
//     node* common = new node(30);
//     common->next = new node(40);

//     node* l1 = new node(10);
//     l1->next = new node(20);
//     l1->next->next = common;

//     node* l2 = new node(15);
//     l2->next = common;

//     Solution obj;
//     cout << obj.findMergenode(l1, l2);

//     return 0;
// }


// 🔷 93. Butterfly Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) cout << "*";
//         for (int j = 1; j <= 2*(n-i); j++) cout << " ";
//         for (int j = 1; j <= i; j++) cout << "*";
//         cout << endl;
//     }


//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) cout << "*";
//         for (int j = 1; j <= 2*(n-i); j++) cout << " ";
//         for (int j = 1; j <= i; j++) cout << "*";
//         cout << endl;
//         return 0;
//     }
// }

//🔷 94. Hollow Pyramid
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";

//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1 || i == n)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// 🔷 95. Pascal’s Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int num = 1;
//         for (int j = 0; j <= i; j++) {
//             cout << num << " ";
//             num = num * (i - j) / (j + 1);
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 🔷 96. Diamond with Numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++)
//          {cout << " ";}
//         for (int j = 1; j <= i; j++)
//         { cout << j;}
//         for (int j = i-1; j >= 1; j--) 
//         {cout << j;}
//         cout << endl;
//     }

//     for (int i = n-1; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++)
//          {cout << " ";}
//         for (int j = 1; j <= i; j++)
//         { cout << j;}
//         for (int j = i-1; j >= 1; j--) 
//         {cout << j;}
//         cout << endl;   
//     }
//     return 0;
// }


// 🔷 97 Hollow Square
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (i == 1 || i == n || j == 1 || j == n)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 🔷 98. Hollow Diamond
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }

//     for (int i = n-1; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 🔷 99. Zig-Zag Pattern
// *   *   *
//  * * * *
//   *   *
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 9;

//     for (int i = 1; i <= 3; i++) {
//         for (int j = 1; j <= n; j++) {
//             if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// return 0;
// }


// 🔷 100. Palindrome Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";

//         for (int j = i; j >= 1; j--) cout << j;
//         for (int j = 2; j <= i; j++) cout << j;

//         cout << endl;
//     }
// retrun 0;
// }

// 🔷 101. X Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (j == i || j == n-i+1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// return 0;
// }




// 🔷 102. Sandglass Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }

//     for (int i = 2; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }
//     return 0;
// }

// 103🔹 LeetCode #217 — Contains Duplicate

// Problem: Check if any value appears at least twice.

// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         set<int> s;

//         for(int x : nums) {
//             if(s.count(x)) return true;
//             s.insert(x);
//         }
//         return false;
//     }
// };



// 104🔹 LeetCode #283 — Move Zeroes

// Problem: Move all zeroes to end while maintaining order.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j = 0;

//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] != 0) {
//                 swap(nums[i], nums[j]);
//                 j++;
//             }
//         }
//     }
// };



// 105🔹 HackerRank — Compare the Triplets

// Problem: Compare scores of Alice and Bob.

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> compareTriplets(vector<int> a, vector<int> b) {
//     int alice = 0, bob = 0;

//     for(int i = 0; i < 3; i++) {
//         if(a[i] > b[i]) alice++;
//         else if(a[i] < b[i]) bob++;
//     }

//     return {alice, bob};
// }


// 106🔹 LeetCode #169 — Majority Element

// Problem: Find element appearing more than n/2 times.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count = 0, candidate = 0;

//         for(int x : nums) {
//             if(count == 0) candidate = x;
//             count += (x == candidate) ? 1 : -1;
//         }

//         return candidate;
//     }
// };



// 107🔹 HackerRank — Diagonal Difference

// Problem: Difference of diagonals in square matrix.

// #include <iostream>
// #include <vector>
// using namespace std;

// int diagonalDifference(vector<vector<int>> arr) {
//     int d1 = 0, d2 = 0;
//     int n = arr.size();

//     for(int i = 0; i < n; i++) {
//         d1 += arr[i][i];
//         d2 += arr[i][n-i-1];
//     }

//     return abs(d1 - d2);
// }


// 108🔹 LeetCode #125 — Valid Palindrome

// Problem: Check if string is palindrome ignoring symbols.

// #include <iostream>
// using namespace std;

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string temp = "";

//         for(char c : s) {
//             if(isalnum(c))
//                 temp += tolower(c);
//         }

//         int i = 0, j = temp.size() - 1;

//         while(i < j) {
//             if(temp[i] != temp[j]) return false;
//             i++; j--;
//         }

//         return true;
//     }
// };



// 109🔹 LeetCode #344 — Reverse String
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int i = 0, j = s.size() - 1;

//         while(i < j) {
//             swap(s[i], s[j]);
//             i++; j--;
//         }
//     }
// };



// 110🔹 HackerRank — Plus Minus

// Problem: Ratio of positive, negative, and zero.

// #include <iostream>
// #include <vector>
// using namespace std;

// void plusMinus(vector<int> arr) {
//     int pos=0, neg=0, zero=0;

//     for(int x : arr) {
//         if(x > 0) pos++;
//         else if(x < 0) neg++;
//         else zero++;
//     }

//     int n = arr.size();

//     cout << (float)pos/n << endl;
//     cout << (float)neg/n << endl;
//     cout << (float)zero/n << endl;
// }



// 111🔹 LeetCode #242 — Valid Anagram
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size() != t.size()) return false;

//         vector<int> freq(26, 0);

//         for(char c : s) freq[c - 'a']++;
//         for(char c : t) freq[c - 'a']--;

//         for(int x : freq)
//             if(x != 0) return false;

//         return true;
//     }
// };



// 112🔹 LeetCode #20 — Valid Parentheses
// #include <iostream>
// #include <stack>
// using namespace std;

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;

//         for(char c : s) {
//             if(c == '(' || c == '{' || c == '[')
//                 st.push(c);
//             else {
//                 if(st.empty()) return false;

//                 if((c == ')' && st.top() != '(') ||
//                    (c == '}' && st.top() != '{') ||
//                    (c == ']' && st.top() != '['))
//                     return false;

//                 st.pop();
//             }
//         }

//         return st.empty();
//     }
// };


// 113🔹 LeetCode #2 — Add Two Numbers
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;
//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* addTwoNumbers(node* l1, node* l2) {
//         node dummy(0);
//         node* tail = &dummy;
//         int carry = 0;

//         while(l1 || l2 || carry) {
//             int sum = carry;

//             if(l1) { sum += l1->val; l1 = l1->next; }
//             if(l2) { sum += l2->val; l2 = l2->next; }

//             carry = sum / 10;
//             tail->next = new node(sum % 10);
//             tail = tail->next;
//         }
//         return dummy.next;
//     }
// };

// void print(node* head) {
//     while(head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* l1 = new node(2);
//     l1->next = new node(4);
//     l1->next->next = new node(3);

//     node* l2 = new node(5);
//     l2->next = new node(6);
//     l2->next->next = new node(4);

//     Solution obj;
//     node* res = obj.addTwoNumbers(l1, l2);

//     print(res);
// }


// 114🔹 HackerRank — Insert at Tail

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// node* insertAtTail(node* head, int data) {
//     node* newNode = new node(data);

//     if(head == NULL) return newNode;

//     node* temp = head;
//     while(temp->next)
//         temp = temp->next;

//     temp->next = newNode;
//     return head;
// }

// void print(node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = NULL;

//     head = insertAtTail(head, 1);
//     head = insertAtTail(head, 2);
//     head = insertAtTail(head, 3);

//     print(head);
// }


// 115🔹 LeetCode #160 — Intersection of Two Lists

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;
//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* getIntersectionNode(node* headA, node* headB) {
//         node* a = headA;
//         node* b = headB;

//         while(a != b) {
//             a = (a == NULL) ? headB : a->next;
//             b = (b == NULL) ? headA : b->next;
//         }
//         return a;
//     }
// };

// int main() {
//     node* common = new node(8);
//     common->next = new node(10);

//     node* l1 = new node(3);
//     l1->next = new node(7);
//     l1->next->next = common;

//     node* l2 = new node(99);
//     l2->next = common;

//     Solution obj;
//     node* res = obj.getIntersectionNode(l1, l2);

//     if(res) cout << res->val;
// }


// 116🔹 HackerRank — Insert at Position

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// node* insertAtPosition(node* head, int data, int pos) {
//     node* newNode = new node(data);

//     if(pos == 0) {
//         newNode->next = head;
//         return newNode;
//     }

//     node* temp = head;
//     for(int i = 0; i < pos-1; i++)
//         temp = temp->next;

//     newNode->next = temp->next;
//     temp->next = newNode;

//     return head;
// }

// void print(node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(3);

//     head = insertAtPosition(head, 2, 1);

//     print(head);
// }

// 117🔹 LeetCode #82 — Remove Duplicates II


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;
//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* deleteDuplicates(node* head) {
//         node dummy(0);
//         dummy.next = head;
//         node* prev = &dummy;

//         while(head) {
//             if(head->next && head->val == head->next->val) {
//                 while(head->next && head->val == head->next->val)
//                     head = head->next;
//                 prev->next = head->next;
//             } else {
//                 prev = prev->next;
//             }
//             head = head->next;
//         }
//         return dummy.next;
//     }
// };

// void print(node* head) {
//     while(head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(1);
//     head->next->next = new node(2);

//     Solution obj;
//     head = obj.deleteDuplicates(head);

//     print(head);
// }

// 118🔹 HackerRank — Delete Node


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// node* deleteNode(node* head, int pos) {
//     if(pos == 0) return head->next;

//     node* temp = head;
//     for(int i = 0; i < pos-1; i++)
//         temp = temp->next;

//     temp->next = temp->next->next;
//     return head;
// }

// void print(node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     head = deleteNode(head, 1);

//     print(head);
// }

// 119🔹 LeetCode #61 — Rotate List

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;
//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* rotateRight(node* head, int k) {
//         if(!head || !head->next) return head;

//         node* temp = head;
//         int len = 1;

//         while(temp->next) {
//             temp = temp->next;
//             len++;
//         }

//         temp->next = head;
//         k = k % len;
//         int steps = len - k;

//         while(steps--)
//             temp = temp->next;

//         node* newHead = temp->next;
//         temp->next = NULL;

//         return newHead;
//     }
// };

// void print(node* head) {
//     while(head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     Solution obj;
//     head = obj.rotateRight(head, 1);

//     print(head);
// }

// 120🔹 HackerRank — Print Linked List

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// void printList(node* head) {
//     while(head) {
//         cout << head->data << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);

//     printList(head);
// }
// 121🔹 LeetCode #328 — Odd Even Linked List

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;
//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* oddEvenList(node* head) {
//         if(!head) return head;

//         node* odd = head;
//         node* even = head->next;
//         node* evenHead = even;

//         while(even && even->next) {
//             odd->next = even->next;
//             odd = odd->next;

//             even->next = odd->next;
//             even = even->next;
//         }

//         odd->next = evenHead;
//         return head;
//     }
// };

// void print(node* head) {
//     while(head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);
//     head->next->next->next = new node(4);

//     Solution obj;
//     head = obj.oddEvenList(head);

//     print(head);
// }


// 123🔹 HackerRank — Reverse Print

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int data;
//     node* next;
//     node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// void reversePrint(node* head) {
//     if(head == NULL) return;

//     reversePrint(head->next);
//     cout << head->data << " ";
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     reversePrint(head);
// }


// 124🔹. HackerRank – Continuous Character Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     char ch = 'A';
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 125🔹. HackerRank – Mirror Right Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n-i; j++) cout << " ";
//         for(int j = 1; j <= i; j++) cout << "*";
//         cout << endl;
//     }
//     return 0;
// }



// 126🔹. HackerRank – Double Number Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) cout << j;
//         for(int j = i; j >= 1; j--) cout << j;
//         cout << endl;
//     }
//     return 0;
// }


// 127. HackerRank – Row-wise Same Number Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= i; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// 128. HackerRank – Reverse Alphabet Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for(int i = n; i >= 1; i--) {
//         char ch = 'A';
//         for(int j = 1; j <= i; j++) {
//             cout << ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 129. HackerRank – Centered Star Pyramid
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n-i; j++) cout << " ";
//         for(int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }
//     return 0;
// }



// 130. HackerRank – Inverted Center Pyramid
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for(int i = n; i >= 1; i--) {
//         for(int j = 1; j <= n-i; j++) cout << " ";
//         for(int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }
//     return 0;
// }


// 131🔹. LeetCode Style – Matrix Diagonal Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(i == j) cout << "1 ";
//             else cout << "0 ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// 132🔹. HackerRank – Checkerboard Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             if((i + j) % 2 == 0) cout << "*";
//             else cout << "#";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 133🔹. HackerRank – Hourglass Star Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;


//     for(int i = n; i >= 1; i--) {
//         for(int j = 0; j < n-i; j++) cout << " ";
//         for(int j = 0; j < i; j++) cout << "* ";
//         cout << endl;
//     }

//     for(int i = 2; i <= n; i++) {
//         for(int j = 0; j < n-i; j++) cout << " ";
//         for(int j = 0; j < i; j++) cout << "* ";
//         cout << endl;
//     }

//     return 0;
// }


// 134. LeetCode #142 — Linked List Cycle II

// Given a linked list, return the node where the cycle begins.
// If there is no cycle, return NULL.

// #include <iostream>
// using namespace std;

// class ListNode {
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// class Solution {
// public:
//     ListNode* detectCycle(ListNode *head) {
//         if(!head) return nullptr;

//         ListNode *slow = head, *fast = head;

    
//         while(fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;

//             if(slow == fast) {
                
//                 ListNode* entry = head;
//                 while(entry != slow) {
//                     entry = entry->next;
//                     slow = slow->next;
//                 }
//                 return entry;
//             }
//         }
//         return nullptr;
//     }
// };

// int main() {
 
//     ListNode* head = new ListNode(3);
//     ListNode* n1 = new ListNode(2);
//     ListNode* n2 = new ListNode(0);
//     ListNode* n3 = new ListNode(-4);

//     head->next = n1;
//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n1; 

//     Solution s;
//     ListNode* res = s.detectCycle(head);

//     if(res)
//         cout << "Cycle starts at node: " << res->val;
//     else
//         cout << "No cycle";
//     return 0;
// }


// 135. LeetCode #118 — Pascal’s Triangle{matrix..}


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> triangle;

//         for (int i = 0; i < numRows; i++) {
//             vector<int> row(i + 1, 1);

//             for (int j = 1; j < i; j++) {
//                 row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//             }

//             triangle.push_back(row);
//         }

//         return triangle;
//     }
// };

// int main() {
//     Solution obj;
//     int numRows = 5;

//     vector<vector<int>> result = obj.generate(numRows);

//     for (auto row : result) {
//         for (auto val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     return 0;
// }



//  136. HackerRank — Staircase
// #include <iostream>
// using namespace std;

// class Staircase {
// public:
//     void printStaircase(int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n - i; j++)
//                 cout << " ";
//             for (int j = 1; j <= i; j++)
//                 cout << "#";
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Staircase obj;
//     int n = 5;
//     obj.printStaircase(n);
//     return 0;
// }


// 137 LeetCode #119 — Pascal’s Triangle II
// Problem: Given an integer rowIndex, return the rowIndex-th (0-indexed) row of Pascal’s triangle.
// Example
// Input: rowIndex = 3
// Output: [1,3,3,1]


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> getRow(int rowIndex) {
//         vector<int> row(rowIndex + 1, 1);

//         for (int i = 1; i < rowIndex; i++) {
//             for (int j = i; j > 0; j--) {
//                 row[j] += row[j - 1];
//             }
//         }

//         return row;
//     }
// };

// int main() {
//     Solution obj;
//     int rowIndex = 4;

//     vector<int> result = obj.getRow(rowIndex);

//     for (int val : result)
//         cout << val << " ";

//     return 0;
// }


// 138. HackerRank — Plus Minus
// Problem:Given an array of integers, calculate the ratios of:
// positive numbers
// negative numbers
// zeros

// Print each value on a new line with 6 decimal places.

// Example
// Input: [-4, 3, -9, 0, 4, 1]

// Output:
// 0.500000
// 0.333333
// 0.166667

// #include <iostream>
// #include <vector>
// #include <iomanip>
// using namespace std;

// class Solution {
// public:
//     void plusMinus(vector<int>& arr) {
//         int pos = 0, neg = 0, zero = 0;
//         int n = arr.size();

//         for (int x : arr) {
//             if (x > 0) pos++;
//             else if (x < 0) neg++;
//             else zero++;
//         }

//         cout << fixed << setprecision(6);
//         cout << (double)pos / n << endl;
//         cout << (double)neg / n << endl;
//         cout << (double)zero / n << endl;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {-4, 3, -9, 0, 4, 1};

//     obj.plusMinus(arr);

//     return 0;
// }


//  139. LeetCode #59 — Spiral Matrix II
//  Problem: Given n, generate an n x n matrix filled with elements from 1 to n² in spiral order.

// Output:
// [
//  [1,2,3],
//  [8,9,4],
//  [7,6,5]
// ]

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>> matrix(n, vector<int>(n, 0));

//         int top = 0, bottom = n - 1;
//         int left = 0, right = n - 1;
//         int num = 1;

//         while (top <= bottom && left <= right) {
//             for (int i = left; i <= right; i++)
//                 matrix[top][i] = num++;
//             top++;

//             for (int i = top; i <= bottom; i++)
//                 matrix[i][right] = num++;
//             right--;

//             if (top <= bottom) {
//                 for (int i = right; i >= left; i--)
//                     matrix[bottom][i] = num++;
//                 bottom--;
//             }

//             if (left <= right) {
//                 for (int i = bottom; i >= top; i--)
//                     matrix[i][left] = num++;
//                 left++;
//             }
//         }

//         return matrix;
//     }
// };

// int main() {
//     Solution obj;
//     int n = 3;

//     vector<vector<int>> result = obj.generateMatrix(n);

//     for (auto row : result) {
//         for (auto val : row)
//             cout << val << " ";
//         cout << endl;
//     }

//     return 0;
// }



//  140. HackerRank — Hollow Square Pattern 

// #include <iostream>
// using namespace std;

// class HollowSquare {
// public:
//     void printPattern(int n) {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n; j++) {
//                 if (i == 1 || i == n || j == 1 || j == n)
//                     cout << "*";
//                 else
//                     cout << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     HollowSquare obj;
//     int n = 5;
//     obj.printPattern(n);
//     return 0;
// }




//  141. LeetCode #54 — Spiral Matrix
// Problem: Given an m x n matrix, return all elements in spiral order.

// Example
// Input:
// [
//  [1,2,3],
//  [4,5,6],
//  [7,8,9]
// ]
// Output:
// [1,2,3,6,9,8,7,4,5]



// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> result;

//         int top = 0, bottom = matrix.size() - 1;
//         int left = 0, right = matrix[0].size() - 1;

//         while (top <= bottom && left <= right) {

//             for (int i = left; i <= right; i++)
//                 result.push_back(matrix[top][i]);
//             top++;

//             for (int i = top; i <= bottom; i++)
//                 result.push_back(matrix[i][right]);
//             right--;

//             if (top <= bottom) {
//                 for (int i = right; i >= left; i--)
//                     result.push_back(matrix[bottom][i]);
//                 bottom--;
//             }

//             if (left <= right) {
//                 for (int i = bottom; i >= top; i--)
//                     result.push_back(matrix[i][left]);
//                 left++;
//             }
//         }

//         return result;
//     }
// };

// int main() {
//     Solution obj;

//     vector<vector<int>> matrix = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     vector<int> result = obj.spiralOrder(matrix);

//     for (int x : result)
//         cout << x << " ";

//     return 0;
// }





// 142. HackerRank — Diamond Pattern

// #include <iostream>
// using namespace std;

// class Diamond {
// public:
//     void printPattern(int n) {

    
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n - i; j++)
//                 cout << " ";
//             for (int j = 1; j <= 2 * i - 1; j++)
//                 cout << "*";
//             cout << endl;
//         }

//         for (int i = n - 1; i >= 1; i--) {
//             for (int j = 1; j <= n - i; j++)
//                 cout << " ";
//             for (int j = 1; j <= 2 * i - 1; j++)
//                 cout << "*";
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Diamond obj;
//     int n = 3;
//     obj.printPattern(n);
//     return 0;
// }




// 143.HackerRank -- Hollow Pyramid
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";

//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1 || i == n)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// 145.HackerRank-- Hollow Diamond
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }

//     for (int i = n-1; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) {
//             if (j == 1 || j == 2*i-1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// 146. HackerRank --Palindrome Triangle
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";

//         for (int j = i; j >= 1; j--) cout << j;
//         for (int j = 2; j <= i; j++) cout << j;

//         cout << endl;
//     }
// retrun 0;
// }



// 147. HackerRank-- Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (j == i || j == n-i+1)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << endl;
//     }
// return 0;
// }


// 148. HackerRank - Hourglass Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }

//     for (int i = 2; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) cout << " ";
//         for (int j = 1; j <= 2*i-1; j++) cout << "*";
//         cout << endl;
//     }
//     return 0;
// }


// 149. HackerRank — Triangle Quest
// For n = 5:
// 1
// 22
// 333
// 4444

// #include <iostream>
// using namespace std;

// class TriangleQuest {
// public:
//     void printPattern(int n) {
//         for(int i = 1; i < n; i++) {
//             for(int j = 0; j < i; j++)
//                 cout << i;
//             cout << endl;
//         }
//     }
// };

// int main() {
//     TriangleQuest obj;
//     obj.printPattern(6);
// }


// 150. hackerRank Pallindrom pyramid
// #include <iostream>
// using namespace std;

// class PalindromePyramid {
// public:
//     void printPattern(int n) {
//         for (int i = 1; i <= n; i++) {

//             for (int j = 1; j <= n - i; j++)
//                 cout << " ";

//             for (int j = 1; j <= i; j++)
//                 cout << j;

//             for (int j = i - 1; j >= 1; j--)
//                 cout << j;

//             cout << endl;
//         }
//     }
// };

// int main() {
//     PalindromePyramid obj;
//     int n = 5;
//     obj.printPattern(n);
//     return 0;
// }




// 151.HackerRank - Binary Triangle

// #include <iostream>
// using namespace std;

// class BinaryTriangle {
// public:
//     void printPattern(int n) {

//         for (int i = 1; i <= n; i++) {
//             int val = (i % 2 == 1) ? 1 : 0;

//             for (int j = 1; j <= i; j++) {
//                 cout << val;
//                 val = 1 - val;
//             }

//             cout << endl;
//         }
//     }
// };

// int main() {
//     BinaryTriangle obj;
//     int n = 5;
//     obj.printPattern(n);
//     return 0;
// }


// 152. HackerRank – Checkerboard Pattern
// #include <iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             if((i + j) % 2 == 0) cout << "*";
//             else cout << "#";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// 153. HackerRank — Printing Pattern 
// Problem Description

// Print a square pattern of size 2n-1 where numbers decrease towards center.

// Example (n = 3):

// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3
// OOP C++ Solution
// #include <iostream>
// using namespace std;

// class Pattern {
// public:
//     void printPattern(int n) {
//         int size = 2*n - 1;
//         for(int i = 0; i < size; i++) {
//             for(int j = 0; j < size; j++) {
//                 int val = n - min(min(i, j), min(size-1-i, size-1-j));
//                 cout << val << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Pattern obj;
//     obj.printPattern(3);
// }



// 154. HackerRank — Rangoli Pattern
// Problem Description

// Print alphabet rangoli of size n.

// Example (n = 3):

// ----c----
// --c-b-c--
// c-b-a-b-c
// --c-b-c--
// ----c----

// #include <iostream>
// using namespace std;
// class Rangoli {
// public:
//       Rangoli(int n) {
//         int width = 4*n - 3;

//         for(int i = 0; i < n; i++) {
//             string s = "";
//             for(int j = n-1; j >= n-i; j--) {
//                 s += char('a' + j);
//                 s += "-";
//             }
//             s += char('a' + (n-i-1));
//             for(int j = n-i; j < n; j++) {
//                 s += "-";
//                 s += char('a' + j);
//             }

//             int dash = (width - s.size()) / 2;
//             cout << string(dash, '-') << s << string(dash, '-') << endl;
//         }

//         for(int i = n-2; i >= 0; i--) {
//             string s = "";
//             for(int j = n-1; j >= n-i; j--) {
//                 s += char('a' + j);
//                 s += "-";
//             }
//             s += char('a' + (n-i-1));
//             for(int j = n-i; j < n; j++) {
//                 s += "-";
//                 s += char('a' + j);
//             }

//             int dash = (width - s.size()) / 2;
//             cout << string(dash, '-') << s << string(dash, '-') << endl;
//         }
//     }
// };

// int main() {
//     Rangoli r(3);
//     return 0;
// }




// 155. LeetCode #66 — Plus One

// Problem:
// Given a number represented as an array of digits, increment it by one.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         for(int i=digits.size()-1;i>=0;i--){
//             if(digits[i]<9){
//                 digits[i]++;
//                 return digits;
//             }
//             digits[i]=0;
//         }
//         digits.insert(digits.begin(),1);
//         return digits;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> digits = {9,9,9};
//     vector<int> res = obj.plusOne(digits);
//     for(int x:res) cout<<x;
// }


// 156. LeetCode #118 — Pascal's Triangle

// Problem:
// Generate the first numRows of Pascal’s triangle.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>> res;
//         for(int i=0;i<numRows;i++){
//             vector<int> row(i+1,1);
//             for(int j=1;j<i;j++){
//                 row[j] = res[i-1][j-1] + res[i-1][j];
//             }
//             res.push_back(row);
//         }
//         return res;
//     }
// };

// int main() {
//     Solution obj;
//     int n = 5;
//     vector<vector<int>> res = obj.generate(n);
//     for(auto row: res){
//         for(int x:row) cout<<x<<" ";
//         cout<<endl;
//     }
// }


// 157. LeetCode #209 — Minimum Size Subarray Sum

// Problem:
// Given an array of positive integers nums and an integer target, return the minimal length of a
// contiguous subarray whose sum ≥ target. If none, return 0.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int left=0, sum=0, minLen=INT_MAX;
//         for(int right=0; right<nums.size(); right++){
//             sum += nums[right];
//             while(sum >= target){
//                 minLen = min(minLen, right-left+1);
//                 sum -= nums[left++];
//             }
//         }
//         return minLen == INT_MAX ? 0 : minLen;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,3,1,2,4,3};
//     cout << obj.minSubArrayLen(7, nums);
// }



// 158. LeetCode #560 — Subarray Sum Equals K

// Problem:
// Given an integer array nums and integer k, return total number of continuous subarrays whose sum equals k.

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;
//         mp[0] = 1;
//         int sum = 0, count = 0;

//         for(int n : nums){
//             sum += n;
//             if(mp.count(sum - k))
//                 count += mp[sum - k];
//             mp[sum]++;
//         }
//         return count;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {1,1,1};
//     cout << obj.subarraySum(nums,2);
// }


// 159. LeetCode #238 — Product of Array Except Self

// Problem:
// Return an array such that each element is the product of all other elements except itself. No division allowed.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> res(n,1);

//         int prefix = 1;
//         for(int i=0;i<n;i++){
//             res[i] = prefix;
//             prefix *= nums[i];
//         }

//         int suffix = 1;
//         for(int i=n-1;i>=0;i--){
//             res[i] *= suffix;
//             suffix *= nums[i];
//         }
//         return res;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {1,2,3,4};
//     vector<int> res = obj.productExceptSelf(nums);
//     for(int x:res) cout<<x<<" ";
// }


// 160. LeetCode #152 — Maximum Product Subarray

// Problem:
// Find contiguous subarray with the largest product.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int maxProd = nums[0], minProd = nums[0], result = nums[0];

//         for(int i=1;i<nums.size();i++){
//             if(nums[i] < 0) swap(maxProd, minProd);

//             maxProd = max(nums[i], maxProd * nums[i]);
//             minProd = min(nums[i], minProd * nums[i]);

//             result = max(result, maxProd);
//         }
//         return result;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,3,-2,4};
//     cout << obj.maxProduct(nums);
// }


// 161. LeetCode #11 — Container With Most Water

// Problem:
// Find two lines that together with x-axis form a container holding the most water.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int left=0, right=height.size()-1;
//         int maxWater = 0;

//         while(left < right){
//             int h = min(height[left], height[right]);
//             maxWater = max(maxWater, h * (right-left));

//             if(height[left] < height[right]) left++;
//             else right--;
//         }
//         return maxWater;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> h = {1,8,6,2,5,4,8,3,7};
//     cout << obj.maxArea(h);
// }


// 162. LeetCode #41 — First Missing Positive
// Problem:
// Given an unsorted integer array nums, return the smallest missing positive integer.
// Constraint: must run in O(n) time and use constant extra space.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n = nums.size();

//         for(int i=0;i<n;i++){
//             while(nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i]){
//                 swap(nums[i], nums[nums[i]-1]);
//             }
//         }

//         for(int i=0;i<n;i++){
//             if(nums[i] != i+1) return i+1;
//         }
//         return n+1;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {3,4,-1,1};
//     cout << obj.firstMissingPositive(nums);
// }



// 163. LeetCode #128 — Longest Consecutive Sequence
// Problem:
// Given an unsorted array, return the length of the longest consecutive elements sequence.
// Must run in O(n) time.


// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_set<int> s(nums.begin(), nums.end());
//         int longest = 0;

//         for(int num : s){
//             if(!s.count(num-1)){ // start of sequence
//                 int curr = num;
//                 int streak = 1;

//                 while(s.count(curr+1)){
//                     curr++;
//                     streak++;
//                 }
//                 longest = max(longest, streak);
//             }
//         }
//         return longest;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {100,4,200,1,3,2};
//     cout << obj.longestConsecutive(nums);
// }




// 164. LeetCode #75 — Sort Colors

// Problem:
// Sort an array containing only 0, 1, and 2 (dutch National Flag problem) in-place.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int low = 0, mid = 0, high = nums.size()-1;

//         while(mid <= high){
//             if(nums[mid] == 0){
//                 swap(nums[low++], nums[mid++]);
//             }
//             else if(nums[mid] == 1){
//                 mid++;
//             }
//             else{
//                 swap(nums[mid], nums[high--]);
//             }
//         }
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,0,2,1,1,0};
//     obj.sortColors(nums);
//     for(int x:nums) cout<<x<<" ";
// }



// 165 LeetCode #24 — Swap Nodes in Pairs

// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* swapPairs(ListNode* head){
//         ListNode dummy(0);
//         dummy.next=head;
//         ListNode* curr=&dummy;

//         while(curr->next && curr->next->next){
//             ListNode* first=curr->next;
//             ListNode* second=curr->next->next;

//             first->next=second->next;
//             second->next=first;
//             curr->next=second;

//             curr=first;
//         }
//         return dummy.next;
//     }
// };

// void print(ListNode* head){
//     while(head){ cout<<head->val<<" "; head=head->next; }
//     cout<<endl;
// }

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(3);
//     head->next->next->next=new ListNode(4);

//     Solution s;
//     head=s.swapPairs(head);
//     print(head);
// }


// 166 LeetCode #61 — Rotate List

// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* rotateRight(ListNode* head,int k){
//         if(!head || !head->next) return head;

//         int len=1;
//         ListNode* tail=head;
//         while(tail->next){
//             tail=tail->next;
//             len++;
//         }

//         tail->next=head;
//         k%=len;
//         int steps=len-k;

//         while(steps--) tail=tail->next;

//         ListNode* newHead=tail->next;
//         tail->next=nullptr;

//         return newHead;
//     }
// };

// void print(ListNode* head){
//     while(head){ cout<<head->val<<" "; head=head->next; }
//     cout<<endl;
// }

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(3);

//     Solution s;
//     head=s.rotateRight(head,1);
//     print(head);
// }

// 167 LeetCode #92 — Reverse Linked List II


// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* reverseBetween(ListNode* head,int left,int right){
//         ListNode dummy(0);
//         dummy.next=head;

//         ListNode* prev=&dummy;
//         for(int i=1;i<left;i++) prev=prev->next;

//         ListNode* curr=prev->next;

//         for(int i=0;i<right-left;i++){
//             ListNode* temp=curr->next;
//             curr->next=temp->next;
//             temp->next=prev->next;
//             prev->next=temp;
//         }

//         return dummy.next;
//     }
// };

// void print(ListNode* head){
//     while(head){ cout<<head->val<<" "; head=head->next; }
//     cout<<endl;
// }

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(3);
//     head->next->next->next=new ListNode(4);

//     Solution s;
//     head=s.reverseBetween(head,2,3);
//     print(head);
// }


// 168 LeetCode #138 — Copy List with Random Pointer

// #include <iostream>
// #include <unordered_map>
// using namespace std;

// class Node{
// public:
//     int val;
//     Node* next;
//     Node* random;
//     Node(int x):val(x),next(nullptr),random(nullptr){}
// };

// class Solution{
// public:
//     Node* copyRandomList(Node* head){
//         unordered_map<Node*,Node*> mp;

//         Node* curr=head;
//         while(curr){
//             mp[curr]=new Node(curr->val);
//             curr=curr->next;
//         }

//         curr=head;
//         while(curr){
//             mp[curr]->next=mp[curr->next];
//             mp[curr]->random=mp[curr->random];
//             curr=curr->next;
//         }

//         return mp[head];
//     }
// };

// void print(Node* head){
//     while(head){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* head=new Node(1);
//     head->next=new Node(2);
//     head->random=head->next;

//     Solution s;
//     Node* copy=s.copyRandomList(head);

//     print(copy);
// }

// 169 LeetCode #143 — Reorder List

// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     void reorderList(ListNode* head){
//         if(!head) return;

//         ListNode *slow=head,*fast=head;
//         while(fast->next && fast->next->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }

//         ListNode* prev=nullptr;
//         ListNode* curr=slow->next;
//         while(curr){
//             ListNode* next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }

//         slow->next=nullptr;

//         ListNode* first=head;
//         ListNode* second=prev;

//         while(second){
//             ListNode* t1=first->next;
//             ListNode* t2=second->next;

//             first->next=second;
//             second->next=t1;

//             first=t1;
//             second=t2;
//         }
//     }
// };

// void print(ListNode* head){
//     while(head){ cout<<head->val<<" "; head=head->next; }
//     cout<<endl;
// }

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(3);
//     head->next->next->next=new ListNode(4);

//     Solution s;
//     s.reorderList(head);
//     print(head);
// }

// 170 LeetCode #147 — Insertion Sort List

// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* insertionSortList(ListNode* head){
//         ListNode dummy(0);

//         while(head){
//             ListNode* curr=head;
//             head=head->next;

//             ListNode* prev=&dummy;
//             while(prev->next && prev->next->val < curr->val)
//                 prev=prev->next;

//             curr->next=prev->next;
//             prev->next=curr;
//         }
//         return dummy.next;
//     }
// };

// int main(){
//     ListNode* head=new ListNode(4);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(1);

//     Solution s;
//     head=s.insertionSortList(head);

//     while(head){ cout<<head->val<<" "; head=head->next; }
// }

// 171 LeetCode #203 — Remove Elements

// #include <iostream>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     ListNode* removeElements(ListNode* head,int val){
//         ListNode dummy(0);
//         dummy.next=head;

//         ListNode* curr=&dummy;
//         while(curr->next){
//             if(curr->next->val==val)
//                 curr->next=curr->next->next;
//             else curr=curr->next;
//         }
//         return dummy.next;
//     }
// };

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(6);

//     Solution s;
//     head=s.removeElements(head,6);

//     while(head){ cout<<head->val<<" "; head=head->next; }
// }

// 172 LeetCode #725 — Split List in Parts

// #include <iostream>
// #include <vector>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;
//     ListNode(int x):val(x),next(nullptr){}
// };

// class Solution{
// public:
//     vector<ListNode*> splitListToParts(ListNode* head,int k){
//         vector<ListNode*> res(k,nullptr);

//         int len=0;
//         ListNode* temp=head;
//         while(temp){ len++; temp=temp->next; }

//         int size=len/k, extra=len%k;

//         for(int i=0;i<k;i++){
//             res[i]=head;
//             int currSize=size+(i<extra);

//             for(int j=0;j<currSize-1;j++) head=head->next;

//             if(head){
//                 ListNode* next=head->next;
//                 head->next=nullptr;
//                 head=next;
//             }
//         }
//         return res;
//     }
// };

// int main(){
//     ListNode* head=new ListNode(1);
//     head->next=new ListNode(2);
//     head->next->next=new ListNode(3);

//     Solution s;
//     vector<ListNode*> res=s.splitListToParts(head,2);

//     for(auto h:res){
//         while(h){ cout<<h->val<<" "; h=h->next; }
//         cout<<"| ";
//     }
// }

// 173 HackerRank — Merge Sorted Lists

// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int x):data(x),next(nullptr){}
// };

// class Solution{
// public:
//     Node* mergeLists(Node* head1,Node* head2){
//         Node dummy(0),*tail=&dummy;

//         while(head1 && head2){
//             if(head1->data<head2->data){
//                 tail->next=head1;
//                 head1=head1->next;
//             } else{
//                 tail->next=head2;
//                 head2=head2->next;
//             }
//             tail=tail->next;
//         }
//         tail->next=head1?head1:head2;
//         return dummy.next;
//     }
// };

// int main(){
//     Node* a=new Node(1);
//     a->next=new Node(3);

//     Node* b=new Node(2);
//     b->next=new Node(4);

//     Solution s;
//     Node* res=s.mergeLists(a,b);

//     while(res){ cout<<res->data<<" "; res=res->next; }
// }



// 174 HackerRank — Remove duplicates

// #include <iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;
//     Node(int x):data(x),next(nullptr){}
// };

// class Solution{
// public:
//     Node* removeduplicates(Node* head){
//         Node* curr=head;

//         while(curr && curr->next){
//             if(curr->data==curr->next->data)
//                 curr->next=curr->next->next;
//             else curr=curr->next;
//         }
//         return head;
//     }
// };

// int main(){
//     Node* head=new Node(1);
//     head->next=new Node(1);
//     head->next->next=new Node(2);

//     Solution s;
//     head=s.removeduplicates(head);

//     while(head){ cout<<head->data<<" "; head=head->next; }
// }



// 175 HackerRank — Snake Pattern Matrix


// #include <iostream>
// using namespace std;

// class SnakeMatrix {
// public:
//     void print(int n, int m) {
//         int num = 1;
//         for(int i = 0; i < n; i++) {
//             if(i % 2 == 0) {
//                 for(int j = 0; j < m; j++)
//                     cout << num++ << " ";
//             } else {
//                 int temp = num + m - 1;
//                 for(int j = 0; j < m; j++)
//                     cout << temp-- << " ";
//                 num += m;
//             }
//             cout << endl;
            

//         }
//     }
// };

// int main() {
//     SnakeMatrix obj;
//     obj.print(4, 5);
// }


// 176. HackerRank — Concentric Star Pattern

// #include <iostream>
// using namespace std;

// class ConcentricStar {
// public:
//     void print(int n) {
//         int size = 2*n - 1;

//         for(int i = 0; i < size; i++) {
//             for(int j = 0; j < size; j++) {
//                 int layer = min(min(i, j), min(size-1-i, size-1-j));
//                 if(layer % 2 == 0) cout << "*";
//                 else cout << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     ConcentricStar obj;
//     obj.print(5);
// }

// 177. HackerRank — Number Spiral Pattern

// #include <iostream>
// using namespace std;

// class NumberSpiral {
// public:
//     void print(int n) {
//         int size = 2*n - 1;

//         for(int i = 0; i < size; i++) {
//             for(int j = 0; j < size; j++) {
//                 int val = n - min(min(i,j), min(size-1-i, size-1-j));
//                 cout << val << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     NumberSpiral obj;
//     obj.print(4);
// }


// 178. HackerRank — Character diamond Pattern

// #include <iostream>
// using namespace std;

// class Chardiamond {
// public:
//     void print(int n) {
        
//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < n-i-1; j++) cout << " ";
//             for(int j = 0; j <= i; j++) cout << char('A'+j);
//             for(int j = i-1; j >= 0; j--) cout << char('A'+j);
//             cout << endl;
//         }
//         for(int i = n-2; i >= 0; i--) {
//             for(int j = 0; j < n-i-1; j++) cout << " ";
//             for(int j = 0; j <= i; j++) cout << char('A'+j);
//             for(int j = i-1; j >= 0; j--) cout << char('A'+j);
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Chardiamond obj;
//     obj.print(5);
// }

// 178.WAP to implement Queue using Arrays in c++
// #include <iostream>
// using namespace std;

// class Queue {
// private:
//     int *arr;
//     int front, rear, size;

// public:
//     Queue(int s) {
//         size = s;
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }

//     void enqueue(int val) {
//         if (rear == size - 1) {
//             cout << "Queue Overflow\n";
//             return;
//         }
//         if (front == -1) front = 0;
//         arr[++rear] = val;
//     }

//     void dequeue() {
//         if (front == -1 || front > rear) {
//             cout << "Queue Underflow\n";
//             return;
//         }
//         cout << "Deleted: " << arr[front++] << endl;
//     }

//     void peek() {
//         if (front == -1 || front > rear) {
//             cout << "Queue is empty\n";
//             return;
//         }
//         cout << "Front element: " << arr[front] << endl;
//     }

//     void display() {
//         if (front == -1 || front > rear) {
//             cout << "Queue is empty\n";
//             return;
//         }
//         for (int i = front; i <= rear; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Queue q(5);

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);

//     q.display();

//     q.dequeue();
//     q.display();

//     q.peek();

//     return 0;
// }

// // 179.Wap for bankaccount system using operatorOverloading
// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     double balance;

// public:
//     BankAccount(double b = 0) {
//         balance = b;
//     }

//     // Deposit / Merge accounts
//     BankAccount operator + (const BankAccount &acc) {
//         return BankAccount(balance + acc.balance);
//     }

//     // Withdraw
//     BankAccount operator - (double amount) {
//         return BankAccount(balance - amount);
//     }

//     // Compare
//     bool operator > (const BankAccount &acc) {
//         return balance > acc.balance;
//     }

//     bool operator == (const BankAccount &acc) {
//         return balance == acc.balance;
//     }

//     // Interest (function call operator)
//     void operator()(double rate) {
//         balance += balance * rate / 100;
//     }

//     // Prefix ++ (bonus)
//     BankAccount operator++() {
//         balance += 500;
//         return *this;
//     }

//     // Output
//     friend ostream& operator<<(ostream &out, const BankAccount &acc) {
//         out << "Balance: ₹" << acc.balance;
//         return out;
//     }
// };

// int main() {
//     BankAccount a1(5000), a2(3000);

//     BankAccount a3 = a1 + a2;   // merge
//     a3 = a3 - 2000;             // withdraw

//     ++a1;                       // bonus

//     a1(10);                     // interest

//     if(a1 > a2)
//         cout << "a1 has more balance\n";

//     cout << a1 << endl;
//     cout << a3 << endl;

//     return 0;
// }

// 180.Wap for shopping cart system
// #include <iostream>
// #include <vector>
// using namespace std;

// class Cart {
// private:
//     vector<double> prices;

// public:
//     // Add item
//     Cart operator + (double price) {
//         Cart temp = *this;
//         temp.prices.push_back(price);
//         return temp;
//     }

//     // Remove last item
//     Cart operator - (int) {
//         Cart temp = *this;
//         if(!temp.prices.empty())
//             temp.prices.pop_back();
//         return temp;
//     }

//     // Access item
//     double operator[](int index) {
//         return prices[index];
//     }

//     // Apply discount
//     void operator()(double discount) {
//         for(double &p : prices)
//             p -= p * discount / 100;
//     }

//     // Total
//     double total() {
//         double sum = 0;
//         for(double p : prices)
//             sum += p;
//         return sum;
//     }

//     // Output
//     friend ostream& operator<<(ostream &out, Cart &c) {
//         out << "Cart Total: ₹" << c.total();
//         return out;
//     }
// };

// int main() {
//     Cart c;

//     c = c + 1000;
//     c = c + 500;
//     c = c + 200;

//     c(10); // 10% discount

//     cout << "Item[1]: " << c[1] << endl;

//     cout << c << endl;

//     return 0;
// }



// 181.Wap for student grading system using operator Overloading
// #include <iostream>
// #include <vector>
// using namespace std;

// class Student {
// private:
//     vector<int> marks;

// public:
//     // Add marks
//     Student operator + (int m) {
//         Student temp = *this;
//         temp.marks.push_back(m);
//         return temp;
//     }

//     // Access marks
//     int operator[](int index) {
//         return marks[index];
//     }

//     // Average
//     double average() {
//         int sum = 0;
//         for(int m : marks)
//             sum += m;
//         return marks.size() ? (double)sum / marks.size() : 0;
//     }

//     // Compare students
//     bool operator > (Student &s) {
//         return average() > s.average();
//     }

//     // Output
//     friend ostream& operator<<(ostream &out, Student &s) {
//         out << "Average Marks: " << s.average();
//         return out;
//     }
// };

// int main() {
//     Student s1, s2;

//     s1 = s1 + 80;
//     s1 = s1 + 90;

//     s2 = s2 + 70;
//     s2 = s2 + 60;

//     if(s1 > s2)
//         cout << "s1 is topper\n";

//     cout << s1 << endl;
//     cout << s2 << endl;

//     return 0;
// }

// 182.WAP for TimeDurationSystem
// #include <iostream>
// using namespace std;

// class Time {
// private:
//     int hours, minutes;

//     void normalize() {
//         hours += minutes / 60;
//         minutes %= 60;
//     }

// public:
//     Time(int h=0, int m=0) {
//         hours = h;
//         minutes = m;
//         normalize();
//     }

//     // Add time
//     Time operator + (const Time &t) {
//         return Time(hours + t.hours, minutes + t.minutes);
//     }

//     // Subtract time
//     Time operator - (const Time &t) {
//         int total1 = hours*60 + minutes;
//         int total2 = t.hours*60 + t.minutes;
//         int diff = total1 - total2;
//         return Time(diff/60, diff%60);
//     }

//     // Compare
//     bool operator > (const Time &t) {
//         return (hours*60 + minutes) > (t.hours*60 + t.minutes);
//     }

//     // Increment minute
//     Time operator++() {
//         minutes++;
//         normalize();
//         return *this;
//     }

//     // Output
//     friend ostream& operator<<(ostream &out, const Time &t) {
//         out << t.hours << "h " << t.minutes << "m";
//         return out;
//     }
// };

// int main() {
//     Time t1(2, 50), t2(1, 30);

//     Time t3 = t1 + t2;
//     Time t4 = t1 - t2;

//     ++t1;

//     if(t1 > t2)
//         cout << "t1 is greater\n";

//     cout << t3 << endl;
//     cout << t4 << endl;

//     return 0;
// }


// 183.Wap For Complex Number Calculator
// #include <iostream>
// using namespace std;

// class Complex {
// private:
//     double real, imag;

// public:
//     Complex(double r=0, double i=0) {
//         real = r;
//         imag = i;
//     }

//     // Addition
//     Complex operator + (const Complex &c) {
//         return Complex(real + c.real, imag + c.imag);
//     }

//     // Subtraction
//     Complex operator - (const Complex &c) {
//         return Complex(real - c.real, imag - c.imag);
//     }

//     // Multiplication
//     Complex operator * (const Complex &c) {
//         return Complex(real*c.real - imag*c.imag,
//                        real*c.imag + imag*c.real);
//     }

//     // Equality
//     bool operator == (const Complex &c) {
//         return real == c.real && imag == c.imag;
//     }

//     // Output
//     friend ostream& operator<<(ostream &out, const Complex &c) {
//         out << c.real << " + " << c.imag << "i";
//         return out;
//     }
// };

// int main() {
//     Complex c1(2,3), c2(1,4);

//     Complex c3 = c1 + c2;
//     Complex c4 = c1 * c2;

//     cout << c3 << endl;
//     cout << c4 << endl;

//     return 0;
// }