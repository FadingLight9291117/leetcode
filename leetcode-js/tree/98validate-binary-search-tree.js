function isValidBST(root) {
    return validBST(root, null, null);
}

function validBST(root, lower, upper) {
    if (!root) {
        return true;
    }
    if ((lower != null && root.val <= lower) || (upper != null && root.val >= upper)) {
        return true;
    }
    return validBST(root.left, lower, root.val) && validBST(root.right, root.val, upper);
}
