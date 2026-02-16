//  #include <iostream>
// using namespace std;

// struct Stack {
//     int item[100];
//     int top;
// };

// Stack S;

// void initialize() {
//     S.top = -1;
// }

// bool isempty() {
//     return (S.top == -1);
// }

// bool isfull() {
//     return (S.top == 99);
// }

// char push(char x) {
//     if (isfull()) {
//         cout << "Stack overflow\n";
//         exit(1);
//     }
//     S.top++;
//     S.item[S.top] = x;
// }

// char pop() {
//     if (isempty()) {
//         cout << "Stack underflow\n";
//         exit(1);
//     }
//     char x = S.item[S.top];
//     S.top--;
//     return x;
// }
// int main(){
// initialize();
// char str[100];
// cout<<"enter the string";
// cin>>str;

//  int i=0;
//   while(str[i]!='\0'){
//     push(str[i]);
//     i++;
//   }
//   while(!isempty()){
//     char x=pop();
     
//     cout<<x;
//   }
// }


#include<iostream>
using namespace std;

struct stack{
    int item[10];
    int top;
};

void initialize();
 top=-1;
