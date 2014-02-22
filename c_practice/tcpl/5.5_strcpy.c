void str_cpy(char *s, char *t)
{
  int i;

  i = 0;
  while ( (s[i] = t[i]) != '\0')
    i++;
}

void str_cpy2(char *s, char *t)
{
  while (*s++ = *t++)
    ;
}

