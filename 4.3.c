#include <stdio.h>
#include <math.h>
int figures_of(int);
int reversal(int);
int main(){
  int digit = 0;
  printf("Enter a digit number:");
  scanf("%i", &digit);
  printf("The reversal is %d\n", reversal(digit));
}

int reversal(int number){
  int i = number;
  int remainder = i % 10;
  if( i < 10 ){
    return i;
  }
  return remainder * pow(10, figures_of(i)) + reversal(i / 10);
}

int figures_of(int number){
  int result = 0;
  int num = number;
  while(num > 10){
    num = num / 10;
    result = result + 1;
  }
  return result;
}

