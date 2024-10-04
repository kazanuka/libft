#include "libft.h"
//TESTLER GERÇEKLEŞTİRİLMEDİ
int	count_words(char const *s, char c)
{
	char    *q;
	int	count;

	q = (char*)s;
	count = 0;
	while (*q)
	{
		if (*q == c)
			q++;
		else
		{
			count++;
			while (*q && *q != c)
				q++;
		}
	}
	return (count);
}

//i kelimelerin içinde dolaşırken j, karakterlerin içinde dolaşıyor.
char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	size_t	i;
	int		j;
	size_t	count;

	if (!s)
		return (0);
	count = count_words(s, c);
	str_arr = malloc(sizeof(char *) * (count + 1));
	if (!str_arr)
		return (0);
	i = -1;
	j = 0;
	while (++i < count)
	{
		while (*s == c)
			s++;
		j = 0;
		while (*(s + j) != c && *(s + j))
			j++;
		*(str_arr + i) = ft_substr(s, 0, j);
		s += j;
	}
	*(str_arr + i) = 0;
	return (str_arr);
}