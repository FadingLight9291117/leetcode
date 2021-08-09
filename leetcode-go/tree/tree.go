package tree

var nodes = make([]*TreeNode, 0)

func Preorder(root *TreeNode) {
	if root == nil {
		return
	}
	nodes = append(nodes, root)
	Preorder(root.Left)
	Preorder(root.Right)
}

func DeepFirst(root *TreeNode, target int) *TreeNode {
	if root == nil {
		return nil
	}
	if root.Val == target {
		return root
	}
	t1 := DeepFirst(root.Left, target)
	if t1 != nil {
		return t1
	}
	t2 := DeepFirst(root.Right, target)
	if t2 != nil {
		return t1
	}
	return nil
}

// WideFirst 广度优先没有递归
func WideFirst(root *TreeNode, target int) *TreeNode {
	return nil
}
