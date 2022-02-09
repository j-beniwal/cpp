# In this module
- Definitions for trees
- Trees storage methods
- Design of binary search trees
- What we need BSTs for BST
- Tree traversals 
- When BST's fail
- Balanced BST
    - AVL
    - Red-black

# what is a tree
- A data structure designed to hold items in a hierarchial pattern. 
- Often used for searching. 
- Every node has one and only one parent node. 
- The node at the top with no parent is called the root node. 
- Every node has zero or more childrens. 
- Storage is as a pointer to the heighest node in the tree, the root.
- Every node looks like its own subtree. 
    => Recursion will gonna happen a lot in trees.

# some definitions
- Binary Tree : It can have maximum of two children, refered as left and right. Some nodes can have one child some node has no child but maximum is two. 
- Size: Number of nodes in that tree. 
        If we are looking at the size of the root node of the tree we are looking at the size of entire tree. 
        If we are looking at the size of the node that has no children its size is 1. Because its just that node. 
        If we have couple of children then we have to do calculations to find the size. 
- Height: It is the distance or the number links from the root to the farthest child. 
          Height of the null is -1. It has no height. 
          Height of the node with no children is zero i.e the distance from the root to the farthest child that is itself is zero. 
          If the root node has only one child then the height of the root node is 1 and the height of its only chield is 0. 
- Depth: Distance from node to the root, its inverse of the height. Root node had a depth of zero 
         always as its the root node and the distance to itself is zero.
- Leaf: Node with no children. 
- Full : has the maximum number of childrens. 

# Tree Storage
- For trees with unlimited children, child storage pointer is either in the form of an array or a linked list. 
- Parent -Multi-Child - The parent node has an array of child nodes. 
- Parent -Child- Sibling - Parent Pints to the favourate child and the child points to the next child. 
* if we have limited number of nodes (n value) then we can set up those pointers to the children and its not difficult. 
* variable number of children problem becomes complex.  

# Binary Search Tree
- Each node has only a left and a right pointer. 
- Order Property: all the values in Left sub trees are a smaller then this node and all the values in the right sub tree are grater than the value of this node. 
- If we templatise this then we have to overeload the "<" operator.

# what we need binary search tree for?
- A BST provides, best case: 
    - Search in O(logN)
    - Insertion in O(logN)
    - Deletion in O(logN)
- We can use these for inorder storage of any items which can be compared using a less-then operator. 
- Very efficient for in-order storage!

# Tree Traversals
In Order: 
    - Processes the left node first, recursively,
    - then process this node
    - then processes the right node.
    - When working with a BST, this result in "normal" order. 
Pre Order:
    - Process this node
    - then processes the left nodes recursively
    - then processes the right nodes recursively. 
Post Order:
    - Processes the left nodes recursively
    - then processes the right nodes recursively. 
    - then processes this node. 
Level Order:
    - Processes the nodes based on depth
    - The nodes closest to the root first 
    - then successively lower.
    - Requires a queue to contain the node pointers to be processes. 
    - Also known as the breadth first search.

# Removal from a tree
- if the node is empty (leaf node): just remove the node.
- if the node has just one child: remove the node and permote the child.
- if the node has two children: (candidate replacement)

# When BSTs fail
- in Best case scenario, BSTs result in O(logN) time for everything. 
- Unfortunatly, if the insertions in the tree are already in order. 
- Then all the insertions result in right hand side operation. 
- and result in all right children and end up in a linked list. 

# Balanced Binary Search Tree. 
- If we need to guarantee O(logN) search time, we need to do some additional work during insertion and removal. 
- The balanced Binary search protects the O(log N) insertion time. 
- Two populer type of balanced binary search tree are.
    - AVL trees
    - Red-Black trees
- STL have two trees.
    - Set
    - Map
    - multi set
    - multi map
    * set and map are impemented as red-black trees. 

# AVL Trees
- Named for their creators 
- An AVL tree is easy binary balanced tree to understand. 
- Each node records its own height. 
- The AVL tree requires that the height of the left and the right subtrees of every node differ by a height of no more than 1. 
- If the height differ by more than one, a rotation is necessary to "rebalance" the subtree. 

# Rotation Solutions
- Given a grandparent, parent, child situation which is unbalanced. 
- If the left parent's left shubchild (or right parent's right subchild) is greater than
    the left parent's right subchild (or right parent's left subchild) 
    *Single Rotation* : make the parent new grandparent and the grandparent and child becomes the new children. 

- *Double Rotation* : Perform two single rotations to produce double rotation. 

# Red-Black Trees
The Laws:
- All nodes are coloured Red or Black
- The root is always Black. (make it black if it anytime turns red)
- A red node cannot have a red child. (if we face this situation this mean that something need to change)
- All paths from root to all children must pass through the same number of black nodes. 
* insertion in red black trees are going to be red nodes. 

# what we have learned
- Defination of trees.
- Trees Strorage methods
- Design of Binary Search treen
- What we need BST for
- BST Design
- Tree Traversal
- When BSTs fail.
- Balanced BST
    - AVL trees. 
    - Red-Black trees
