#include <iostream>
using namespace std;

struct Node {
    string patient;
    Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void arrive(string name) {

    Node *newNode = new Node;

    newNode->patient = name;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }

    cout << "Arrived: " << name << endl;
}

void attend() {

    if (front == NULL) {
        cout << "No patients waiting" << endl;
        return;
    }

    Node *temp = front;

    cout << "Attended: " << front->patient << endl;

    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void displayFront() {

    if (front == NULL)
        cout << "No patients waiting" << endl;
    else
        cout << "Front patient: " << front->patient << endl;
}

int main() {

    arrive("Rahul");
    arrive("Amit");
    arrive("Dev");

    displayFront();

    attend();
    displayFront();

    attend();
    displayFront();

    attend();
    displayFront();

    attend();

    return 0;
}
