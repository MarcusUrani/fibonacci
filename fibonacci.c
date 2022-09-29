#include <stdio.h>

int main(void) {
  int i, j, k;
  int n, l, r;
  unsigned int fib[47];
  fib[0] = 1;
  fib[1] = 1;
  for (i = 2; i <= 46; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  scanf("%d", &n);
  for (k = 0; k < n; k++) {
    scanf("%d %d", &l, &r);
    long long int soma = 0;
    for (i = l; i <= r; i++) {
      soma += fib[i];
    }
    printf("%lld\n", soma);
  }
  return 0;
}