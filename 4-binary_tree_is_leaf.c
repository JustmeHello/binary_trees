#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary
 * tree.
 * @node: A pointer to the node to check.
 * Return: if the node is a leaf - 1.
 * Otherwise - 0.
=======

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
<<<<<<< HEAD
=======

>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	return (1);
}
