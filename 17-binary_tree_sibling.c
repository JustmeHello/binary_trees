#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 * Return: If node is NULL or there is no sibling - NULL.
 * Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *tree)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left ==node)
		return(node->parent->right);
=======

/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	return (node->parent->left);
}
