#include <iostream>
#include <vector>

struct TreeNode {
    int data;
    std::vector<TreeNode*> children;
};

TreeNode* createNode(int data) {
    TreeNode* newNode = new TreeNode;
    newNode->data = data;
    return newNode;
}

void insertChild(TreeNode* parent, TreeNode* child) {
    parent->children.push_back(child);
}

void preOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    std::cout << root->data << " ";
    for (TreeNode* child : root->children) {
        preOrderTraversal(child);
    }
}

int main() {
    TreeNode* root = createNode(1);

    TreeNode* child1 = createNode(2);
    TreeNode* child2 = createNode(3);
    TreeNode* child3 = createNode(4);

    insertChild(root, child1);
    insertChild(root, child2);
    insertChild(root, child3);

    TreeNode* child4 = createNode(5);
    TreeNode* child5 = createNode(6);

    insertChild(child1, child4);
    insertChild(child1, child5);


    std::cout << "Pre-order traversal: ";
    preOrderTraversal(root);
    std::cout << std::endl;


    return 0;
}

