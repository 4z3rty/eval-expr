#include <stdio.h>
#include <stdlib.h>
#include "eval_expr.h"
#include "remove_spaces.h"

int eval_expr(char *str)
{
  int result;
  char *rs_str;

  result = 0;
  rs_str = remove_spaces(str);
  op_low(&rs_str, &result);
  return (result);
}
