 #include <iostream>
using namespace std;

struct node {
    char info;
    node *next;
};

node *start = NULL;

node* getnode() {
    node *p;
    p=(node*)malloc(sizeof(node));  
    return p;
}


void insbeg(char x) {
    node *p = getnode();
    p->info = x;
    p->next = start;
    start = p;
}

void insend(char x) {
    node *p = getnode();
    p->info = x;
    p->next = NULL;

    if (start == NULL) {
        start = p;
    } else {
        node *temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = p;
    }
}

void traverse() {
    node *temp = start;
    while (temp != NULL) {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insbeg('a');
    insbeg('b');
    insbeg('c');
    insbeg('d');
    insbeg('e');

    cout << "List after inserting at beginning:\n";
    traverse();

    insend('z');
    insend('y');
    cout << "List after inserting at end:\n";
    traverse();

    return 0;
}
// at end of linked list