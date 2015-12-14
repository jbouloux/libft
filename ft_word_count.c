#include "libft.h"

int	ft_word_count(char const *s, char c)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c)
			i++;
		nb++;
	}
	return (nb);
}
