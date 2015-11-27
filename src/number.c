#include <stdlib.h>
#include "eval_expr.h"
#include "read_functions.h"

bool number(char **stream, int *result)
{
  int nbr;

  nbr = atoi(*stream);
  if (read_range(stream, '0', '9'))
    {
      *result = nbr;
      while (read_range(stream, '0', '9'));
      return (true);
    }
  return (false);
}
