
#include <stdio.h>
int main(){
  int n, son;
  
  scanf("%d", &n);
  
  for(int i = n; n; i++){
    son = n % 10;
    n /= 10;
    printf("%d", son);
  }
  return 0;
}
