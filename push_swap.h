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
void push_front(t_stack **lst, int val, int ind);
void push_down(t_stack **lst, int val, int ind); 
void pop_front(t_stack **lst);
void pop_down(t_stack **lst); 
void pa(t_stack **a, t_stack **b);
void pb(t_stack **a, t_stack **);
int stack_size(t_list *a);
void ra(t_stack **a);
void rb(t_stack **b);
void rr(t_stack **a, t_stack **b);

#endif
