// Write a program to check whether user entered string is palindrome or not
#include <stdio.h>
#include <math.h>

int main() {
  char str[1000];

  printf("Enter a string: ");
  scanf("%s", str);

  int len = strlen(str);

  for (int i = 0, j = len - 1; i < j; i++, j--) 
  {
    if (str[i] != str[j]) 
    {
      printf("The string is not a palindrome.\n");
      return 0;
    }
  }

  printf("The string is a palindrome.\n");

  return 0;
}
