class Solution {
  public:
    Node* LCA(Node* root, Node* n1, Node* n2) {
        if (root == NULL)
            return NULL;

        // If both n1 and n2 are smaller, LCA is in the left subtree
        if (n1->data < root->data && n2->data < root->data)
            return LCA(root->left, n1, n2);

        // If both n1 and n2 are greater, LCA is in the right subtree
        if (n1->data > root->data && n2->data > root->data)
            return LCA(root->right, n1, n2);

        // If one node is on the left and the other on the right, root is the LCA
        return root;
    }
};
