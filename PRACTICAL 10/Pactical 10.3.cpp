
#include <iostream>
using namespace std;

int main() {
    int table[11];
    int n, id;

    for (int i = 0; i < 11; i++) {
        table[i] = -1;
    }

    cout << "Enter number of student IDs: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter student ID: ";
        cin >> id;

        int index = id % 11;
        int jump = 1 + (id % 10);
        int count = 0;

        while (count < 11 && table[index] != -1) {
            index = (index + jump) % 11;
            count++;
        }

        if (count == 11) {
            cout << "Hash table is full\n";
        } else {
            table[index] = id;
            cout << "Student ID placed at slot " << index << endl;
        }
    }

    cout << "\nFinal Hash Table:\n";

    for (int i = 0; i < 11; i++) {
        if (table[i] == -1) {
            cout << i << " : Empty\n";
        } else {
            cout << i << " : " << table[i] << endl;
        }
    }

    return 0;
}
