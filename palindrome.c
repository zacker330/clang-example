#include <stdio.h>

#define Bool int
#define TRUE 1
#define FALSE 0

int char_count_in_str(char* str);
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
  char* head = str;
  int count = char_count_in_str(str);
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

int char_count_in_str(char* str){
  int max = 0;
  char* index = str;
  while(*index != '\0'){
    max = max + 1;
    index = index + 1;
  }
  return max;
}
