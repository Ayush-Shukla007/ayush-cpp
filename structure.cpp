//  #include<iostream>
//  using namespace std;

//  struct complex{
//      int real;
//      int imag;
//  };
//   int main()
//   {
//     complex c1,c2,c3;
// cout<<"enter the real and imag of 1st";
//     cin>>c1.real>>c1.imag;
// cout<<"enter the real and imag of 1st";
//     cin>>c2.real>>c2.imag;
//     c3.real=c1.real+c2.real;
//     c3.imag=c1.imag+c2.imag;
//     cout<<c3.real<<"+i"<<c3.imag<<"\n";// add of complex number
//   c3.real=c1.real*c2.real; 
//       c3.imag=c1.imag*c2.imag;
//    cout<<c3.real<<"+i"<<c3.imag;// multi of complex number
//   }
// #include<iostream>
// using namespace std;
// struct Time{
//     int hours;
//     int minutes;
//     int seconds;

// };
// int main(){
//     Time t1,t2,t3;
//     cout<<"Enter hours, minutes and seconds for time 1: ";
//     cin>>t1.hours>>t1.minutes>>t1.seconds;
//     cout<<"Enter hours, minutes and seconds for time 2: ";
//     cin>>t2.hours>>t2.minutes>>t2.seconds;
//     t3.hours=t1.hours+t2.hours;
//     t3.minutes=t1.minutes+t2.minutes;
//     t3.seconds=t1.seconds+t2.seconds;
//     if(t3.seconds>=60){
//         t3.seconds-=60;
//         t3.minutes++;
//     }
//     if(t3.minutes>=60){
//         t3.minutes-=60;
//         t3.hours++;
//     }
//     cout<<"Total time is "<<t3.hours<<" hours, "<<t3.minutes<<" minutes and "<<t3.seconds<<" seconds."<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

struct Student {
    char name[50];  // or string name;
    int rollNo;
    float marks;
};

int main() {
    Student s = {"Ayush", 101, 87.5};  // example initialization

    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}



