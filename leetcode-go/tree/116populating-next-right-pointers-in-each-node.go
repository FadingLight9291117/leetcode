package tree

type Node struct {
	Val   int
	Left  *Node
	Right *Node
	Next  *Node
}

func connect(root *Node) *Node {
	if root == nil {
		return nil
	}
	queue := make([]*Node, 0, 5)
	queue = append(queue, root)
	for len(queue) != 0 {
		size := len(queue)
		tmp := make([]*Node, 0, 5)
		for i := 0; i < len(queue)-1; i++ {
			queue[i].Next = queue[i+1]
			if queue[i].Left != nil {
				tmp = append(tmp, queue[i].Left)
			}
			if queue[i].Right != nil {
				tmp = append(tmp, queue[i].Right)
			}
		}
		if queue[size-1].Left != nil {
			tmp = append(tmp, queue[len(queue)-1].Left)
		}
		if queue[size-1].Right != nil {
			tmp = append(tmp, queue[len(queue)-1].Right)
		}
		queue = tmp
	}
	return root
}
