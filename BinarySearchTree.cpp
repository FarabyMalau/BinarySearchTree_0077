#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node()
    {
        leftchild = nullptr; //Initialize left child to null
        rightchild = nullptr; //Initialize right child to null
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initializing ROOT to null
    }   
    
    void insert()
    {
        int x;
        cout << "Masukkan nilai; ";
        cin >> x;

        // Step 1: Allocate memory for the new node
        Node *newNode = new Node();

        //  Step 2: Assign value to the new node
        newNode->info = x;

        // Step 3: Make the left and right of the new node poin to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // Step 4: Locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        // Step 5: if parent is NULL (tree is empty)
        if (parent == nullptr)
        


    }
}