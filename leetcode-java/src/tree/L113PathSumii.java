package tree;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class L113PathSumii {
    private final List<List<Integer>> result = new ArrayList<>();
    private int targetSum;
    private List<Integer> stack = new ArrayList<>();

    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        if (root == null) {
            return this.result;
        }
        this.targetSum = targetSum;
        _pathSum(root);
        return this.result;
    }


    public void _pathSum(TreeNode root) {
        assert root != null;
        this.stack.add(root.val);
        if (root.left == null && root.right == null) {
            int sum = this.stack.stream().mapToInt(e -> e).sum();
            if (sum == this.targetSum) {
                this.result.add(new ArrayList<>(this.stack));
            }
        } else {
            if (root.left != null) {
                _pathSum(root.left);
                this.stack.remove(this.stack.size() - 1);
            }
            if (root.right != null) {
                _pathSum(root.right);
                this.stack.remove(this.stack.size() - 1);
            }
        }
    }
}
