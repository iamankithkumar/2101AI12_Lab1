#include<stdio.h>
int main()
{
  float a,b;
  printf("Enter the numbers = ");
  scanf("%f%f",&a,&b);
  int op;
  printf("Select the operation (1 for +, 2 for -, 3 for *, 4 for /) = ");
  scanf("%d",&op);
  switch(op)
  {
    case 1:
    {
      printf("%f + %f = %f",a,b,a+b);
      break;
    }
    case 2:
    {
      printf("%f - %f = %f",a,b,a-b);
      break;
    }
    case 3:
    {
      printf("%f * %f = %f",a,b,a*b);
      break;
    }
    case 4:
    {
      printf("%f / %f = %f",a,b,a/b);
      break;
    }
  }
  return 0;
}
