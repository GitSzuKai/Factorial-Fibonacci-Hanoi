#include <stdio.h>

int USER_INPUT(void);
int factorial(int);
int fibonacci(int);
void hanoi(int);

int main(){

    while(1){

      int fac_n;
      int fib_m;
      int han_l;
          switch (USER_INPUT()) {
            case '1':
            printf("Enter a desired number n for n! (0 - 12): ");
            scanf("%d", &fac_n);
            if (fac_n <0 || fac_n > 12){
              printf("Value(%d) out of range (0 - 12)", fac_n);
              return 1;
            }else{
              printf("%d! = %d", fac_n,factorial(fac_n) );
            }
            break;

            case '2':
            printf("Enter a desired number m for F_m (0 - 46): ");
            scanf("%d",&fib_m );
            fibonacci(fib_m);
            break;

            case '3':
            printf("Enter the number of discs for the Tower of Hanoi (1 - 1000): ");
            scanf("%d", &han_l);
            hanoi(han_l);
            break;

            default :
            printf("Invalid choice. Try again.\n");
            printf("");

          }
        }
}

int USER_INPUT(void) {
  char sel;
  printf("\n# Menu\n");
  printf("1. Factorial\n");
  printf("2. Fibonacci\n");
  printf("3. Tower of Hanoi\n");
  printf("4. Exit\n");
  printf("Make a choice: " );
  scanf("%s", &sel );
  return sel;
}

int factorial(int n){
        if (1>= n){
          return 1;
        }else{
          return (n * factorial(n-1));
        }
}

int fibonacci(int m){

}

void hanoi(int h){

}
