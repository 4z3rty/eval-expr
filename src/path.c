#include "eval_expr.h"
#include "read_functions.h"

bool path(char **stream, int *result)
{
  if ((read_char(stream, '(') && op_low(stream, result)
    && read_char(stream, ')')) || number(stream, result))
    {
      return (true);
    }
  return (false);
}
