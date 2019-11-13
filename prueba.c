#include "libft/libft.h"
#include <bsd/string.h>
int main()
{
	char *s1 = malloc(sizeof(char)*100);
	char s2[100] = "holi";
	strlcpy(s1, s2, 3);
	printf("%s %s\n", s1, s2);
	ft_strlcpy(s1, s2, 3);
	printf("%s %s\n", s1, s2);
	strlcat(s1, s2, 1);
	printf("%s ??\n", s1);
	strlcpy(s1, s2, 3);
	printf("%s %s\n", s1, s2);
	ft_strlcat(s1, s2, 1);
	printf("%s\n", s1);
}
#ifndef HAVE_STRLCAT
/*
 * '_cups_strlcat()' - Safely concatenate two strings.
 */

size_t                  /* O - Length of string */
strlcat(char       *dst,        /* O - Destination string */
              const char *src,      /* I - Source string */
          size_t     size)      /* I - Size of destination string buffer */
{
  size_t    srclen;         /* Length of source string */
  size_t    dstlen;         /* Length of destination string */


 /*
  * Figure out how much room is left...
  */

  dstlen = strlen(dst);
  size   -= dstlen + 1;

  if (!size)
    return (dstlen);        /* No room, return immediately... */

	printf("%s\n", dst);
 /*
  * Figure out how much room is needed...
  */

  srclen = strlen(src);

 /*
  * Copy the appropriate amount...
  */

  if (srclen > size)
    srclen = size;

  memcpy(dst + dstlen, src, srclen);
  dst[dstlen + srclen] = '\0';

  return (dstlen + srclen);
}
#endif /* !HAVE_STRLCAT */

#ifndef HAVE_STRLCPY
/*
 * '_cups_strlcpy()' - Safely copy two strings.
 */

size_t                  /* O - Length of string */
strlcpy(char       *dst,        /* O - Destination string */
              const char *src,      /* I - Source string */
          size_t      size)     /* I - Size of destination string buffer */
{
  size_t    srclen;         /* Length of source string */


 /*
  * Figure out how much room is needed...
  */

  size --;

  srclen = strlen(src);

 /*
  * Copy the appropriate amount...
  */

  if (srclen > size)
    srclen = size;

  memcpy(dst, src, srclen);
  dst[srclen] = '\0';

  return (srclen);
}
#endif /* !HAVE_STRLCPY */
