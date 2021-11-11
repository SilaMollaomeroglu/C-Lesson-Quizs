#include <stdio.h>


int main()
{
	int value ;
	
	printf("Enter some integers: \n");
	scanf("%d",&value);

	int min;
	int array[value], i, j, elements;
	
	array[0] = value;
	for(i=1; i<value; i++)
	{
		scanf("%d", &elements);
		array[i] = elements;
	}
	
	min = array[0];
	for( i=1; i<5; i++)
	{
	
		if(array[i] < min)
		{
			min = array[i];
		}		
    }
    
	printf("min: ");
	printf("%d", min);


	return 0;
}
