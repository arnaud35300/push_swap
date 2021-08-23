#include "push_swap.h"

typedef struct	s_ps
{
	t_stack	*a;
	t_stack	*b;
}				t_ps;

int	main()
{
	t_ps	*ps;

	if (!(ps = malloc(sizeof(t_ps))))
		return (1);
	ps->a = ft_lstnew(5);
	printf("%d", ps->a->nb);
}
