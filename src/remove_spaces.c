#include <stdbool.h>
#include <string.h>

char *remove_spaces(char *input)
{
  unsigned int i;
  unsigned int j;
  unsigned int len;
  char *output;

  output = input;
  for (i = 0, j = 0, len = strlen(input); i < len; i++, j++)
    {
      if (input[i] != ' ')
        output[j] = input[i];
      else
        j--;
    }
  output[j] = 0;
  return (output);
}
