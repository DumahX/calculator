#include <iostream>
#include <string>

using namespace std;

int addition( int first_num, int second_num ) {

    cout << first_num << " + " << second_num << " = " << first_num + second_num << "\n";

    return 0;

}

int subtraction( int first_num, int second_num ) {

    cout << first_num << " - " << second_num << " = " << first_num - second_num << "\n";

    return 0;

}

int multiplication( int first_num, int second_num ) {

    cout << first_num << " * " << second_num << " = " << first_num * second_num << "\n";

    return 0;

}

int division( int first_num, int second_num ) {
    
    // Do not try to divide by zero since dividing by zero will always return zero.
    if( second_num != 0 ) {
        cout << first_num << " / " << second_num << " = " << first_num / second_num << "\n";
    } else {
        cout << "Please do not try to divide by 0." << "\n";
    }

    return 0;

}

int main () {

    int operation;
    int first_num;
    int second_num;

    cout << "Please enter an integer: " << "\n";
    cin >> first_num;
    cout << "Please enter another integer: " << "\n";
    cin >> second_num;
    cout << "Please enter one of the following options by entering its respective number: " << "\n";
    cout << "1. addition \n";
    cout << "2. subtraction \n";
    cout << "3. multiply \n";
    cout << "4. divide \n";
    cout << "Enter number here: ";
    cin >> operation;

    switch ( operation ) {
        // Case 1, let's add.
        case 1:
            addition( first_num, second_num );
            break;
        // Case 2, let's subtract.
        case 2:
            subtraction( first_num, second_num );
            break;
        // Case 3, let's multiply.
        case 3:
            multiplication( first_num, second_num );
            break;
        // Case 4, let's divide.
        case 4:
            division( first_num, second_num );
            break;
        // No integer from 1-4 given, set a default and let the user know they need a valid case number.
        default:
            cout << "Please select a number 1-4";
            break;
    }

}