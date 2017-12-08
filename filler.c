#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  pos_s
 {
   int           x;
   int           y;
 }               pos_t;


int parse_size(char *line)
{
  int         i, size;
  char        *left, *right;
  int       position;

  size = strlen(line);
  left = malloc(size);
  right = malloc(size);

  memset(left, '\0', size);
  memset(right, '\0', size);

  for(i = 0; i < size && line[i] != ' '; i++);

  left = strncpy(left, line, i);
  right = strcpy(right, line + i + 1);
  position.x = atoi(left);
  position.y = atoi(right);

  free(left);
  free(right);

  return position;
}
