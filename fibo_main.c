#include <stdio.h>
#include "inputn.c"
#include "fibo.c"

int main(){
  fibonacci( getPositive() );
  return 0;
}
