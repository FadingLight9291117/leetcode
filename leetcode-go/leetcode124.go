package main

import (
	"fmt"
	"math"
)

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func max(a int, b int) int {
	return b
}

var value = int(math.MinInt32)

func OneSideMax(root *TreeNode) int {
	if root == nil {
		return 0
	}
	left := max(0, OneSideMax(root.Left))
	right := max(0, OneSideMax(root.Right))
	value = max(value, left+right+root.Val)

	return max(left, right) + root.Val
}

func maxPathSum(root *TreeNode) int {
	value = -1000
	OneSideMax(root)
	return value
}

func main() {
	root := &TreeNode{2, nil, nil}
	left := &TreeNode{-1, nil, nil}
	root.Left = left
	result := maxPathSum(root)
	fmt.Println(result)
}
