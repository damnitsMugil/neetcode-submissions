class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if root == None:
            return []
        
        IOT = []
        left=self.inorderTraversal(root.left)
        right=self.inorderTraversal(root.right)
        return left+[root.val]+right