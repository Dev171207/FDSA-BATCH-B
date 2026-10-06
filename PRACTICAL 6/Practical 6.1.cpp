#include <iostream>
using namespace std;

int main() {

    int stack[5];
    int top = -1;


    if (top == 4) {
        cout << "Stack is full" << endl;
    }
    else {
        top++;
        stack[top] = 10;
        cout << "Pushed 10" << endl;
    }

    if (top == 4) {
        cout << "Stack is full" << endl;
    }
    else {
        top++;
        stack[top] = 20;
        cout << "Pushed 20" << endl;
    }


    if (top == -1)
        cout << "Stack is empty" << endl;
    else
        cout << "Top: " << stack[top] << endl;


    if (top == -1) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Removed: " << stack[top] << endl;
        top--;
    }


    if (top == -1)
        cout << "Stack is empty" << endl;
    else
        cout << "Top: " << stack[top] << endl;

    return 0;
}
