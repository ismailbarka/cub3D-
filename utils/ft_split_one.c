/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isbarka <isbarka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:56:19 by isbarka           #+#    #+#             */
/*   Updated: 2023/08/27 01:25:16 by isbarka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char	*ft_word(const char *s, char c)
{
	char	*str;
	int		len;

	len = word_len(s, c);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
	{
		free(str);
		ft_error("allocation failed");
	}
	ft_memcpy(str, s, len);
	str[len] = '\0';
	return (str);
}

static char	**ft_free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (0);
}

char	**ft_split_two(int i, int count, char c, const char *s)
{
	char	**str;

	str = NULL;
	str = str_count_one(str, s, c);
	if (!str)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			str[i] = ft_word(s, c);
			if (!str[i++])
				return (ft_free_all(str));
		}
		while (*s && *s != c)
			s++;
		count = 0;
		while (*s && *s == c)
		{
			if (++count > 1)
				str[i++] = ft_strdup("\n");
			s++;
		}
	}
	return (str);
}

char	**ft_split_one(const char *s, char c)
{
	int		i;
	int		count;

	count = 0;
	if (!s)
		return (0);
	i = 0;
	return (ft_split_two(i, count, c, s));
}
