#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    
    char choose;
    int numb1, numb2;
    float numb1_divide, numb2_divide;
    
    cout << "\n******************\n";
    cout << "****CALCULATOR****\n";
    cout << "******************\n\n\n";
    
    cout << "Choose one of the transactions\n\n";
    cout << "+\n"; cout << "-\n"; cout << "*\n"; cout << "/\n\n";
    cout << "Your choose( + , - , * , / ): ";
    cin >> choose;
    
    switch (choose) {
        case '+':
            cout << "Enter the first number: ";
            cin >> numb1;
            cout << "Enter the second number: ";
            cin >> numb2;
            cout << numb1 << " + " << numb2 << " = " << numb1 + numb2 << endl;
            break;
        case '-':
            cout << "Enter the first number: ";
            cin >> numb1;
            cout << "Enter the second number: ";
            cin >> numb2;
            cout << numb1 << " - " << numb2 << " = " << numb1 - numb2 << endl;
            break;
        case '*':
            cout << "Enter the first number: ";
            cin >> numb1;
            cout << "Enter the second number: ";
            cin >> numb2;
            cout << numb1 << " * " << numb2 << " = " << numb1 * numb2 << endl;
            break;
        case '/':
            cout << "Enter the first number: ";
            cin >> numb1_divide;
            cout << "Enter the second number: ";
            cin >> numb2_divide;
            cout << numb1_divide << " / " << numb2_divide << " = " << numb1_divide / numb2_divide << endl;
            break;
        default:
            cout << "ERROR! Invalid transaction.\n";
            break;
    }
    cout << "\n**********************\n\n";
    
    
    return 0;
}
