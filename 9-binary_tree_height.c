#include "binary_trees.h"
/**
 * a
 * 
 * 
 * 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);
	
	left_side = binary_tree_height(tree->left) + 1;
	right_side = binary_tree_height(tree->right) + 1;
	if(left_side > right_side)
		left_side--;
		return left_side;
	else
		right_side--;
		return right_side;
}
