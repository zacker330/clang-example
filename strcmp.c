#include <stdio.h>
#include <string.h>

#define WORD_MAX_LENGTH 20

int read_line(char store[], int max_length);

int main(void){
  char smallest_word[WORD_MAX_LENGTH] = {'\0'};
  char larges_word[WORD_MAX_LENGTH] = {'\0'};
  char str[WORD_MAX_LENGTH] = {'\0'};
  int length = 0;

  while((length = read_line(str, WORD_MAX_LENGTH)) != 4){
    if(strlen(smallest_word) == 0){
      strcpy(smallest_word, str);
    }
    if(strlen(larges_word) == 0){
      strcpy(larges_word, str);
    }
    if(strcmp(str, smallest_word) < 0){
      strcpy(smallest_word, str);
    }
    if(strcmp(str, larges_word) > 0){
      strcpy(larges_word, str);
    }
  }
  printf("Smallest word is %s\n", smallest_word);
  printf("Lagest word is %s\n", larges_word);
  return 0;
}
int read_line(char str[], int n){
  printf("Enter word: ");
  char ch;
  int i = 0;
  while((ch = getchar()) != '\n'){
    if(i < n){
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;
}
