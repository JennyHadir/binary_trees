#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: pointer to the node to ckeck
 * Return: 1 if a node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
