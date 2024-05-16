#ifndef BIN_SEARCH_TREE_HPP
#define BIN_SEARCH_TREE_HPP

struct BIN_node {
    int value;
    BIN_node *left;
    BIN_node *right;
};


// put function definitions here
void test_function();
void in_order_traverse();
void pre_order_traverse();
void post_order_traverse();

#endif