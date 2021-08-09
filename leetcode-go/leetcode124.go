package main

import (
	"math"
)

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
