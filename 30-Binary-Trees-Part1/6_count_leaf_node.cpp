#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = NULL;
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

void postOrder(Node* root) {
    if(root == NULL) {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int countLeaf(Node* root) {
    if(root == NULL) {
        return 0;
    }

    if(root->left == NULL && root->right == NULL) {
        return 1;
    }

    int leftLeaf = countLeaf(root->left);
    int rightLeaf = countLeaf(root->right);

    return leftLeaf + rightLeaf;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    cout << "Binary Tree PostOrder traversal: ";
    postOrder(root);
    cout << endl;

    cout << "Leaf Nodes: " << countLeaf(root) << endl;


    return 0;
}