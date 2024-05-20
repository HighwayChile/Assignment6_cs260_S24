#include <iostream>
#include "bin_search_tree.hpp"

using namespace std;


// put binary tree initialization here (call ze nodes/tree)
// -- no! do it in main, dawg! (init. the list)
// variable = new BIN_node(value, nullptr, nullptr)
// 


// put functions here

void show_menu(){
    cout << "MAIN MENU \n"
    "1. New Binary Tree \n"
    "2. Add Node \n"
    "3. Remove Node \n"
    "4. Traverse In Order \n"
    "5. Traverse Post-Order \n"
    "6. Traverse Post-Order \n"
    "7. Run Test Function \n"
    "8. QUIT \n"
    << endl;
}

void BIN_tree::create_tree(){
    head = nullptr;

}

int BIN_tree::ask_for_data(){
    int user_data;
    cout << "Enter node value: ";
    cin >> user_data;
    return user_data;
}

int BIN_tree::search_element(){
    return 0;
}


void BIN_tree::in_order_traverse(BIN_node *current){
    // pseudo below
    /* 
    if(current->left != nullptr) {
        doo stuff (call recursively with current->left passed in.)
        in_order_traverse(current->left)
    } 

    print the node value:
    cout << current << ", ";

    if(current->right != nullptr) {
        doo stuff (call recursively with current->right passed in.)
        in_order_traverse(current->right)
    } 
    */
    // BIN_node *current = head;

    // NOTE calling recursively required re-thinking of function design.
    // used Joseph Jess' idea.
    if(current == nullptr) return;

    if(current->left != nullptr) {
        in_order_traverse(current->left);
    }

    cout << current->value << ", ";

    if(current->right != nullptr) {
        in_order_traverse(current->right);
    }
}

void BIN_tree::pre_order_traverse(BIN_node *current) {
    if(current == nullptr) return;

    cout << current->value << ", ";

    if(current->left != nullptr) {
        pre_order_traverse(current->left);
    }

    if(current->right != nullptr) {
        pre_order_traverse(current->right);
    }
}

void BIN_tree::post_order_traverse(BIN_node *current) {
    if(current == nullptr) return;

    if(current->left != nullptr) {
        post_order_traverse(current->left);
    }

    if(current->right != nullptr) {
        post_order_traverse(current->right);
    }

    cout << current->value << ", ";
}

void BIN_tree::add(int value_data){
    // shuttle node
    BIN_node *new_node = new BIN_node;
    // depending on user defined value_data, must insert either to left, or to right.
    new_node->value = value_data;
    new_node->left = nullptr;
    new_node->right = nullptr;
    
    // this is supposed to handle empty list - working
    if(head == nullptr) {
        head = new_node;
    // if list is not empty traverse to find spot:
    } else {
        // new pointers, one looks ahead one looks behind.
        // got help from Joseph Jess' examples and chatGPT here.(I had wrong implementation, at first)
        BIN_node *current = head;
        BIN_node *parent = nullptr;

        // while current exists
        // Traverse the tree until leaf node is found and set current as nullptr
        while(current != nullptr) {
            // current node becomes parent node
            parent = current;

            // Check if the value to be added is less than the value of the current node
            if(value_data <= current->value) {
                // if smaller move to left node
                current = current->left;
                // then if that is nullptr, place new_node under parent
                if(current == nullptr) {
                    parent->left = new_node;
                    break;
                }
                // if larger, add to right side.
            } else {
                current = current->right;
                if (current == nullptr) {
                    parent->right = new_node;
                    break;
                }
            }
        }
    }



    // BIN_node *current = head;
    // // while (current->left != nullptr && value_data)
    // // move left if both are empty
    // if (current->left == nullptr && current->right == nullptr){
    //     current->left = head;
    // }


    // in my old code I said "if head is nullptr or if user_data is less than head value, make new node the head"
    // if (head == nullptr || value_data < head->value){
    //     cout << "empty list" << endl;
    // }

}


void BIN_tree::remove(int value_data){

}


