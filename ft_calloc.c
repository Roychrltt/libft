#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = NULL;
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	p = malloc(count * size);
	if (p)
		ft_bzero(p, count * size);
	return (p);
}
