/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:13:57 by aguiri            #+#    #+#             */
/*   Updated: 2021/09/12 13:15:29 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str != '\0')
	{
		if (!(65 <= *str && *str <= 90))
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}