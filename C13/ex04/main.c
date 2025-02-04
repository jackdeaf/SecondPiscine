/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:24:14 by leng-chu          #+#    #+#             */
/*   Updated: 2022/11/07 13:18:56 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	main(void)
{
	t_btree	*tree;

	tree = btree_create_node("25");
	tree->left = btree_create_node("15");
	tree->right = btree_create_node("50");
	btree_insert_data(&tree, "100", &ft_strcmpatoi);
	btree_insert_data(&tree, "105", &ft_strcmpatoi);
	btree_insert_data(&tree, "70", &ft_strcmpatoi);

	if (tree->right->right)
		printf("tree's right's right got it: %s\n", tree->right->right->item);
	if (tree->right->left)
		printf("tree's right's left got it: %s\n", tree->right->left->item);
	if (tree->right->right->right)
		printf("tree's 3 rights got it: %s\n", tree->right->right->right->item);
	if (tree->right->right->left)
		printf("tree's 3 2r 1l got it: %s\n", tree->right->right->left->item);
//	btree_apply_prefix(tree, &printitem);
//	btree_apply_infix(tree, &printitem);
	btree_apply_suffix(tree, &printitem);
	return (0);
}
