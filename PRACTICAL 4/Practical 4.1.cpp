#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

void front(int x) {
    Node *p = new Node;
    p->data = x;
    p->next = head;
    head = p;
}

void end(int x) {
    Node *p = new Node;
    p->data = x;
    p->next = NULL;

    if (head == NULL) {
        head = p;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = p;
}

void position(int x, int pos) {
    if (pos == 1) {
        front(x);
        return;
    }

    Node *temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Invalid position\n";
        return;
    }

    Node *p = new Node;
    p->data = x;
    p->next = temp->next;
    temp->next = p;
}

void display() {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    front(10);
    cout<<"Insert at front"<<endl;
    display();

    end(20);
    cout<<"Insert at end"<<endl;
    display();

    end(30);
    cout<<"Insert at end"<<endl;
    display();

    position(15, 2);
    cout<<"Insert at position"<<endl;
    display();

    return 0;
}
