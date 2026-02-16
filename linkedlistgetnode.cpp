 #include <iostream>
using namespace std;

struct node {
    char info;
    struct node *next;
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

void traverse() {
    node *temp = start;
    while (temp != NULL) {
        cout << temp->info << "->";
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
    traverse();
    return 0;
}
