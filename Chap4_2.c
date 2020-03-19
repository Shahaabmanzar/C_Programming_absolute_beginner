//Shahaab Manzar
//Filename chap4_3
/* This code will make me familiar with printf(), Escape SEquences,
and Conversion Characters*/

#include<stdio.h>
main()
{
  printf("Quantity\tCost\tTotal\n");
  printf("%d\t\t$%.2f\n",3,9.99,29.97);
  printf("Too many spaces    \b\b\b\b can be fixed with the ");
  printf("with the escape statement\n" );
  printf("\n\a\n\a\n\a\n\a\a\n\aSkip a few lines, and beep");
  printf("a few beeps.\n\n\n");
  printf("%s%c","you are kicking learning",'c');
  printf("you just finished%d",4);
  printf("you have finished%.1f%c of the book\n",12.500,'%');
  printf("\n\n One third equals %.2f or",0.333);
  printf("%.3f or%.4f or",0.333333,.333333333);
  printf("%0.5f or %0.6f\n\n\n",0.333333,0.33333);
  return 0;   

}
