/**
 * 双指针找中点
 */

/**
 * 缺点，破坏了原来的数据结构
 */
function sortedListToBST(head) {
    if (head == null) return null;
    if (head.next == null) return new TreeNode(head.val);
    let pre, mid;
    [pre, mid] = findMid(head);
    const root = new TreeNode(mid.val);
    pre.next = null;
    root.left = sortedListToBST(head);
    root.right = sortedListToBST(mid.next);
    return root;
}


function findMid(head) {
    let pre = head;
    let mid = head.next;
    let last = head.next.next;
    while (last != null && last.next != null) {
        pre = pre.next;
        mid = mid.next;
        last = last.next.next;
    }
    return [pre, mid];
}