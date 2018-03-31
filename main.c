/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarandi <asarandi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 19:51:05 by asarandi          #+#    #+#             */
/*   Updated: 2018/03/30 20:06:23 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "42sh.h"
#include "ft_printf_header.h"
#include "libft.h"


int     main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    ft_printf("#\n");
    ft_printf("Hello world!");
    ft_putchar('\n');
    return (0);
}
