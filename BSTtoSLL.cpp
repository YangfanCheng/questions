//implementation to flatten a binary search tree to a singly linked list

flatten (TreeNode *root) {
	if(!root) return;
	TreeNode *node = root;
	while(node) {
		if(node->left){
			//find the rightMost Node to attach to.
			TreeNode * rightMost = node->left;
			while(rightMost->right) {
				rightMost = rightMost->right;			
			}
			//attach the right subtree to the rightMost of left subtree and the left node NULL.
			rightMost->right = node->right;
			node->right = node->left;
			node->left = NULL;
		}
	}
	//proceed to the next node
	node = node->right;
}
