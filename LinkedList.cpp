#include <iostream>
using namespace std;
int main(){
struct BSTNode{
	int data;
	BSTNode* right;
	BSTNode* left;
};
	BSTNode* findMin(BSTNode* curr){
    while (curr->left != NULL)
        curr = curr->left;
    return curr;
}
BSTNode* deleteNode(BSTNode* root, int value) {
    if (root == NULL)
        return NULL;

    if (value < root->data) {
        // Key is in the left subtree
        root->left = deleteNode(root->left, key);

    } else if (key > root->data) {
        // Key is in the right subtree
        root->right = deleteNode(root->right, key);

    } else {
        // Node to delete found — 3 cases:

        // Case 1: Leaf node
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }

        // Case 2
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == NULL {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: Two children
        Node* successor = findMin(root->right);

        root->data = successor->data;

        root->right = deleteNode(root->right, successor->data);
    }

    return root;
}	
}
