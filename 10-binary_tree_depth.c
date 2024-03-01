#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: if tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
=======

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
}
