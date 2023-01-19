#include <stdio.h>

int main() {
  int x;
  int y;
  printf("Enter x value");
  scanf("%d",&x);
  printf("Enter y value");
  scanf("%d",&y);
  y<=x ?printf("%d is smallest number",y):printf("%d is largest number\n",y);
  x<=y ?printf("%d is smallest number\n",x):printf("%d is largest number\n",x);

 return 0;
}