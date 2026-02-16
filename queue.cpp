 #include <iostream>
#include <stdlib.h>
using namespace std;

struct Queue {
    int front;
    int rear;
    char arr[10];
} Q;

void initialise() {
    Q.front = 0;
    Q.rear = -1;
}

bool isempty() {
    if (Q.rear - Q.front + 1 == 0)
        return true;
    else
        return false;
}

void enqueue(char x) {
    if (Q.rear == 9) {
        cout << "Queue Overflow\n";
    } else {
        Q.rear++;
        Q.arr[Q.rear] = x;
        cout << x << " enqueued.\n";
    }
}

char dequeue() {
    if (isempty()) {
        cout << "Queue Underflow\n";
        return '\0'; 
    } else {
        char x = Q.arr[Q.front];
        Q.front++;
        return x;
    }
}

void display() {
    if (isempty()) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue elements: ";
        for (int i = Q.front; i <= Q.rear; i++) {
            cout << Q.arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    initialise();

    enqueue('A');
    enqueue('B');
    enqueue('C');
    enqueue('D');
    enqueue('E');
    enqueue('F');

    display();

    cout << "Dequeued: " << dequeue() << endl;
    cout << "Dequeued: " << dequeue() << endl;

    display();

    return 0;
}


 