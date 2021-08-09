package tree

/**
 *
 */

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func flatten(root *TreeNode) {
	if root == nil {
		return
	}
	res := preorder(root, make([]*TreeNode, 0, 10))
	for i := 0; i < len(res)-1; i++ {
		res[i].Right = res[i+1]
		res[i].Left = nil
	}
}

func preorder(root *TreeNode, res []*TreeNode) []*TreeNode {
	if root == nil {
		return res
	}
	res = append(res, root)
	res = preorder(root.Left, res)
	res = preorder(root.Right, res)
	return res
}

func main() {
	root := &TreeNode{}
	root.Val = 1
	left := &TreeNode{}
	left.Val = 2
	right := &TreeNode{}
	right.Val = 3
	root.Left = left
	root.Right = right
	flatten(root)
	print("end\n")
}
