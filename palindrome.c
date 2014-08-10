#include <stdio.h>
#include <string.h>

#define Bool int
#define TRUE 1
#define FALSE 0

Bool is_palindrome(char* str);
int main(void){
  char str[50] = {'\0'};
  printf("Please type your string: ");
  gets(str);
  char* result = "";
  if(is_palindrome(str) == FALSE){
    result = "not";
  }
  printf("%s is %s palindrome\n", str, result);
}

Bool is_palindrome(char* str){
  int count = strlen(str);
  if(count % 2 == 0){
    return FALSE;
  }
  char* head = str;
  char* tail = &str[count - 1];
  while(*head == *tail){
    if((tail - head) == 0){
      break;
    }
    head = head + 1;
    tail = tail - 1;
  }
  return (tail - head) == 0;
}
