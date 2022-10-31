/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:50:26 by leng-chu          #+#    #+#             */
/*   Updated: 2022/10/31 15:51:23 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hex.h"

void	ft_addspace(int c)
{
	if (c)
		ft_putstr_fd(1, "  ");
	else
		ft_putstr_fd(1, " ");
}
