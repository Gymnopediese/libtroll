/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:04:34 by albaud            #+#    #+#             */
/*   Updated: 2024/01/05 15:40:04 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/header.h"

int	main(void)
{
	int	pid;


	pid = fork();
	if (pid == 0)
	{
		ft_free_all();
		exit(1);
	}
	wait(0);
	pid = fork();
	if (pid == 0)
	{
		ft_double_free(malloc(42));
		exit(1);
	}
	wait(0);
	pid = fork();
	if (pid == 0)
	{
		ft_segfault();
		exit(1);
	}
	wait(0);
	pid = fork();
	if (pid == 0)
	{
		ft_leaks(42, 42);
		printf("42 * 42 leaks\n");
		exit(1);
	}
	ft_stack_overflow();
}
