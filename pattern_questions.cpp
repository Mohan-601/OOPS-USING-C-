// 🔷 1. Butterfly Pattern
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

// 2. Hollow Pyramid
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



// 🔷 3. Pascal’s Triangle
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

// 🔷 4. Diamond with Numbers
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


// 🔷 5 Hollow Square
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

// 🔷 6. Hollow Diamond
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

// 🔷 7. Zig-Zag Pattern
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


// 🔷 8. Palindrome Triangle
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

// 🔷 9. X Pattern
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




// 🔷 10. Sandglass Pattern
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