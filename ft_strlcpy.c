// size-bounded string copying and concatenation.

#include <unistd.h>

unsigned int	ft_lensrc(char *src)
{
	unsigned int sizesrc;

	sizesrc = 0;
	while(src[sizesrc])
		sizesrc++;
	return(sizesrc);
}
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while(src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if(size != 0)
		dest[size - 1] = '\0';
	return(ft_lensrc(src));
}
int main()
{
	char src[] = "holamulgato";
	char dest[] = "mulmono";
	unsigned int size;
	size = 7;
	printf("%d", ft_strlcpy(dest, src, size));
}
