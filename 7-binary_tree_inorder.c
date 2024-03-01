#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
=======

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
<<<<<<< HEAD
		binary_tree_preorder(tree->right, func);
=======
		binary_tree_inorder(tree->right, func);
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	}
}
