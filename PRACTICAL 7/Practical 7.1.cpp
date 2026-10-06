#include <iostream>
using namespace std;

int main() {

    int queue[5];
    int front = 0;
    int rear = -1;
    int count = 0;

    if (count == 5) {
        cout << "Queue is full" << endl;
    }
    else {
        rear++;
        queue[rear] = 10;
        count++;
        cout << "Joined: 10" << endl;
    }

    if (count == 5) {
        cout << "Queue is full" << endl;
    }
    else {
        rear++;
        queue[rear] = 20;
        count++;
        cout << "Joined: 20" << endl;
    }

    if (count == 0) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Front: " << queue[front] << endl;
    }

    if (count == 0) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Served: " << queue[front] << endl;
        front++;
        count--;
    }

    if (count == 0) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Front: " << queue[front] << endl;
    }

    return 0;
}
