#include <stdio.h>
 
 unsigned long long int factorial(int number);

int main(){
  for(int i = 0;i <= 21;i++){
     printf("%d! = %llu\n",i,factorial(i));
}

}

 unsigned long long int factorial(int number){
   if(number <= 1 ){
     return 1;
}
 else {
     return (number * factorial(number - 1));
}
}
