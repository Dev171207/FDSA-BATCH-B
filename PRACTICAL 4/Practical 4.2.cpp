#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

void add(int x) {
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

void del(int x) {
    if (head == NULL)
        return;

    if (head->data == x) {
        head = head->next;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL && temp->next->data != x)
        temp = temp->next;

    if (temp->next != NULL)
        temp->next = temp->next->next;
}

void display() {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void reverse(Node *temp) {
    if (temp == NULL)
        return;

    reverse(temp->next);
    cout << temp->data << " ";
}

int main() {
    add(10);
    add(20);
    add(30);
    add(40);

    cout << "Forward: ";
    display();

    del(30);

    cout << "After deletion: ";
    display();

    cout << "Reverse: ";
    reverse(head);

    return 0;
}
