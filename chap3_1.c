/* Shahaab Manzar*/
/*Filename Chap3_1.c */
/*Totals how much money will be spend on holiday gifts*/
#include<stdio.h>
main()
{
  float gift1,gift2,gift3,gift4,gift5; //variables to hold constants
  float total;//variable to hold total amount
  /*Asks for each gift amount*/
  printf("How much do you want to spend on your mom?\n");
  scanf("%f\n",&gift1 );
  printf("How much do you want to spend on your dad?\n" );
  scanf("%f\n",&gift2 );
  printf("How much do you want to spend on your sister?\n");
  scanf("%f\n",&gift3);
  printf("How much do you want to spend on your brother?\n");
  scanf("%f\n",&gift4);
  printf("how much do you want to spend on your favorite ");
  printf("C Programming author?\n");
  scanf("%f\n",&gift5);

  total=gift1+gift2+gift3+gift4+gift5;
  /*computes total amount spend on gifts*/
  printf("\nThe total you will be spending on gifts is $%.2f",total );
  return 0;
  // Ends the program
}
