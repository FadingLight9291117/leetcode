function zigzagLevelOrder(root) {
    if (root == null) return [];
    let leftToRight = true;
    const res = [];
    const queue = [];
    queue.push(root);
    while (queue.length > 0) {
        let vals = [];

        const size = queue.length;
        for (let i = 0; i < size; i++) {
            const node = queue.shift();
            vals.push(node.val);

            if (node.left != null) queue.push(node.left);
            if (node.right != null) queue.push(node.right);
        }

        vals = leftToRight ? vals : vals.reverse();
        res.push(vals);
        leftToRight = !leftToRight;
    }
    return res;
}
