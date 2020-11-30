#include <string.h>
#include <stdio.h>

#undef strcmp
#ifndef STRCMP
#define STRCMP strcmp
#endif

int
STRCMP (const char *p1, const char *p2)
{
	printf("STRCMP\t|\tp1 = %s | p2 = %s\n", p1, p2);
  const unsigned char *s1 = (const unsigned char *) p1;
  const unsigned char *s2 = (const unsigned char *) p2;
  unsigned char c1, c2;
  do
    {
      c1 = (unsigned char) *s1++;
      c2 = (unsigned char) *s2++;
      if (c1 == '\0')
        return c1 - c2;
    }
  while (c1 == c2);
  return c1 - c2;
}
