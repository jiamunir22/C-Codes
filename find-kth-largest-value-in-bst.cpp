// find-kth-largest-value-in-bst.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

// This is an input class. Do not edit.
class BST {
public:
    int value;
    BST* left = nullptr;
    BST* right = nullptr;

    BST(int value) { this->value = value; }
};
vector<int> result;
vector<int> traverseTree(BST* tree) {
    if (tree->left == NULL && tree->right == NULL) {
        result.push_back(tree->value);
        return result;
    }
    else {
        if (tree->right == NULL) {
            result.push_back(tree->value);
            result = traverseTree(tree->left);
        }
        else {
            result = traverseTree(tree->right);
            result.push_back(tree->value);
            if(tree->left!=NULL)
                result = traverseTree(tree->left);

        }
    }
    //result = traverseTree(tree->left);
    //result = traverseTree(tree->right);
    return result;

}
int findKthLargestValueInBst(BST* tree, int k) {
    // Write your code here.
    vector<int>res;
    res=traverseTree(tree);
    return res.at(k-1);
}

int main()
{
    BST* root = new BST(5);
    BST* curr = root;
    curr->left = new BST(4);
    curr->right = new BST(6);
    /*curr->left->left = new BST(3);
    curr->left->left->left = new BST(1);
    curr->left->left->right = new BST(3);
    curr->left->right = new BST(5);*/
    curr->left->left=new BST(3);
    curr->right->right = new BST(7);
    int temp=findKthLargestValueInBst(root, 1);
    std::cout << "Hello World!\n"<<temp;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
