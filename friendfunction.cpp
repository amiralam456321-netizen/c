#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name; 
    int age;
    float marks;
    static int studentcount;
   
   
 public:
 void setData(string n="unknow",int a=18,float m=0.0){
    name=n;
    age=a;
    marks=m;
    studentcount++;

 }
    void display()
    {
    cout<<"name: "<<name;
    cout<<"Age: "<<age;
    cout<<"Marks: "<<marks<<endl;
    }
    static int getstudentcount()
    {
        return studentcount;

    }
          friend void showtopper( const student &studnet1,const student&s2);
           int student::studentcount=0;
           void showtopper(const student&s1,const student&s2){
            if()
           }
}











