/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkirillo <lkirillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:33:01 by lkirillo          #+#    #+#             */
/*   Updated: 2023/12/04 13:09:05 by lkirillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*free_mem(char **mem)
{
	int	i;

	i = 0;
	while (mem[i] != NULL)
		free(mem[i++]);
	free(mem);
	return (NULL);
}

static int	baby_split(char const *s, char c)
{
	int	wordcount;
	int	i;

	wordcount = 0;
	i = 0;
	if (*s == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			wordcount++;
		i++;
	}
	if (s[i - 1] != c)
		wordcount = wordcount + 1;
	if (s[0] == c)
		wordcount = wordcount - 1;
	return (wordcount);
}

static int	wordlen(char const *str, char c)
{
	int	i;
	int	word_len;

	i = 0;
	word_len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		word_len++;
		i++;
	}
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		word;

	i = 0;
	word = 0;
	split = malloc((baby_split(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			word = wordlen(&*s, c);
			split[i++] = ft_substr(s, 0, word);
			if (split[i - 1] == NULL)
				return ((void *) free_mem(split));
			s = s + word;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

/*
 int main ()
{
	char const s1[] = "ccccword1cword2cword3cword4";
	char c = 'c';
	char **mem;
	int	i;

	i = 0;
	mem = ft_split((char *)s1, c);
	while(mem[i] != NULL)
	{
		printf("%s", mem[i]);
		i++;
	}
	return (0);
} */
