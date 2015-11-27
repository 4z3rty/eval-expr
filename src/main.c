#include <stdio.h>
#include "eval_expr.h"

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      printf("%s = ", av[1]);
      printf("%d\n\nEval expr - Copyright (c) 2015 Romain Vermot\n",
        eval_expr(av[1]));
    }
  else
    printf("Usage: %s expr\n", av[0]);
  return (0);
}
