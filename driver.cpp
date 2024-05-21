#include <iostream>
#include <limits>
#include "bin_search_tree.hpp"
#include "bin_search_tree.cpp"


using namespace std;

int main() {
    // introduction
    cout << "Welcome to Binary Search Tree! \n" << endl;
    // decided to move list init. out here, because it is better, after all. It doesn't run with each cycle.
    BIN_tree my_tree;
    my_tree.create_tree();

    while (true) {
        int menu1;
        int menu_start = 1;
        int menu_end = 9;

        show_menu();

        // check if user enters value within range 1-8
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
                cout << "REMOVE DOESN'T WORK!" << endl;
                my_tree.remove(my_tree.ask_for_data());
                cout << "\n" << endl;
                break;
            case 4:
            // traversals (should I make this a sub-list?)(decided no)
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
                // populate list 
                my_tree.add(01);
                my_tree.add(02);
                my_tree.add(03);
                my_tree.add(04);
                my_tree.add(05);
                my_tree.add(06);
                my_tree.add(07);
                break;
            case 9:
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