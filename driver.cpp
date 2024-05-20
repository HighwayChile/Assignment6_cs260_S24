#include <iostream>
#include <limits>
#include "bin_search_tree.hpp"
#include "bin_search_tree.cpp"


using namespace std;

int main() {
    // introduction
    cout << "Welcome to Binary Search Tree! \n" << endl;
    BIN_tree my_tree;
    my_tree.create_tree();

    while (true) {
        int menu1;
        int menu_start = 1;
        int menu_end = 8;

        show_menu();
        // cout << "Temporary MENU BIN_search_tree" << endl;
        // cout << "Enter num 1-7 to do stuff" << endl;

        // check if user enters value within range 1-7
        if (cin >> menu1 && menu1 >= menu_start && menu1 <= menu_end) {
            switch (menu1) {
            case 1:
            // create new tree
                cout << "You have chosen case 1 (create tree)" << endl;
                BIN_tree my_tree;
                my_tree.create_tree();
                cout << "\n" << endl;
                break;
            case 2:
            // add node
                cout << "You have chosen case 2 (add node)" << endl;
                // test_function();
                my_tree.add(my_tree.ask_for_data());
                cout << "\n" << endl;
                break;
            case 3:
            // remove node
                cout << "You have chosen case 3 (remove node)" << endl;
                test_function();
                cout << "\n" << endl;
                break;
            case 4:
            // traversals (should I make this a sub-list?)
                cout << "You have chosen case 4 (traverse in order)" << endl;
                my_tree.in_order_traverse(my_tree.head);
                cout << "\n" << endl;
                break;
            case 5:
                cout << "You have chosen case 5 (traverse pre-order)" << endl;
                my_tree.pre_order_traverse(my_tree.head);
                cout << "\n" << endl;
                break;
            case 6:
                cout << "You have chosen case 6 (traverse post-order)" << endl;
                my_tree.post_order_traverse(my_tree.head);
                cout << "\n" << endl;
                break;
            case 7:
                cout << "You have chosen case 7 (test module)" << endl;
                test_function();
                cout << "\n" << endl;
                break;
            case 8:
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