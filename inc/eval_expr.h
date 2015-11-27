#ifndef EVAL_EXPR_H_
# define EVAL_EXPR_H_

# include <stdbool.h>

typedef enum operator
{
  NONE,
  ADD,
  SUBTRACT,
  MULTIPLY,
  DIVIDE,
  REMAINDER
} t_operator;

/*
** eval_expr.c
*/
int eval_expr(char *str);

/*
** op_low.c
*/
bool op_low(char **stream, int *result);

/*
** op_high.c
*/
bool op_high(char **stream, int *result);

/*
** path.c
*/
bool path(char **stream, int *result);

/*
** number.c
*/
bool number(char **stream, int *result);

#endif /* !EVAL_EXPR_H_ */
