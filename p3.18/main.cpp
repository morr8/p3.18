/*
 •• Business P3.18
 When you use an automated teller machine (ATM) with your bank card, you need to use a personal identification number (PIN) to access your account. If a user fails more than three times when entering the PIN, the machine will block the card. Assume that the user’s PIN is “1234” and write a program that asks the user for the PIN no more than three times, and does the following:
 
 
 •If the user enters the right number, print a message saying, “Your PIN is correct”, and end the program.
 •If the user enters a wrong number, print a message saying, “Your PIN is incorrect” and, if you have asked for the PIN less than three times, ask for it again.
 •If the user enters a wrong number three times, print a message saying “Your bank card is blocked” and end the program.
 */

#include <iostream>

using namespace std;

int main()
{
    bool access = false;
    int pin = 0, code = 1234;
    
    if (access == false)
    {
        cout << "Enter PIN: ";
        cin >> pin;
        if (pin == code)
        {
            access = true;
        }
        else
        {
            cout << "Your PIN is incorrect\nTry again: ";
            cin >> pin;
            if (pin == code)
            {
                access = true;
            }
            else
            {
                cout << "Your PIN is inccorect\nTry again: ";
                cin >> pin;
                if (pin == code)
                {
                    access = true;
                }
                else
                {
                    cout << "Your PIN is incorrect\nYour bank card is now blocked\n";
                    return 1;
                }
            }
        }
    }
    if (pin == code)
    {
        access = true;
    }
    if (access == true)
    {
        cout << "Your PIN is correct";
    }
    cout << endl;
}
