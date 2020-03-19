#include<stdio.h>
main()
{
  float a,b;
  printf("how much bonus did you get?");
  scanf("%f\n",&a);
  b=a*.85;
  printf("if you gibe 15 percent to charoty, you will still have %.2f",b);
  return 0;
}
