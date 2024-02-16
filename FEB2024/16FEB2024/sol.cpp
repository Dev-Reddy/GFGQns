class Solution
{
public:
    Node *flattenBST(Node *root)
    {
        if (!root)
        {
            return nullptr;
        }

        // Recursively flatten the left subtree
        Node *leftSubtree = flattenBST(root->left);

        // Recursively flatten the right subtree
        Node *rightSubtree = flattenBST(root->right);

        // If left subtree exists, connect the rightmost node of left subtree with root
        if (leftSubtree)
        {
            Node *temp = leftSubtree;
            while (temp->right)
            {
                temp = temp->right;
            }
            temp->right = root;
            root->left = nullptr;
        }

        // Connect the flattened left subtree with the flattened right subtree
        root->right = rightSubtree;

        // Return the head of the flattened list
        return leftSubtree ? leftSubtree : root;
    }
};
