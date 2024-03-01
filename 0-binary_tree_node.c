#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_node - Create a binary tree node.
 * @parent: A pointer to the parentt of the node to create.
=======
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
<<<<<<< HEAD
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
=======

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
<<<<<<< HEAD
	reurn (new);
}

=======

	return (new);
}
>>>>>>> 57187ea63824765b63ee3f46e1785af50ce694bc
