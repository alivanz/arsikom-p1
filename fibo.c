long unsigned fibonacci(int n){
  long unsigned a = 1;
  long unsigned b = 1;
  printf("%lu", a);
  n -= 1;
  while(n>0){
    printf(" %lu", b);
    b = a+b;
    a = b;
    n -= 1;
  }
  printf("\n");
}
