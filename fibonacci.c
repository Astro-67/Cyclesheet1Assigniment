#include <stdio.h>

  
  unsigned long long int fibonacci(int n);
 int main() {
  for (int i = 0;i <= 10;i++){
    printf("Fibonacci(%d) = %llu\n",i,fibonacci(i));
}

    printf("Fibonacci(20) = %llu\n",fibonacci(20));

}

 unsigned long long int fibonacci(int n){
  if(0 == n || 1 == n){
     return n;
}
 else {
   return fibonacci(n-1) + fibonacci(n-2);
 }
}
