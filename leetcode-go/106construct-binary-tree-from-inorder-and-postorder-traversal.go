package main

import (
	"fmt"
)

func buildTree(inorder []int, postorder []int) *TreeNode {
	if len(inorder) == 0 && len(postorder) == 0 {
		return nil
	}
	if len(inorder) == 1 && len(postorder) == 1 {
		return &TreeNode{
			inorder[0],
			nil,
			nil,
		}
	}
	root := &TreeNode{}
	root.Val = postorder[len(postorder)-1]
	rootIdx := 0
	for i := range inorder {
		if inorder[i] == root.Val {
			rootIdx = i
			break
		}
	}
	root.Left = buildTree(inorder[:rootIdx], postorder[:rootIdx])
	root.Right = buildTree(inorder[rootIdx+1:], postorder[rootIdx:len(postorder)-1])
	return root
}

func main() {
	inorder := []int{4, 2}
	postorder := []int{4, 2}
	tree := buildTree(inorder, postorder)
	fmt.Printf("%+v\n", *tree)
	print(postorder[3:])
}
