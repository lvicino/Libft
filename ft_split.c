/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvicino <lvicino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:28:34 by lvicino           #+#    #+#             */
/*   Updated: 2023/11/20 17:42:03 by lvicino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_spliter(char const *s, char c, char **str)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
				start = i + 1;
		else if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
		{
			str[j] = ft_substr(s, start, (i + 1) - start);
			if (!str[j])
			{
				while (--j >= 0)
					free(str[j]);
				free(str);
				return ;
			}
			j++;
		}
		i++;
	}
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			n++;
		i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	int		ln;
	char	**str;

	if (!s)
		return (NULL);
	ln = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (ln + 1));
	if (!str)
		return (NULL);
	str[ln] = 0;
	ft_spliter(s, c, str);
	if (!str)
		return (NULL);
	return (str);
}
