#include <iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
};

Node* front = NULL;

void enqueue(int d, int p) {
    Node* temp = new Node();
    temp->data = d;
    temp->priority = p;

    
    if (front == NULL || p < front->priority) {
        temp->next = front;
        front = temp;
    } else {
        Node* start = front;
        
        while (start->next != NULL && start->next->priority <= p) {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }
    Node* temp = front;
    front = front->next;
    delete temp;
}

void display() {
    Node* temp = front;
    cout << "Priority Queue: ";
    while (temp != NULL) {
        cout << "(" << temp->data << "," << temp->priority << ") ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(4, 3);
    enqueue(5, 1);
    enqueue(6, 2);
    enqueue(7, 0);

    display();

    dequeue();
    display();

    return 0;
}
