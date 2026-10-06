#include <iostream>
#include <stack>
using namespace std;

int priority(char op) {

    if (op == '+' || op == '-')
        return 1;

    if (op == '*' || op == '/')
        return 2;

    return 0;
}

int main() {

    string infix;

    cout << "Enter expression: ";
    cin >> infix;

    stack<char> s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {

        char ch = infix[i];


        if (ch >= '0' && ch <= '9') {
            postfix += ch;
        }


        else if (ch == '(') {
            s.push(ch);
        }


        else if (ch == ')') {

            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }

            if (!s.empty())
                s.pop();
        }


        else {

            while (!s.empty() &&
                   priority(s.top()) >= priority(ch)) {

                postfix += s.top();
                s.pop();
            }

            s.push(ch);
        }
    }


    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    cout << "Postfix: " << postfix << endl;

    return 0;
}
