#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;

    if (argc < 2)
    {
        write(2, "Error\n", 6);  // Printing error can be made as a seperate function
        exit(EXIT_FAILURE);      // 1 line instead of 4
    }
    a = NULL;
    b = NULL;
    /*
        MUST BE: Validation check and Sort check (if not sorted SORT);
    */
    free(&a);
    return (0);
}
