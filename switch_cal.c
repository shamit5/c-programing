#include <stdio.h>

int main()
{
  
  int n;
  scanf("%d",&n);
  char ch;
  scanf(" %c",&ch);
  int m;
  scanf("%d",&m);
 
 switch(ch){
     case'+': 
        printf("%d + %d = %d\n", n, m, n + m);
           break;
     case'-': 
        printf("%d - %d = %d\n", n, m, n - m);
           break;
     case'*': 
        printf("%d * %d = %d\n", n, m, n * m);
           break;
     case'/': 
        printf("%d / %d = %f\n", n, m, (float)n / m);
           break;
 }
   
    return 0;
}