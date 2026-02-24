//1.wap for sum of two numbers

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


 
// 16.wap to print star diamond

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


 
// 17.wap to print reverse a string


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



 
// 18.wap to print check for pallindrome


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

// int main() {
//     int number;
//     cout << "Enter number: ";
//     cin >> number;

//     Palindrome obj(number);
//     obj.check();

//     return 0;
// }
