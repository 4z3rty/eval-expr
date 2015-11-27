#ifndef READ_FUNCTIONS_H_
# define READ_FUNCTIONS_H_

# include <stdbool.h>

bool read_char(char **stream, char c);
bool read_range(char **stream, char start, char end);

#endif /* !READ_FUNCTIONS_H_ */
