function recoverTree(root) {
    const nodes = [];
    travel(root, nodes);
    let first = null;
    let last = null;
    for (let i = 0; i < nodes.length; i++) {
        if (i < nodes.length - 1 && nodes[i].val > nodes[i + 1].val && first == null) {
            first = nodes[i];
        }
        if (i > 0 && nodes[i].val < nodes[i - 1].val) {
            last = nodes[i];
        }
    }
    // swap first and last
    const tmpVal = first.val;
    first.val = last.val;
    last.val = tmpVal;
}

function travel(root, nodes) {
    if (root == null) {
        return
    }
    travel(root.left, nodes);
    nodes.push(root);
    travel(root.right, nodes);
}

