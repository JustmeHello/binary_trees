#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_uncle - Finds the incle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 * Return: If node is NULL or has no uncle, NULL.
 * Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || 
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return(node->parent->parent->left);
=======

/**
 * binary_tree_uncle - Finds the uncle of a node
 *                     in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
}
