#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
<<<<<<< HEAD
 * another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Retun: If parent is NULL or anerror occurs - NULL.
 * Otherwise - a pointer to the new node.
 * Description: If parent already has a left-child, the new node
 * takes its place and the old left-child is set as the 
 * left-child of the new node.
=======
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
<<<<<<< HEAD
	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new ==NULL)
		return (NULL);
        if (parent->left != NULL)
=======

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
<<<<<<< HEAD
=======

>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	return (new);
}
