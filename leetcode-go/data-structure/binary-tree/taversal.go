package main

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func preorderTraversal(root *TreeNode) []int {
	val := root.Val
	list := make([]int, 1)
	list[0] = val
	list = append(list, preorderTraversal(root.Left)...)
	list = append(list, preorderTraversal(root.Right)...)
	return list
}

func backorderTraversal(root *TreeNode) []int {
	val := root.Val
	list := make([]int, 0)
	list = append(list, backorderTraversal(root.Left)...)
	list = append(list, backorderTraversal(root.Right)...)
	list = append(list, val)
	return list
}

func midorderTraversal(root *TreeNode) []int {
	val := root.Val
	list := make([]int, 0)
	list = append(list, midorderTraversal(root.Left)...)
	list = append(list, val)
	list = append(list, midorderTraversal(root.Right)...)
	return list
}
