function minDepth(root) {
    if (root == null) return 0;
    let deepth = 0;
    let stack = [];
    stack.push(root);
    deepth++;
    while (stack.length != 0) {
        const tmp = [];
        for (let item of stack) {
            if (item.left == null && item.right == null) return deepth;
            if (item.left) tmp.push(item.left);
            if (item.right) tmp.push(item.right);
        }
        stack = tmp;
        deepth++;
    }
    return deepth;
}