void test_function(){
    // cout << "hello, you did the test! (test_function() called)\n" << endl;
    BIN_tree test_tree;
    test_tree.create_tree();

    cout << "populating tree..." << endl;
    cout << "------------------" << endl;
    cout << "adding \"6, 5, 4, 3, 2, 1, 7, 17, 13, 10, -1, -3, -17\" in that order...\n" << endl;
    test_tree.add(6);
    test_tree.add(5);
    test_tree.add(4);
    test_tree.add(3);
    test_tree.add(2);
    test_tree.add(1);
    test_tree.add(7);
    test_tree.add(17);
    test_tree.add(13);
    test_tree.add(10);
    test_tree.add(-1);
    test_tree.add(-3);
    test_tree.add(-17);

    cout << "traverse and display in order..." << endl;
    test_tree.in_order_traverse(test_tree.head);
    cout << "\n" << endl;

    cout << "traverse and display pre-order..." << endl;
    test_tree.pre_order_traverse(test_tree.head);
    cout << "\n" << endl;

    cout << "traverse and display post-order..." << endl;
    test_tree.post_order_traverse(test_tree.head);
    cout << "\n" << endl;

    BIN_tree test_tree_2;
    test_tree_2.create_tree();

    cout << "populating tree..." << endl;
    cout << "------------------" << endl;
    cout << "adding \"16, 14, 18, 12, 20, 10, 8, 6, 4, 2, 0, 22, 24\" in that order...\n" << endl;
    test_tree_2.add(16);
    test_tree_2.add(14);
    test_tree_2.add(18);
    test_tree_2.add(12);
    test_tree_2.add(20);
    test_tree_2.add(10);
    test_tree_2.add(8);
    test_tree_2.add(6);
    test_tree_2.add(4);
    test_tree_2.add(2);
    test_tree_2.add(0);
    test_tree_2.add(22);
    test_tree_2.add(24);

    cout << "traverse and display in order..." << endl;
    test_tree_2.in_order_traverse(test_tree_2.head);
    cout << "\n" << endl;

    cout << "traverse and display pre-order..." << endl;
    test_tree_2.pre_order_traverse(test_tree_2.head);
    cout << "\n" << endl;

    cout << "traverse and display post-order..." << endl;
    test_tree_2.post_order_traverse(test_tree_2.head);
    cout << "\n" << endl;




    BIN_tree test_tree_3;
    test_tree_3.create_tree();

    cout << "populating tree..." << endl;
    cout << "------------------" << endl;
    cout << "adding \"1, 2, 3, 4, 5\" in that order...\n" << endl;
    test_tree_3.add(1);
    test_tree_3.add(2);
    test_tree_3.add(3);
    test_tree_3.add(4);
    test_tree_3.add(5);
    // test_tree_3.add(10);
    // test_tree_3.add(8);
    // test_tree_3.add(6);

    cout << "traverse and display in order..." << endl;
    test_tree_3.in_order_traverse(test_tree_3.head);
    cout << "\n" << endl;

    cout << "traverse and display pre-order..." << endl;
    test_tree_3.pre_order_traverse(test_tree_3.head);
    cout << "\n" << endl;

    cout << "traverse and display post-order..." << endl;
    test_tree_3.post_order_traverse(test_tree_3.head);
    cout << "\n" << endl;



    BIN_tree test_tree_6;
    test_tree_6.create_tree();

    cout << "populating tree..." << endl;
    cout << "------------------" << endl;
    cout << "adding \"1, 2, 3, 4, 5, 9, 8, 7, 6\" in that order...\n" << endl;
    test_tree_6.add(1);
    test_tree_6.add(2);
    test_tree_6.add(3);
    test_tree_6.add(4);
    test_tree_6.add(5);
    test_tree_6.add(9);
    test_tree_6.add(8);
    test_tree_6.add(7);
    test_tree_6.add(6);

    cout << "traverse and display in order..." << endl;
    test_tree_6.in_order_traverse(test_tree_6.head);
    cout << "\n" << endl;

    cout << "traverse and display pre-order..." << endl;
    test_tree_6.pre_order_traverse(test_tree_6.head);
    cout << "\n" << endl;

    cout << "traverse and display post-order..." << endl;
    test_tree_6.post_order_traverse(test_tree_6.head);
    cout << "\n" << endl;




    BIN_tree test_tree_4;
    test_tree_4.create_tree();

    cout << "populating tree..." << endl;
    cout << "------------------" << endl;
    cout << "adding \"5, 4, 3, 2, 1\" in that order...\n" << endl;
    test_tree_4.add(5);
    test_tree_4.add(4);
    test_tree_4.add(3);
    test_tree_4.add(2);
    test_tree_4.add(1);

    cout << "traverse and display in order..." << endl;
    test_tree_4.in_order_traverse(test_tree_4.head);
    cout << "\n" << endl;

    cout << "traverse and display pre-order..." << endl;
    test_tree_4.pre_order_traverse(test_tree_4.head);
    cout << "\n" << endl;

    cout << "traverse and display post-order..." << endl;
    test_tree_4.post_order_traverse(test_tree_4.head);
    cout << "\n" << endl;



    BIN_tree test_tree_5;
    test_tree_5.create_tree();

    cout << "populating tree..." << endl;
    cout << "------------------" << endl;
    cout << "adding \"5, 4, 3, 2, 1, 6, 7, 8, 9\" in that order...\n" << endl;
    test_tree_5.add(5);
    test_tree_5.add(4);
    test_tree_5.add(3);
    test_tree_5.add(2);
    test_tree_5.add(1);
    test_tree_5.add(6);
    test_tree_5.add(7);
    test_tree_5.add(8);
    test_tree_5.add(9);

    cout << "traverse and display in order..." << endl;
    test_tree_5.in_order_traverse(test_tree_5.head);
    cout << "\n" << endl;

    cout << "traverse and display pre-order..." << endl;
    test_tree_5.pre_order_traverse(test_tree_5.head);
    cout << "\n" << endl;

    cout << "traverse and display post-order..." << endl;
    test_tree_5.post_order_traverse(test_tree_5.head);
    cout << "\n" << endl;

}