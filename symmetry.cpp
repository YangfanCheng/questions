struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

bool isSymmetricHelper(TreeNode* leftTree, TreeNode* rightTree);
bool isSymmetric(TreeNode* root);

int main(){
	TreeNode* head = new TreeNode(1);
	TreeNode* tmpLeft = new TreeNode(2);
	TreeNode* tmpRight = new TreeNode(2);
	head->left = tmpLeft;
	head->right = tmpRight;

	isSymmetric(head);

	return 0;
}

bool isSymmetricHelper(TreeNode* leftTree, TreeNode* rightTree){
	//if pointer is null then check if both are null
	if(leftTree == NULL || rightTree == NULL) return leftTree == rightTree;
	//if 2 values aren't equal
	if(leftTree->val != rightTree->val) return false;
	//recursion that checks the symmetry
	return isSymmetricHelper(leftTree->left,rightTree->right) && isSymmetricHelper(leftTree->right, rightTree->left);
}

bool isSymmetric(TreeNode* root){
	return root == NULL || isSymmetricHelper(root->left, root->right);
}
