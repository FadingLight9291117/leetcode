function levelOrder(root) {
    if (root == null) return [];
    const result = [];
    const queue = [];
    queue.push(root);
    while (queue.length > 0) {
        const levelVals = [];
        const size = queue.length;
        for (let i = 0; i < size; i++) {
            const levelNode = queue.shift();
            levelVals.push(levelNode.val);

            if (levelNode.left != null) queue.push(levelNode.left);
            if (levelNode.right != null) queue.push(levelNode.right);
        }
        result.push(levelVals);
    }
    return result;
}
