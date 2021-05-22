function isSymmetric(root) {
    if (root == null) return true;
    return isMirror(root.left, root.right);
}

function isMirror(p, q) {
    if (p == null && q == null) return true;
    if (p == null || q == null) return false;
    return p.val === q.val && isMirror(p.left, q.right) && isMirror(p.right, q.left);
}

