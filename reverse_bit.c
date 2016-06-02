/*#include<stdio.h>
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int sum = 0;
	int bit = 0;
	for (i = 0; i < 32; i++)
	{
		sum =sum<< 1;
		bit = value & 1;
		sum = sum | bit;
		value =value>> 1;
	}
	return sum;
}
int main()
{
	printf("%u", reverse_bit(5));
	return 0;
}*/

#include<stdio.h>
#include<math.h>
size_t reverse_bit(size_t value)
{
	int sum = 0;
	int bit = 0;
	int i = 0;
	for (i = 1; i < 33; i++)
	{
		bit = value & 1;
		sum = sum + pow(2, (32 - i))*bit;
		value = value >> 1;
	}
	return sum;
}
int main()
{
	printf("%u", reverse_bit(5));
	return 0;
}

