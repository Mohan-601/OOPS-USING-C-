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