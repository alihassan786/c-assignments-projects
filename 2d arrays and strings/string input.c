#include <stdio.h>
int main()
{
  int c = 0, count_vowel = 0,count_int=0,count_space=0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      {count_vowel++;}
      else if((int)s[c]>=48 && (int)s[c]<=57)count_int++;
      else if(s[c]==' ')count_space++;
    c++;

  }

  printf("Number of vowels in the string: %d\n", count_vowel);
  printf("The number of integers in the string is :%d\n",count_int);
  printf("The number of spaces in the string is :%d\n",count_space);

  return 0;
}

