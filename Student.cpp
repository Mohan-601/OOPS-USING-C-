
// Develop a module where input is given by user about student's
//  detail which include student's ID, name, marks of five subjects. 
//  Calculate and display total marks, percentage and grade of student.

#include <iostream>
#include <string.h>
using namespace std;
class Student{
public:
        int ID;
        string name;
        int marks[5];
        int total_marks = 0;
        float percentage;
        char grade;
     void input(){
        cout<<"enter the ID of Student: ";
        cin>>ID;
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the marks of the student: ";
        for(int i = 0;i<5;i++){
            cin>>marks[i];
            total_marks = total_marks + marks[i];
        }
     }
     void calculate(){
        percentage = (total_marks/500.0)*100.0;
        if(percentage<=100 && percentage>=90){
            grade = 'O';
        }
        else if(percentage<90 && percentage>=80)
        {grade = 'A';}
        else if(percentage<80 && percentage>=70)
        {grade = 'B';}
        else if(percentage<70 && percentage>=60)
        {grade = 'C';}
        else if(percentage<60 && percentage>=50)
        {grade = 'D';}
        else if(percentage<50 && percentage>=40)
        {grade = 'E';}
    
        else if(percentage<40 && percentage>=0)
        {grade = 'F';}
        else
        {cout<<"Invalid marks...";}
     }
     void display(){
        cout<<"The ID of the student is: "<<ID<<endl;
        cout<<"The name of the student is:"<<name<<endl;
        cout<<"The marks of the student is:";
        for(int i =0;i<5;i++){
            cout<<" "<<marks[i];
        }cout<<endl;
        cout<<"the percentage of the student:"<<percentage<<"%"<<endl;
        cout <<"The grade of the student is :"<<grade<<endl;
     }
};
int main(){
Student s1;//default constructor

s1.input();
s1.calculate();
s1.display();
return 0;
}
