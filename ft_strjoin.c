/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:31:35 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 17:26:26 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	lenght1;
	size_t	lenght2;
	char	*sjoin;

	if (!s1 || !s2)
		return (NULL);
	lenght1 = ft_strlen(s1);
	lenght2 = ft_strlen(s2);
	sjoin = malloc((lenght1 + lenght2 + 1) * sizeof(char));
	if (!sjoin)
		return (NULL);
	i = 0;
	while (i < lenght1)
	{
		sjoin[i] = s1[i];
		i++;
	}
	while (i < (lenght1 + lenght2))
	{
		sjoin[i] = s2[i - lenght1];
		i++;
	}
	sjoin[i] = '\0';
	return (sjoin);
}
