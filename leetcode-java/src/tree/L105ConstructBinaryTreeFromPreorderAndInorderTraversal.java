package tree;

import java.util.Arrays;

public class L105ConstructBinaryTreeFromPreorderAndInorderTraversal {
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        if (preorder.length == 0 && inorder.length == 0) {
            return null;
        }
        TreeNode root = new TreeNode();
        root.val = preorder[0];

        int rootIdxIn = 0;
        for (int i = 0; i < inorder.length; i++) {
            if (inorder[i] == preorder[0]) {
                rootIdxIn = i;
                break;
            }
        }


        root.left = this.buildTree(Arrays.copyOfRange(preorder, 1, rootIdxIn + 1), Arrays.copyOfRange(inorder, 0, rootIdxIn));
        root.right = this.buildTree(Arrays.copyOfRange(preorder, 1 + rootIdxIn, preorder.length), Arrays.copyOfRange(inorder, rootIdxIn + 1, inorder.length));
        return root;
    }
}
