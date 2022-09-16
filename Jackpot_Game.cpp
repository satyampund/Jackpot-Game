#include <iostream>
using namespace std;
int main()
{
    string name;
    int num;
    char again = 'y';

    cout << R"(

                 Welcome to the Lucky Jackpot Game

                    ____...------------...____
               _.-"` /o/__ ____ __ __  __ \o\_`"-._
             .'     / /                    \ \     '.
             |=====/o/======================\o\=====|
             |____/_/________..____..________\_\____|
             /   _/ \_     <_o#\__/#o_>     _/ \_   \
             \_________\####/_________/             /
              |===\!/========================\!/===|
              |   |=|          .---.         |=|   |
              |===|o|=========/     \========|o|===|
              |   | |         \() ()/        | |   |
              |===|o|======{'-.) A (.-'}=====|o|===|
              | __/ \__     '-.\uuu/.-'    __/ \__ |
              |==== .'.'^'.'.====|                 | 
              |  _\o/   __  {.' __  '.} _   _\o/  _|
              `""""-""""""""""""""""""""""""""-""""`
    )" << endl;

    while (again == 'Y' || again == 'y')
    {
        cout << "\n\nEnter the number in between 1 to 10: ";
        while (!(cin >> num))
        {
            cout << "You have given wrong input" << endl;
            cout << "Enter the number in between 1 to 10: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
        /*
           I have used second while loop becasue whenever the user
           was giving the input other than numbers the loop was becoming
           infinite and I was not having any control on it.
        */

        if (num == 5)
        {
            cout << "Oh My God.You have Won 1 crore." << endl;
        }
        else if (num == 7 || num == 10)
        {
            cout << "Congratulations.You have won 50 Lakhs" << endl;
        }
        else if (num == 1 || num == 3 || num == 6)
        {
            cout << "You have won 25 lakhs" << endl;
        }
        else if (num == 2 || num == 8 || num == 4 || num == 9)
        {
            cout << "You have won 10 lakhs" << endl;
        }
        else
        {
            cout << "You entered wrong number. You lost." << endl;
        }
        cout << "\nNote: If you select any key other than 'y' or 'n'.\n      Then you will be disqualified.";

        cout << "\nDo you want to try it again?(y/n): ";
        cin >> again;
    }

    cout << "\nThanks for playing the Game.";
}
