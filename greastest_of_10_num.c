#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h,i,j;

printf("enter 10 numbers\n");
scanf("%d%d%d%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
if(a>b&&a>c&&a>d&&a>e&&a>f&&a>g&&a>h&&a>i&&a>j){
   printf("%d is the greatest number",a);
}
else if(b>a&&b>c&&b>d&&b>e&&b>f&&b>g&&b>h&&b>i&&b>j){
   printf("%d is the greatest number",b);
}
else if(c>a&&c>b&&c>d&&c>e&&c>f&&c>g&&c>h&&c>i&&c>j){
   printf("%d is the greatest number",c);
}
else if(d>a&&d>b&&d>c&&d>e&&d>f&&d>g&&d>h&&d>i&&d>j){
   printf("%d is the greatest number",d);
}
else if(e>a&&e>b&&e>d&&e>c&&e>f&&e>g&&e>h&&e>i&&e>j){
   printf("%d is the greatest number",e);
}
else if(f>a&&f>b&&f>d&&f>c&&f>e&&f>g&&f>h&&f>i&&f>j){
   printf("%d is the greatest number",f);
}
else if(g>a&&g>b&&g>d&&g>c&&g>e&&g>f&&g>h&&g>i&&g>j){
   printf("%d is the greatest number",g);
}
else if(h>a&&h>b&&h>d&&h>c&&h>e&&h>f&&h>g&&h>i&&h>j){
   printf("%d is the greatest number",h);
}
else if(i>a&&i>b&&i>d&&i>c&&i>e&&i>f&&i>g&&i>h&&i>j){
   printf("%d is the greatest number",i);
}
else{
     printf("%d is the greatest number",j);
}
}