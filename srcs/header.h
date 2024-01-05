/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:07:49 by albaud            #+#    #+#             */
/*   Updated: 2024/01/05 15:34:25 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <signal.h>
# include <unistd.h>
# include <stdio.h>

// segfault your c programme
void	ft_segfault(void);

// to put some leaks in your projects
void	ft_leaks(int size, int num);

// to kill your computer, don't use it
void	ft_killall(void);

// double free "to_free"
void	ft_double_free(void *to_free);

void	ft_bus_error(void);

void	(*ft_rm_signal(int signum))(int s);

void	ft_free_all(void);

void	ft_stack_overflow(void);
#endif