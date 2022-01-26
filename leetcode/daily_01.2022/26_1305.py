class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
class Solution:   
    def getAllElements(self, root1: TreeNode, root2: TreeNode) -> list[int]:
        answer = []
        def push(root):
            if root is not None:
                answer.append(root.val)
                push(root.left)
                push(root.right)

        push(root1)
        push(root2)
        
        print(sorted(answer))

if __name__ == "__main__":
    rl1 = TreeNode(4)
    ll1 = TreeNode(1)
    r1 = TreeNode(2, ll1, rl1)
    
    rl2 = TreeNode(3)
    ll2 = TreeNode(0)
    r2 = TreeNode(1, ll2, rl2)
    
    Solution().getAllElements(r1, r2)