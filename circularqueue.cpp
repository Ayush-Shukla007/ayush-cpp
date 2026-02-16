 #include <iostream>
using namespace std;

struct CircularQueue {
    int front;
    int rear;
    int size;
    int arr[5];
};


void init(CircularQueue &Q) {
    Q.front = -1;
    Q.rear = -1;
    Q.size = 5;
}


bool isEmpty(CircularQueue &Q) {
    return (Q.front == -1);
}


bool isFull(CircularQueue &Q) {
    return ((Q.rear + 1) % Q.size == Q.front);
}

// Enqueue
void enqueue(CircularQueue &Q, int val) {
    if (isFull(Q)) {
        cout << "Queue Overflow!\n";
        return;
    }

    if (Q.front == -1)
        Q.front = 0;

    Q.rear = (Q.rear + 1) % Q.size;
    Q.arr[Q.rear] = val;
    cout << val << " inserted\n";
}

// Dequeue
void dequeue(CircularQueue &Q) {
    if (isEmpty(Q)) {
        cout << "Queue Underflow!\n";
        return;
    }

    int val = Q.arr[Q.front];
    if (Q.front == Q.rear)
        Q.front = Q.rear = -1;
    else
        Q.front = (Q.front + 1) % Q.size;

    cout << val << " removed\n";
}

// Display
void display(CircularQueue &Q) {
    if (isEmpty(Q)) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue elements: ";
    int i = Q.front;
    while (true) {
        cout << Q.arr[i] << " ";
        if (i == Q.rear)
            break;
        i = (i + 1) % Q.size;
    }
    cout << endl;
}


int main() {
    CircularQueue Q;
    init(Q);

    enqueue(Q, 10);
    enqueue(Q, 20);
    enqueue(Q, 30);
    display(Q);

    dequeue(Q);
    display(Q);

    enqueue(Q, 40);
    enqueue(Q, 50);
    enqueue(Q, 60);
    display(Q);

    return 0;
}
