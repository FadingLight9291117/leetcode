package tree;

import java.util.ArrayList;
import java.util.Collections;

public class L104MaximumDepthOfBinaryTree {
    private ArrayList<Integer> depths = new ArrayList<Integer>();

    public int maxDepth(TreeNode root) {
        this.deepTravel(root, 0);
        return Collections.max(depths);
    }


    private void deepTravel(TreeNode root, int level) {
        if (root == null) {
            this.depths.add(level);
        } else {
            deepTravel(root.left, level + 1);
            deepTravel(root.right, level + 1);
        }
    }
}
