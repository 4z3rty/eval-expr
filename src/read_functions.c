#include "read_functions.h"

bool read_char(char **stream, char c)
{
  if (**stream == c)
    {
      *stream += 1;
      return (true);
    }
  return (false);
}

bool read_range(char **stream, char start, char end)
{
  for (; start <= end; start++)
    if (read_char(stream, start))
      return (true);
  return (false);
}
