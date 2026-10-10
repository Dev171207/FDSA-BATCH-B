
#include <iostream>
using namespace std;

struct Node {
    int code;
    Node* next;
};

int main() {
    Node* shelf[10];

    for (int i = 0; i < 10; i++) {
        shelf[i] = NULL;
    }

    int n, code;

    cout << "Enter number of books: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter book code: ";
        cin >> code;

        int index = code % 10;

        Node* newNode = new Node;
        newNode->code = code;
        newNode->next = NULL;

        if (shelf[index] == NULL) {
            shelf[index] = newNode;
        } else {
            Node* temp = shelf[index];

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        cout << "Book placed on shelf " << index << endl;
    }

    cout << "\nFinal Shelf Contents:\n";

    for (int i = 0; i < 10; i++) {
        cout << i << " : ";

        Node* temp = shelf[i];

        if (temp == NULL) {
            cout << "Empty";
        }

        while (temp != NULL) {
            cout << temp->code << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    return 0;
}
