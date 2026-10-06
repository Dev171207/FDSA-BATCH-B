#include <iostream>
using namespace std;

struct Node {
    string song;
    Node *prev, *next;
};

Node *head = NULL;

void addFront(string name) {
    Node *newNode = new Node;
    newNode->song = name;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

void addEnd(string name) {
    Node *newNode = new Node;
    newNode->song = name;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAfter(string oldSong, string newSong) {
    Node *temp = head;

    while (temp != NULL && temp->song != oldSong)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Song not found" << endl;
        return;
    }

    Node *newNode = new Node;
    newNode->song = newSong;

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

void removeFirst() {
    if (head == NULL)
        return;

    Node *temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    delete temp;
}

void display() {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->song << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    addFront("Song1");
    addEnd("Song2");
    addEnd("Song3");

    cout << "Playlist: ";
    display();

    insertAfter("Song2", "Song4");

    cout << "After inserting: ";
    display();

    removeFirst();

    cout << "After removing first: ";
    display();

    return 0;
}
