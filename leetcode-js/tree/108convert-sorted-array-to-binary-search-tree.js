function sortedArrayToBST(nums) {
    if (nums.length === 0) return null;
    const mid = parseInt(nums.length / 2);
    const root = new TreeNode();
    root.val = nums[mid];
    root.left = numssortedArrayToBST(nums.slice(0, mid));
    root.right = numssortedArrayToBST(nums.slice(mid + 1));
    return root;
}