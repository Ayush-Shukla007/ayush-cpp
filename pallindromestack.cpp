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

char pop() {
    if (isempty()) {
        cout << "Stack underflow\n";
        exit(1);
    }
    int x = S.item[S.top];
    S.top--;
    return x;
}

char stacktop() {
    if (isempty()) {
        cout << "Stack is empty\n";
        exit(1);
    }
    return S.item[S.top];
}

int main() {
    initialize();
    char str[20];
    cout<<"enter the string";
    cin >> str;
    int i = 0;

    while (str[i] != '\0') {
        push(str[i]);
        i++;
    }

    int j = 0;
    bool isPal = true;

    while (!isempty()) {
        if (str[j] != pop()) {
            isPal = false;
            break;
        }
        j++;
    }

    if (isPal) {
        cout << "palindrome";
    } else {
        cout << "not palindrome";
    }

    return 0;
}
