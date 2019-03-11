#include <stdio.h>

int main ()
{
	char Num [] = "1234567890";

	printf("Precision: %.*s:\n",5, Num); /* print the * characters*/
	printf("1:%s:\n", Num); /*print all*/
	printf("2:%15s:\n", Num); /*print 15 characters, if the number is bigger field with empty space*/   
	printf("3:%.7s:\n", Num);  
	printf("4:%-15s:\n", Num);
	printf("5:%.20s:\n", Num);
	printf("6:%9.20s:\n", Num);
	printf("7:%-15.7s:\n", Num);

	return(0);
}
