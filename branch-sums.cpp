// branch-sums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

// This is the class of the input root. Do not edit it.
class BinaryTree {
public:
    int value;
    BinaryTree* left;
    BinaryTree* right;

    BinaryTree(int value) {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};
vector<int> sumValues(BinaryTree* root,int sum, vector<int>result) {
    if (root->left == NULL || root->right == NULL) {
        if (root->left != NULL) {
            sum = sum + root->value;
            result = sumValues(root->left, sum, result);
            return result;
           
        }
        else if (root->right != NULL) {
            sum = sum + root->value;
            result = sumValues(root->right, sum, result);
            return result;
            
        }
        else {
            sum = sum + root->value;
            result.push_back(sum);
            sum = sum - root->value;
            return result;
        }

    }
    sum = sum + root->value;
    //cout << root->value;
    result=sumValues(root->left,sum,result);
    result=sumValues(root->right,sum,result);
    sum = sum - root->value;

    return result;

}

vector<int> branchSums(BinaryTree* root) {
    int sum = 0; vector<int> result;
    result=sumValues(root, sum, result);
    return result;
}

int main()
{
    struct BinaryTree *root=NULL,*temp=NULL,*current = NULL;
   root = new BinaryTree(1);
   root->left= new BinaryTree(2);
  // root->right = new BinaryTree(3);
   root->left->left= new BinaryTree(4);
   //root->left->right = new BinaryTree(5);
   root->left->left->left = new BinaryTree(8);
   //root->left->left->right = new BinaryTree(9);
   //root->left->right->left = new BinaryTree(10);
   //root->right->left= new BinaryTree(6);
   //root->right->right = new BinaryTree(7);
   
   vector<int>output=branchSums(root);
    
    for (auto o : output) {
        cout << o;
    }
    //std::cout << "Hello World!\n";
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
