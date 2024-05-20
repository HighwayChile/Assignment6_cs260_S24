#ifndef BIN_SEARCH_TREE_HPP
#define BIN_SEARCH_TREE_HPP
#pragma once

struct BIN_node {
    int value;
    BIN_node *left;
    BIN_node *right;
};

class BIN_tree {
    // private:
    //     BIN_node *head;

    public:
        BIN_node *head;
        void create_tree();
        int ask_for_data();
        int search_element(); // menu item
        void in_order_traverse(BIN_node *current); // menu item
        void pre_order_traverse(BIN_node *current); // menu item
        void post_order_traverse(BIN_node *current); // menu item
        void add(int value_data); // menu item
        void remove(int value_data); // menu item
};

void test_function(); // menu item
void show_menu();

#endif

