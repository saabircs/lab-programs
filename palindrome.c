#include <stdio.h>
int main()
{
  int l = 0,i=0;
  char str[50];
  printf("Enter any string:");
  gets(str);
  while(str[i]!='\0')
  {
    i++;
  }
    i--;
	while (i > l)
	{
		if (str[l++] != str[i--])
		{
			printf("%s is not a palindrome\n", str);
			return 0;
		}
	}
	printf("%s is a palindrome\n", str);
}
