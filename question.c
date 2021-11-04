#include <stdio.h>


int main()
{
	int number1,number2;
	float result;
	int temp,remainder;
	
	scanf("%d %d",&number1,&number2);
	
	result = (float) number1/number2;
	int newresult = result*10;
	temp = newresult;
	while(temp>0)
	{
		remainder = temp % 10;
		temp = temp / 10;
		break;
	}
 	if(remainder>5)
 	{
 		printf("%f",result);
	}
	

	return 0;
}
