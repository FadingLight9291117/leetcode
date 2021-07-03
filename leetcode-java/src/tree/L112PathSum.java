package tree;

import java.util.ArrayList;
import java.util.List;

public class L112PathSum {
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if (root == null) {
            return false;
        }
        nodeSum(root, 0);
        for (var item : this.tmp) {
            if (item == targetSum) {
                return true;
            }
        }
        return false;
    }

    List<Integer> tmp = new ArrayList<>();

    public void nodeSum(TreeNode root, int sum) {
        if (root == null) return;
        if (root.left == null && root.right == null) tmp.add(sum + root.val);
        nodeSum(root.left, root.val + sum);
        nodeSum(root.right, root.val + sum);
    }
}
