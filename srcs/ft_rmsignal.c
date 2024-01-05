/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmsignal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:42:34 by albaud            #+#    #+#             */
/*   Updated: 2023/04/28 19:08:31 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	void_signal(int s)
{
	(void) s;
}

void	(*ft_rm_signal(int signum))(int s)
{
	return (signal(signum, void_signal));
}
