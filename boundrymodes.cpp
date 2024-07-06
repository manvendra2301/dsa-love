class Solution
{
public:
    // left wale print karane ke liye
    void traverseLeft(Node *root, vector<int> &ans)
    {
        // leaf nod wali condition hai 2nd and third
        if ((root == NULL) || (root->left == NULL) || (root->right == NULL))
        {
            return;
        }
        ans.push_back(root->data);
        if (root->left)
        {
            traverseLeft(root->left, ans);
        }
        else
        {
            traverseLeft(root->right, ans);
        }
    }

    // leaf node traverse karane ke liye
    void traverseleaf(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
            return;
        }

        traverseleaf(root->left, ans);
        traverseleaf(root->right, ans);
    }

    // right node print kara do
    void traverseright(Node *root, vector<int> &ans)
    {
        if ((root == NULL) || (root->left == NULL && root->right == NULL))
        {
            return;
        }

        if (root->right)
        {
            traverseright(root->right, ans);
        }
        else
        {
            traverseright(root->left, ans);
        }

        // wapas aa gye toh print kara lo
        ans.push_back(root->data);
    }

    vector<int> boundary(Node *root)
    {
        // Your code here
        vector<int> ans;

        if (root == NULL)
        {
            return ans;
        }
        // first node ko ans mai push kar do

        ans.push_back(root->data);

        // left nodes print kara do
        traverseLeft(root->left, ans);

        // leaf nodes print karo do

        // left subtree
        traverseleaf(root->left, ans);
        // right subtree
        traverseleaf(root->right, ans);

        // right nodes ko print kara do
        traverseright(root->right, ans);
        return ans;
    }
};