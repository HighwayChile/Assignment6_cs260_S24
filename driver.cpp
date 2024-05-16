#include <iostream>
// #include <sstream>
#include <limits>
#include "bin_search_tree.hpp"
#include "bin_search_tree.cpp"


using namespace std;

int main() {
    // introduction
    cout << "Temporary INTRO BIN_search_tree" << endl;

    while (true) {
        int menu1;
        int menu_start = 1;
        int menu_end = 7;

        // show_menu();
        cout << "Temporary MENU BIN_search_tree" << endl;
        cout << "Enter num 1-7 to do stuff" << endl;

        // check if user enters value within range 1-7
        if (cin >> menu1 && menu1 >= menu_start && menu1 <= menu_end) {
            switch (menu1) {
            case 1:
                cout << "You have chosen case 1" << endl;
                test_function();
                break;
            case 2:
                cout << "You have chosen case 2" << endl;
                test_function();
                break;
            case 3:
                cout << "You have chosen case 3" << endl;
                test_function();
                break;
            case 4:
                cout << "You have chosen case 4" << endl;
                test_function();
                break;
            case 5:
                cout << "You have chosen case 5" << endl;
                test_function();
                break;
            case 6:
                cout << "You have chosen case 6" << endl;
                test_function();
                break;
            case 7:
                // Quit
                cout << "Quitting..." << endl;
                system("pause");
                return 0;
            default:
                break;
            }
        } else {
            cout << "Please choose a valid menu choice" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return 0;
}