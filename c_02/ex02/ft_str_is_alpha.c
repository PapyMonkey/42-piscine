/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:47:26 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/13 12:08:24 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 122 || (90 < *str && *str < 97))
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}