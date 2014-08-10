#include <stdio.h>

#define LENGTH 30

int main(void){
  char original_str[LENGTH] = {'\0'};
  char c = getchar();
  int index = 0;
  while(c != '\n' && index < LENGTH){
    original_str[index] = c;
    index = index + 1;
    c = getchar();
  }
  while(index >= 0){
    printf("%c", original_str[index]);
    index = index - 1;
  }
  printf("\n");
  return 0;
}
