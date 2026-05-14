#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
}; 

static int idx = -1;

Node* buildTree(vector<int> preorder) {
    idx++;

    if(preorder[idx] == -1) {
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

void preOrder(Node* root) {    // time complexity = O(n)
    if(root == NULL) {
        return;
    }
    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {  // time complexity = O(n)
    if(root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root) {  // time complexity = O(n)
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}


int main() {

    vector<int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, -1,};

    Node* root = buildTree(preorder);

    cout << "PreOrder Traversal (root, left, right)\n";
    preOrder(root);
    cout << endl;

    cout << "InOrder Traversal (left, root, right)\n";
    inOrder(root);
    cout << endl;

    cout << "PostOrder Traversal (left, right, root)\n";
    postOrder(root);
    cout << endl;


    return 0;
}
