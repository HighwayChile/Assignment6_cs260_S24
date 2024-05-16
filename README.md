# Assignment6_cs260_S24
Assignment_06 - Binary search tree  

# Checklist  
Binary search tree with:  
nodes to store values  
add function that adds a value in designated location(node)  
a remove function that finds and removes a value and then picks replacement node ?(not sure about this one)    
Start with in order traversal
bonus - implement three common traversals (pre-order, post-order, in order)  


# Design  

inorder() - in order traversal   

is left/right is nullptr?   

If left is not null, go left by dereferencing "current" to "left."  

You(Dick) can do that recursively by calling the beginning of inorder here. So call inorder() and pass in current->left. This creates a cascading effect until "nullptr" is reached. 

If right is not null go right by dereferencing "current" to "right."  

You can do that recursively by calling the beginning of inorder here

using cout should give values when called with current->value. Still somewhat of a mystery how it knows to print the next item. Very interesting. OOOHH! it's from the return after it checks right! Then it returns to the cout statement! neat.   

This concludes the in-order traversal  


Set up the tree -   

I need to instantiate binary node with left/right pointers as attributes  

Then I need to instantiate a new node at each of those pointers. Something like BIN_node *left = new BIN_node.  

this is a very simple binary tree, with 3 total nodes, and with two leaves.

to add more nodes, create new pointers for your previous nodes.  

The "root" functionality is someone lost on me for now, but I know what it represents, and the purpose. It's more of the "how" that befuddles me atm. wait.. nvm... I get it. Sometimes I overcomplicate things when it comes to pointers.



- LIFE HACK!!! MOVE THE PRINT STATEMENT ABOVE AND BELOW THE "nullptr" CHECKS IN TRAVERSAL! Moving the statement up creates pre-order traversal, mocing it down creates post order traversal. Thank you Joseph Jess and recursion!  








# Instructions  

    Create a design, before you start coding, that shows how your binary tree functions and what attributes it keeps track of to function (yes, you can add to this design once you start coding, but please get some design down to start with and make note of when you add new design features based on your implementation work🙂),  

    Create some tests (at least one per function), before you start coding, that you want your Binary Search Tree (BST) to pass as evidence that it would be working correctly if it passed the tests,  

    Implement a binary search tree that includes:  

        nodes to store values,  

        an add function that adds a new value in the appropriate location based on our ordering rules,
        (I likely used less than or equal to going to the left and greater than values going to the right)  

        a remove function that finds and removes a value and then picks an appropriate replacement node,
        (successor is a term often used for this)  

        we have at least one tree traversal function (I recommend starting with an in-order traversal!)
        Bonus if you implement the three common traversals (pre-order, post-order, in-order)
        More Bonus if you also include a breadth-first traversal (sometimes called a level-order search)  

    Analyze and compare the complexity of insert and search as compared to a binary tree without any order in its nodes (what is the run-time of an unordered tree...?).  

    Once you have implemented and tested your code, add to the README file what line(s) of code or inputs and outputs show your work meeting each of the above requirements (or better, include a small screen snip of where it meets the requirement!).  