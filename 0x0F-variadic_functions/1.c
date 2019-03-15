#include <stdarg.h>
#include <stdio.h>

double average ( int num, ... )
{
	va_list arguments;                     
	char *sum = "0";

	va_start ( arguments, num );           
	int x;
	for (x = 0; x < num; x++ )        
	{
		sum[x] = va_arg ( arguments, char ); 
	}
	va_end ( arguments );                  
        return sum; 
}

int main()
{
	printf( "%f\n", average ( 3, 12.2, 22.3, 4.5 ) );
	printf( "%f\n", average ( 5, 3.3, 2.2, 1.1, 5.5, 3.3 ) );
}
