#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_is_root - Checks if a node is a root of a 
 * binary tree.
 * @node: A pointer to the node to check.
 * Return: If the node is a root - 1.
 * Otherwise - 0.
 */
int binary_tree_is_root(cons binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
=======
 * binary_tree_is_root - Checks if a node is a root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a root - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	return (1);
}
