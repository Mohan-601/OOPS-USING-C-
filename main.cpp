//1.wap for two numbers

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



// 14.wap to print pyramiddle of star

// #include <iostream>
// using namespace std;

// class Pyramiddle {
//     int n;
// public:
//     Pyramiddle(int rows) {
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

//     Pyramiddle obj(rows);
//     obj.display();

//     return 0;
// }


 
// 15.wap to print star upside down pyramiddle

// #include <iostream>
// using namespace std;

// class InvertedPyramiddle {
//     int n;
// public:
//     InvertedPyramiddle(int rows) {
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

//     InvertedPyramiddle obj(rows);
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

   
//     Student(const Student &s) {
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
//         cout << "------------------\n";
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

// 25.wap to print sum of digits of a numeber


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
//         for (int i = 0; i < n; i++) {
//            
//             for (int space = 0; space < n - i - 1; space++) {
//                 cout << " ";
//             }
//             int number = 1;
//             for (int j = 0; j <= i; j++) {
//                 cout << number << " ";
//                 number = number * (i - j) / (j + 1);
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
// 49.wap to print hollow pyramiddle
// #include <iostream>
// using namespace std;

// class HollowPyramiddle {
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
//     HollowPyramiddle obj;
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
//          void display(node* head){
//           node* p = head;
//           while(p)     
//           {             
//             cout<<p->data<<"->";
//             p = p->next;  
//           }
//          }
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

// class Node {
// public:
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = NULL;
//     }

//     void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;

//         if(head == NULL) {
//             head = newNode;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL)
//             temp = temp->next;

//         temp->next = newNode;
//     }

//     void insertBefore(int target, int value) {

//         if(head == NULL) {
//             cout<<"List is empty\n";
//             return;
//         }

//         if(head->data == target) {
//             Node* newNode = new Node();
//             newNode->data = value;
//             newNode->next = head;
//             head = newNode;
//             return;
//         }

//         Node* temp = head;

//         while(temp->next != NULL && temp->next->data != target)
//             temp = temp->next;

//         if(temp->next == NULL) {
//             cout<<"Target not found\n";
//             return;
//         }

//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }

//     void display() {
//         Node* temp = head;
//         while(temp != NULL) {
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }
//         cout<<"NULL\n";
//     }
// };

// int main() {

//     LinkedList list;

//     list.insertEnd(10);
//     list.insertEnd(20);
//     list.insertEnd(30);
//     list.insertEnd(40);

//     cout<<"Original List:\n";
//     list.display();

//     list.insertBefore(30,25);
//  
//     list.display();
// return 0;
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

// class Node {
// public:
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = NULL;
//     }

//     void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;

//         if(head == NULL) {
//             head = newNode;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL)
//             temp = temp->next;

//         temp->next = newNode;
//     }

//     void deleteBefore(int target) {

//         if(head == NULL || head->next == NULL) {
//             cout<<"Not enough nodes\n";
//             return;
//         }

//         if(head->next->data == target) {
//             Node* temp = head;
//             head = head->next;
//             delete temp;
//             return;
//         }

//         Node* temp = head;

//         while(temp->next->next != NULL && temp->next->next->data != target)
//             temp = temp->next;

//         if(temp->next->next == NULL) {
//             cout<<"Target not found\n";
//             return;
//         }

//         Node* del = temp->next;
//         temp->next = del->next;
//         delete del;
//     }

//     void display() {
//         Node* temp = head;
//         while(temp != NULL) {
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }
//         cout<<"NULL\n";
//     }
// };

// int main() {

//     LinkedList list;

//     list.insertEnd(10);
//     list.insertEnd(20);
//     list.insertEnd(30);
//     list.insertEnd(40);

//     cout<<"Original List:\n";
//     list.display();

//     list.deleteBefore(30);

//     cout<<"After Deleting Before 30:\n";
//     list.display();
// return 0
// }



// 63.wap to search for an element in a linked list
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = NULL;
//     }

//     void insertEnd(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = NULL;

//         if(head == NULL) {
//             head = newNode;
//             return;
//         }

//         Node* temp = head;

//         while(temp->next != NULL)
//             temp = temp->next;

