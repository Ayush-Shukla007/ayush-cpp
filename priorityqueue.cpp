#include <iostream>
using namespace std;
int N;  
void pqInsertion(int A[], int x) {
    int i = 0;
 
    while (i < N && x >= A[i]) {
        i++;
    }
    for (int j = N - 1; j >= i; j--) {
        A[j + 1] = A[j];
    }

    A[i] = x;
    N++;
}
void pqDeletion(int A[]) {
    if (N == 0) {
        cout << "Priority Queue is empty\n";
        return;
    }
    cout << "Deleted element: " << A[0] << endl;
    for (int i = 0; i < N - 1; i++) {
        A[i] = A[i + 1];
    }
    N--;
}

void display(int A[]) {
    cout << "Priority Queue: ";
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[10];
    N = 5;
    A[0] = 4;
    A[1] = 6;
    A[2] = 8;
    A[3] = 10;
    A[4] = 12;
    display(A);
    pqInsertion(A, 5);
    pqInsertion(A,6);
    display(A);
    pqDeletion(A);
    display(A);
    pqDeletion(A);
    display(A);
    return 0;
}

 