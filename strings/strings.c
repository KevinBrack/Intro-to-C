#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s, return the number of characters 
    held inside it.
    
    Do not just use the `strlen` function from the standard libary.
*/
int string_length(char s[])
{
  int count;
  char letter;
  for(count = 0; s[count] != '\0'; count += 1){
  }
  return count;
}

/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/
char *reverse_string(char rv[], char s[])
{
  int count;
  int index;
  count = string_length(s);
  // printf("%i%s", count, "\n");
  for(index = 0; index != count; index += 1){
    rv[count - index - 1] = s[index];
    // printf("%i%c%s", index,s[index], "\n");
  }
  rv[count] = '\0';
  // printf("%s%s", "returning: ", rv);
  return rv;
}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
    