//         temp->next = newNode;
//     }

//     void search(int key) {

//         Node* temp = head;
//         int position = 1;

//         while(temp != NULL) {

//             if(temp->data == key) {
//                 cout<<"Element found at position "<<position<<endl;
//                 return;
//             }

//             temp = temp->next;
//             position++;
//         }

//         cout<<"Element not found"<<endl;
//     }

//     void display() {
//         Node* temp = head;

//         while(temp != NULL) {
//             cout<<temp->data<<" -> ";
//             temp = temp->next;
//         }

//         cout<<"NULL"<<endl;
//     }
// };

// int main() {

//     LinkedList list;

//     list.insertEnd(10);
//     list.insertEnd(20);
//     list.insertEnd(30);
//     list.insertEnd(40);

//     cout<<"Linked List:"<<endl;
//     list.display();

//     int key;
//     cout<<"Enter element to search: ";
//     cin>>key;

//     list.search(key);

//     return 0;
// }

// 64.wap to reverse a linked list
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class LinkedList {
// private:
//     Node* head;

// public:
//     LinkedList() {
//         head = NULL;
//     }

//     void insert(int val) {
//         Node* newNode = new Node(val);
//         if (!head) {
//             head = newNode;
//             return;
//         }
//         Node* temp = head;
//         while (temp->next)
//             temp = temp->next;
//         temp->next = newNode;
//     }

//     void reverse() {
//         Node* prev = NULL;
//         Node* curr = head;
//         Node* next = NULL;

//         while (curr != NULL) {
//             next = curr->next;   // store next node
//             curr->next = prev;   // reverse link
//             prev = curr;         // move prev forward
//             curr = next;         // move curr forward
//         }

//         head = prev; // update head
//     }

//     void display() {
//         Node* temp = head;
//         while (temp) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL\n";
//     }
// };

// int main() {
//     LinkedList l;
//     l.insert(10);
//     l.insert(20);
//     l.insert(30);
//     l.insert(40);

//     cout << "Original List:\n";
//     l.display();

//     l.reverse();

//     cout << "Reversed List:\n";
//     l.display();

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
//     // Constructor
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

// 72.Wap to  calculate a power of a number using recuursion
// #include <iostream>
// class Power {
// public:
//     int power(int base, int exp) {
//         if (exp == 0)
//             return 1;
//         return base * power(base, exp - 1);
//     }
// };

// int main() {
//     Power obj;
//     std::cout << obj.power(2, 5);
//     return 0;
// }


// 73.WAP to impliment a binary search using recursion
// #include <iostream>
// class BinarySearch {
// public:
//     int search(int arr[], int left, int right, int key) {
//         if (left > right)
//             return -1;

//         int middle = (left + right) / 2;

//         if (arr[middle] == key)
//             return middle;
//         else if (arr[middle] > key)
//             return search(arr, left, middle - 1, key);
//         else
//             return search(arr, middle + 1, right, key);
//     }
// };

// int main() {
//     BinarySearch obj;
//     int arr[] = {1, 3, 5, 7, 9};
//     std::cout << obj.search(arr, 0, 4, 7);
//     return 0;
// }


// 74.WAP to solve the tower of hanaoi using recursion

// #include <iostream>
// class Hanoi {
// public:
//     void solve(int n, char from, char to, char aux) {
//         if (n == 1) {
//             std::cout << "Move disk 1 from " << from << " to " << to << std::endl;
//             return;
//         }
//         solve(n - 1, from, aux, to);
//         std::cout << "Move disk " << n << " from " << from << " to " << to << std::endl;
//         solve(n - 1, aux, to, from);
//     }
// };

// int main() {
//     Hanoi obj;
//     obj.solve(3, 'A', 'C', 'B');
// return 0;
// }


// 75. Develop a Employee Salary System using inheritance

// #include <iostream>
// class Employee {
// protected:
//     std::string name;
//     int id;

// public:
//     void getData() {
//         std::cout << "Enter Employee Name: ";
//         std::cin >> name;
//         std::cout << "Enter Employee ID: ";
//         std::cin >> id;
//     }
// };

// class Salary : public Employee {
// private:
//     float basic, hra, da, total;

// public:
//     void calculate() {
//         std::cout << "Enter Basic Salary: ";
//         std::cin >> basic;

//         hra = 0.2 * basic;
//         da  = 0.5 * basic;
//         total = basic + hra + da;
//     }

//     void display() {
//         std::cout << "\nEmployee Details\n";
//         std::cout << "Name: " << name << std::endl;
//         std::cout << "ID: " << id << std::endl;
//         std::cout << "Total Salary: " << total << std::endl;
//     }
// };

// int main() {
//     Salary s;
//     s.getData();
//     s.calculate();
//     s.display();
//     return 0;
// }



// 76. Develop a Student Result System using inheritance

// #include <iostream>
// class Student {
// protected:
//     int roll;

// public:
//     void getRoll() {
//         std::cout << "Enter Roll Number: ";
//         std::cin >> roll;
//     }
// };

// class Marks : public Student {
// protected:
//     int m1, m2;

// public:
//     void getMarks() {
//         std::cout << "Enter Marks (2 subjects): ";
//         std::cin >> m1 >> m2;
//     }
// };

// class Result : public Marks {
// private:
//     int total;

// public:
//     void display() {
//         total = m1 + m2;
//         std::cout << "\nRoll No: " << roll << std::endl;
//         std::cout << "Total Marks: " << total << std::endl;
//     }
// };

// int main() {
//     Result r;
//     r.getRoll();
//     r.getMarks();
//     r.display();
//     return 0;
// }



// 77. Bank System (Hierarchical Inheritance)
// #include <iostream>

// class Bank {
// protected:
//     float balance;

// public:
//     void setBalance(float b) {
//         balance = b;
//     }
// };

// class Savings : public Bank {
// public:
//     void interest() {
//         std::cout << "Savings Interest: " << balance * 0.05 << std::endl;
//     }
// };

// class Current : public Bank {
// public:
//     void overdraft() {
//         std::cout << "Current Account Balance: " << balance << std::endl;
//     }
// };

// int main() {
//     Savings s;
//     Current c;

//     s.setBalance(10000);
//     s.interest();

//     c.setBalance(20000);
//     c.overdraft();

//     return 0;
// }



// 78. Develop Vehicle System using inheritance
// #include <iostream>
// class Engine {
// public:
//     void engineType() {
//         std::cout << "Petrol Engine\n";
//     }
// };

// class Wheels {
// public:
//     void wheelCount() {
//         std::cout << "4 Wheels\n";
//     }
// };

// class Car : public Engine, public Wheels {
// public:
//     void display() {
//         std::cout << "Car Details:\n";
//         engineType();
//         wheelCount();
//     }
// };

// int main() {
//     Car c;
//     c.display();
//     return 0;
// }



// 79.Develop an IDE for following:  
// first parent class implements basic pop and push operations 
// User actions are stored in stack
// Undo stack store last operations
// Redo stack store reversed operations
// logger records stack operations file
// Editor stack manager manages everything



// #include <iostream>
// using namespace std;

// // ----------- Base Stack -----------
// class StackBase {
// protected:
//     static const int MAX = 10;
//     const char* arr[MAX];
//     int topIndex;

// public:
//     StackBase() {
//         topIndex = -1;
//     }

//     void push(const char* action) {
//         if (topIndex == MAX - 1) {
//             cout << "Overflow\n";
//             return;
//         }
//         arr[++topIndex] = action;
//     }

//     const char* pop() {
//         if (topIndex == -1) {
//             return NULL;
//         }
//         return arr[topIndex--];
//     }

//     bool isEmpty() {
//         return topIndex == -1;
//     }

//     const char* top() {
//         if (topIndex == -1)
//             return NULL;
//         return arr[topIndex];
//     }
// };

// // ----------- Undo / Redo -----------
// class UndoStack : public StackBase {};
// class RedoStack : public StackBase {};

// // ----------- Manager -----------
// class EditorStackManager {
//     UndoStack undoStack;
//     RedoStack redoStack;

// public:
//     void performAction(const char* action) {
//         undoStack.push(action);

//         // clear redo stack
//         while (!redoStack.isEmpty()) {
//             redoStack.pop();
//         }

//         cout << "Performed: " << action << endl;
//     }

//     void undo() {
//         if (undoStack.isEmpty()) {
//             cout << "Nothing to undo\n";
//             return;
//         }

//         const char* action = undoStack.pop();
//         redoStack.push(action);

//         cout << "Undo: " << action << endl;
//     }

//     void redo() {
//         if (redoStack.isEmpty()) {
//             cout << "Nothing to redo\n";
//             return;
//         }

//         const char* action = redoStack.pop();
//         undoStack.push(action);

//         cout << "Redo: " << action << endl;
//     }

//     void showTop() {
//         const char* t = undoStack.top();
//         if (t != NULL)
//             cout << "Top: " << t << endl;
//         else
//             cout << "Empty\n";
//     }
// };

// int main() {
//     EditorStackManager e;

//     e.performAction("A");
//     e.performAction("B");
//     e.performAction("C");

//     e.showTop();

//     e.undo();
//     e.undo();

//     e.redo();

//     e.showTop();

//     return 0;
// }



// 80.wap to demonstrate Compile-time Polymorphism using Function Overloading 


// #include <iostream>
// using namespace std;

// class Print {
// public:
//     void show(int a) {
//         cout << "Integer: " << a << endl;
//     }

//     void show(double b) {
//         cout << "Double: " << b << endl;
//     }

//     void show(string c) {
//         cout << "String: " << c << endl;
//     }
// };

// int main() {
//     Print obj;
//     obj.show(10);
//     obj.show(5.5);
//     obj.show("Hello");

//     return 0;
// }
// 81.wap to demonstrate Compile-time Polymorphism using operator Overloading 

// #include <iostream>
// using namespace std;

// class Complex {
// public:
//     int real, imag;

//     Complex(int r, int i) {
//         real = r;
//         imag = i;
//     }

//     Complex operator + (Complex obj) {
//         return Complex(real + obj.real, imag + obj.imag);
//     }

//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }
// };

// int main() {
//     Complex c1(2, 3), c2(4, 5);
//     Complex c3 = c1 + c2;

//     c3.display();

//     return 0;
// }
// // 82.wap to demonstrate Runtime Polymorphism  using Function overriding  

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void display() {
//         cout << "Base display" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() {
//         cout << "Derived display" << endl;
//     }
// };

// int main() {
//     Base* b;
//     Derived d;

//     b = &d;
//     b->display();   // Calls Derived version

//     return 0;
// }

// 83.wap to demonstrate Runtime Polymorphism  using  different classes
// #include <iostream>
// using namespace std;

// class Employee {
// public:
//     virtual void salary() {
//         cout << "Employee salary" << endl;
//     }
// };

// class Manager : public Employee {
// public:
//     void salary() {
//         cout << "Manager salary: 50000" << endl;
//     }
// };

// class Developer : public Employee {
// public:
//     void salary() {
//         cout << "Developer salary: 30000" << endl;
//     }
// };

// int main() {
//     Employee* e;

//     Manager m;
//     Developer d;

//     e = &m;
//     e->salary();

//     e = &d;
//     e->salary();

//     return 0;
// }



// 84.WAP to demonstate Abstract Class
// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     virtual void area() = 0;  // pure virtual function
// };

// class Circle : public Shape {
// public:
//     void area() {
//         cout << "Area of Circle" << endl;
//     }
// };

// class Square : public Shape {
// public:
//     void area() {
//         cout << "Area of Square" << endl;
//     }
// };

// int main() {
//     Shape* s;

//     Circle c;
//     Square sq;

//     s = &c;
//     s->area();

//     s = &sq;
//     s->area();

//     return 0;
// }

// 85.wap to demonstrate Virtual Function with Base Class Pointer Array

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() {
//         cout << "Animal makes sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() {
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {
//     Animal* a[2];
//     Dog d;
//     Cat c;

//     a[0] = &d;
//     a[1] = &c;

//     for(int i = 0; i < 2; i++) {
//         a[i]->sound();
//     }

//     return 0;
// }