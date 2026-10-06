#include <iostream>
using namespace std;

struct Node {
    int student;
    Node *next;
};

Node *head = NULL;

void addStudent(int value) {
    Node *newNode = new Node;
    newNode->student = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node *temp = head;

    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

void deleteStudent(int value) {
    if (head == NULL)
        return;

    Node *temp = head;
    Node *prev = NULL;

    do {
        if (temp->student == value)
            break;

        prev = temp;
        temp = temp->next;

    } while (temp != head);

    if (temp->student != value) {
        cout << "Student not found" << endl;
        return;
    }


    if (temp == head && head->next == head) {
        head = NULL;
        delete temp;
        return;
    }


    if (temp == head) {
        Node *last = head;

        while (last->next != head)
            last = last->next;

        head = head->next;
        last->next = head;
        delete temp;
        return;
    }


    prev->next = temp->next;
    delete temp;
}

void display() {
    if (head == NULL) {
        cout << "Circle is empty" << endl;
        return;
    }

    Node *temp = head;

    do {
        cout << temp->student << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {

    addStudent(1);
    addStudent(2);
    addStudent(3);
    addStudent(4);

    cout << "Students: ";
    display();

    deleteStudent(2);

    cout << "After deleting 2: ";
    display();

    deleteStudent(1);

    cout << "After deleting 1: ";
    display();

    return 0;
}
