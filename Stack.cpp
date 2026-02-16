//  #include<iostream>
// using namespace std;
// struct Stack{
//     int top;
//     int capacity;
//     int *arr;
// };
// Stack* createStack(int size){
//     Stack *stack=new Stack();
//     stack->capacity=size;
//     stack->top=-1;
//     stack->arr=new int[stack->capacity];
//     return stack;
// }
// int isFull(Stack *stack){
//     return stack->top==stack->capacity-1;
// }
// int isEmpty(Stack *stack){
//     return stack->top==-1;
// }
// void push(Stack *stack,int data){
//     if(isFull(stack)){
//         cout<<"Stack Overflow"<<endl;
//         return;
//     }
//     stack->arr[++stack->top]=data;
//     cout<<data<<" pushed to stack"<<endl;
// }
// int pop(Stack *stack){
//     if(isEmpty(stack)){
//         cout<<"Stack Underflow"<<endl;
//         return -1;
//     }
//     return stack->arr[stack->top--];
// }
// int peek(Stack *stack){
//     if(isEmpty(stack)){
//         cout<<"Stack is empty"<<endl;
//         return -1;
//     }
//     return stack->arr[stack->top];
// }
// int main(){ 
//     Stack *stack=createStack(5);
//     push(stack,10);
//     push(stack,20);
//     push(stack,30);
//     cout<<pop(stack)<<" popped from stack"<<endl;
//     cout<<"Top  element is "<<peek(stack)<<endl;
//     return 0;
// }
 #include <iostream>
using namespace std;

struct Stack {
    int item[100];
    int top;
};

Stack S;

void initialize() {
    S.top = -1;
}

bool isempty() {
    return (S.top == -1);
}

bool isfull() {
    return (S.top == 99);
}

void push(int x) {
    if (isfull()) {
        cout << "Stack overflow\n";
        exit(1);
    }
    S.top++;
    S.item[S.top] = x;
}

int pop() {
    if (isempty()) {
        cout << "Stack underflow\n";
        exit(1);
    }
    int x = S.item[S.top];
    S.top--;
    return x;
}

int main() {
    initialize();
    char str[20];
    cin>>str;
    int i=0;

    while(str[i]!='\0') {
     push(str[i]);
     i++;
    }
    while(isempty())

     if(str[i]==S.item()){
     pop();
     }
     else{
        break;
        i++;
     }
     if(isempty){
        cout<<"palindrome";

     }
     else{
        cout<<"not palindrome";
     }


    return 0;
}
     


