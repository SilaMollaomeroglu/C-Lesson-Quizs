#include <stdio.h>


int main()
{
	int value ;
	
	printf("Enter some integers: \n");
	scanf("%d",&value);

	int smallest;
	int array[value], i, j, elements;
	
	array[0] = value;
	for(i=1; i<value+1; i++)
	{
		scanf("%d", &elements);
		array[i] = elements;
	}
	
	smallest = array[0];
	for( i=1; i<value+1; i++)
	{
	
		if(array[i] < smallest)
		{
			smallest = array[i];
		}		
    }
    
	printf("smallest: ");
	printf("%d", smallest);


	return 0;
}
