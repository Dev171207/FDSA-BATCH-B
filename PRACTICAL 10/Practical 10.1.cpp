
#include <iostream>
using namespace std;

int main() {
    int table[10];
    int n, vehicle;

    for (int i = 0; i < 10; i++) {
        table[i] = -1;
    }

    cout << "Enter number of vehicles: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter registration number: ";
        cin >> vehicle;

        int index = vehicle % 10;
        int count = 0;

        while (count < 10 && table[index] != -1) {
            index = (index + 1) % 10;
            count++;
        }

        if (count == 10) {
            cout << "Parking lot is full\n";
        } else {
            table[index] = vehicle;
            cout << "Vehicle placed at slot " << index << endl;
        }
    }

    cout << "\nFinal Parking Slots:\n";

    for (int i = 0; i < 10; i++) {
        if (table[i] == -1) {
            cout << i << " : Empty\n";
        } else {
            cout << i << " : " << table[i] << endl;
        }
    }

    return 0;
}
