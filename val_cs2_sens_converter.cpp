#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   double val, cs2, number;
    char choice;
    
    do
    {
        
        cout << "Welcome to my sensitivity converter!" << endl;
        cout << "Here you will be able to convert your VALORANT/CS2 senses interchangebly" << endl;
        cout << "Type 1 or 2 to choose the game you want to convert to and from." << endl;
        cout << "1. CS2 TO VALORANT" << endl;
        cout << "2. VALORANT to CS2" << endl;

        cin >> number;
        while(number !=1 && number !=2)
        {   
            
            cout << "Please enter a valid number." << endl;
            cin >> number;
        }
        
        if (number == 1)
        {
            cout << "Enter your CS2 sens here: " << endl;
            cin >> cs2;
            double valorant_sens = cs2 / 3.182;
            cout << fixed << setprecision (2) << "Your VALORANT sens is: " << valorant_sens << endl;
        }
        else if (number == 2)
        {
            cout << "Enter your VALORANT sens here: " << endl;
            cin >> val;
            double cs2_sens = val * 3.182;
            cout << fixed << setprecision (2) << "Your CS2 sens is: " << cs2_sens << endl;
        }
        
        cout << "Do you want to continue?" << endl;
        cout << "Type Y or y to continue." << endl;
        cout << "If not, type any other character." << endl;
        cin >> choice;

    }while (choice == 'Y' || choice == 'y');
    
    return 0;
}