#include "eval_expr.h"
#include "read_functions.h"

static bool find_operator(char **stream, t_operator *op, int *result)
{
  bool ret;

  ret = false;
  *op = NONE;
  if ((ret = read_char(stream, '+')))
    *op = ADD;
  else if ((ret = read_char(stream, '-')))
    *op = SUBTRACT;
  return (ret && op_high(stream, result));
}

static int calc_expr(int left_nbr, t_operator op, int result)
{
  int right_nbr;

  right_nbr = result;
  if (op == ADD)
    left_nbr += right_nbr;
  else if (op == SUBTRACT)
    left_nbr -= right_nbr;
  return left_nbr;
}

bool op_low(char **stream, int *result)
{
  char *save;
  int left_nbr;
  t_operator op;

  save = *stream;
  if (op_high(stream, result))
    {
      left_nbr = *result;
      while (**stream)
        {
          save = *stream;
          if (!find_operator(stream, &op, result))
            {
              *stream = save;
              break;
            }
          left_nbr = calc_expr(left_nbr, op, *result);
        }
      *result = left_nbr;
      return (true);
    }
  *stream = save;
  return (false);
}
