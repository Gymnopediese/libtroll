/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:41:04 by albaud            #+#    #+#             */
/*   Updated: 2023/04/28 19:01:40 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free_all(void)
{
	void				(*temp)(int);
	unsigned long		i;

	temp = ft_rm_signal(SIGABRT);
	i = 0;
	while (i++ < 9223372036854775807)
		free((void *)i);
	signal(SIGABRT, temp);
}
