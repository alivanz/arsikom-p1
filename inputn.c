#include <stdio.h>

int getPositive(){
  int ret;
  while(1){
    printf("Masukkan n : ");
    scanf("%d", &ret);
    if(ret>1){
      break;
    }
    printf("Input tidak valid, n >= 2\n");
  }
  return ret;
}
