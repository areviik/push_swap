# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"


typedef struct s_stack
{
    int value;
    int index;
    // maybe sth else
    struct s_stack *next;
} t_stack;

void sa(t_stack **a);
void sb(t_stack **b);
void ss(t_stack **a, t_stack **b);

#endif
