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

int sumOfNode(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftSum = sumOfNode(root->left);
    int rightSum = sumOfNode(root->right);

    return leftSum + rightSum + root->data;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    cout << "Binary Tree PostOrder traversal:\n";
    postOrder(root);
    cout << endl;

    cout << "Sum of all Nodes: " << sumOfNode(root) << endl;

    return 0;
}