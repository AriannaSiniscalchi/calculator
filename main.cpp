// Include necessary libraries
#include <iostream>     // For input/output (cin, cout)
#include <iomanip>      // For output formatting (setprecision)
#include <limits>       // For data type limits

using namespace std;    // Allows using standard names without std::

int main() {
    // Declaration of variables for the three numbers
    int n1, n2, n3;
    // Variable to store user's choice
    char choice;
    
    // Loop for reading three values with validation
    do {
        // Prompt user to enter three values
        cout << "Enter three integer values between 1 and 100: ";
        // Read the three values from keyboard
        cin >> n1 >> n2 >> n3;
    } while (n1 < 1 || n1 > 100 || n2 < 1 || n2 > 100 || n3 < 1 || n3 > 100);
    // The loop continues until all values are between 1 and 100
    
    // Main program loop that repeats until user chooses to exit
    do {
        // Print the operations menu
        cout << "\n=== OPERATIONS MENU ===" << endl;
        cout << "A - sum of n1, n2 and n3" << endl;           // Option A: sum
        cout << "B - product of n1 and n2" << endl;           // Option B: product
        cout << "C - subtraction between n3 and n1" << endl;  // Option C: subtraction
        cout << "D - division between n1 and n2 (double result)" << endl; // Option D: division
        cout << "X - exit program" << endl;                   // Option X: exit
        cout << "Choice: ";                                   // Prompt for choice
        
        // Read the character chosen by user
        cin >> choice;
        
        // Switch structure to execute the operation corresponding to the choice
        switch(choice) {
            // Case A: sum of three numbers (accepts both uppercase and lowercase)
            case 'A':
            case 'a':
                // Print the operation and result
                cout << "Operation: " << n1 << " + " << n2 << " + " << n3 << " = " 
                     << (n1 + n2 + n3) << endl;
                break;  // Exit switch
                
            // Case B: product between n1 and n2 (accepts both uppercase and lowercase)
            case 'B':
            case 'b':
                // Print the operation and result
                cout << "Operation: " << n1 << " * " << n2 << " = " 
                     << (n1 * n2) << endl;
                break;  // Exit switch
                
            // Case C: subtraction between n3 and n1 (accepts both uppercase and lowercase)
            case 'C':
            case 'c':
                // Print the operation and result
                cout << "Operation: " << n3 << " - " << n1 << " = " 
                     << (n3 - n1) << endl;
                break;  // Exit switch
                
            // Case D: division between n1 and n2 (accepts both uppercase and lowercase)
            case 'D':
            case 'd':
                // Check to avoid division by zero
                if (n2 != 0) {
                    // Set formatting for decimal numbers
                    cout << fixed << setprecision(2);
                    // Print the operation and result with conversion to double
                    cout << "Operation: " << n1 << " / " << n2 << " = " 
                         << (static_cast<double>(n1) / n2) << endl;
                } else {
                    // Error message if attempting to divide by zero
                    cout << "Error: division by zero!" << endl;
                }
                break;  // Exit switch
                
            // Case X: exit program (accepts both uppercase and lowercase)
            case 'X':
            case 'x':
                // Exit confirmation message
                cout << "Exiting program." << endl;
                break;  // Exit switch
                
            // Default case: handles all invalid characters
            default:
                // Does nothing, the character is ignored
                // The menu will be shown again in the next cycle
                break;  // Exit switch
        }
        
    } while (choice != 'X' && choice != 'x');  // Exit condition: when choice is X or x
    
    return 0;  // Terminate program with exit code 0 (success)
}
