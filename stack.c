#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
#define TRUE 1
#define FALSE 0

typedef int Bool;

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
Bool is_empty(void);
Bool is_full(void);
void push(char new_item);
char  pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(){
  char c;
  while(TRUE){
    scanf("%c", &c);
    if(c == ')' || c == '}'){
      pop();
    }else if(c == '\n'){
      break;
    }else{
      push(c);
    }
  }
  if(is_empty()){
    printf("yes");
  }else{
    printf("No");
  }
  return 0;
}


void make_empty(void){
  top = 0;
}

Bool is_empty(void){
  return 0 == top;
}

Bool is_full(void){
  return top == STACK_SIZE;
}

void push(char i){
  if(is_full()){
    stack_overflow();
  }else{
     contents[top] = i;
     top = top + 1;
  }
}

char pop(void){
  if(is_empty()){
    stack_underflow();
    exit(0); 
  }else{
    top = top - 1;
    return contents[top];
  }
}

void stack_overflow(){
  printf("stack overflow.\n");
  exit(1);
}
void stack_underflow(){
  printf("stack underflow.\n");
  exit(1);
}

