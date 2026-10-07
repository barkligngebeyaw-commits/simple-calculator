#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "መደመር (+), መቀነስ (-), ማባዛት (*), ወይም ማካፈል (/) ያስገቡ: ";
    cin >> op;

    cout << "ሁለት ቁጥሮችን ያስገቡ: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "ስህተት! ለዜሮ ማካፈል አይቻልም።" << endl;
            break;
        default:
            cout << "የተሳሳተ ምልክት ያስገቡ!" << endl;
            break;
    }

    return 0;
}
