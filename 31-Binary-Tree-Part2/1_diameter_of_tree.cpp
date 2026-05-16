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

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int diameterOfTree1(Node* root) {  // O(n^2)
    if(root == NULL) {
        return 0;
    }

    int root_diameter = height(root->left) + height(root->right) + 1;
    int left_diameter = diameterOfTree1(root->left);
    int right_diameter = diameterOfTree1(root->right);

    return max(root_diameter, max(left_diameter, right_diameter));
}

pair<int, int> diameterOfTree2(Node* root) { // O(n)

    if(root == NULL) {
        return make_pair(0, 0);
    }

    pair<int, int> leftInfo = diameterOfTree2(root->left);
    pair<int, int> rightInfo = diameterOfTree2(root->right);

    int currDiam = leftInfo.second + rightInfo.second + 1;
    int finalDiam = max(currDiam, max(leftInfo.first, rightInfo.first));
    int finalHt = max(leftInfo.second, rightInfo.second) + 1;

    return make_pair(finalDiam, finalHt);
}


int main() {

    vector<int> preorder = {1, 2, 4, 9, 10, -1, -1, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};

    Node* root = buildTree(preorder);


    cout << "Diameter: " << diameterOfTree2(root).first << endl;



    return 0;
}