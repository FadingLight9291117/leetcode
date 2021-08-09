function isBalanced(root) {
    if (root == null) return true;
    const leftDeepth = maxDeepth(root.left);
    const rightDeepth = maxDeepth(root.right);

    if (Math.abs(leftDeepth - rightDeepth) > 1) return false;
    return isBalanced(root.left) && isBalanced(root.right);

}

function maxDeepth(root) {
    if (root == null) return 0;
    const leftDeepth = maxDeepth(root.left);
    const rightDeepth = maxDeepth(root.right);
    return Math.max(leftDeepth, rightDeepth) + 1;
}