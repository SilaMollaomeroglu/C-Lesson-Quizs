#include <stdio.h>
#include <stdlib.h>
#include<string.h>

 struct Student {
 	char name[15];
    char surname[15];
    int studentGrade;
    struct Student *next; 
 
}*head;
 

void insertNode(char* name, char* surname,int studentGrade)
{
    struct Student* student = (struct Student*) malloc(sizeof(struct Student));
  
    strcpy(student->name, name);
    strcpy(student->surname, surname);
    student->studentGrade = studentGrade;

    student->next = NULL;
    if(head==NULL){
        
       head = student;
    }
    else{
       struct Student* temp = NULL;

	   temp = head;
	   
	while(temp->next != NULL)
    {
	     temp= temp->next;
	}
		temp->next = student;	
		
  	}
  	       
}
 
void printList(){   
    struct Student* tempNode = head;

	if (tempNode == NULL) {
		printf("no data");
	}
	else {
		printf("\n");

 		while (tempNode != NULL) {
			  printf("%s ",tempNode->name);
			  printf("%s ",tempNode->surname);
			  printf("%d ",tempNode->studentGrade);
		
			 tempNode = tempNode->next;
			 printf("\n");

		}
	}
 	 
}
int main()
{
	int selection;
    char name[15];
    char surname[15];
    int studentGrade;
    printf("1 to insert student node\n2 to display linked list");
    do{
        printf("\nEnter your selection: ");
        scanf("%d", &selection);
        switch (selection)
        {
            case 1:
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter surname: ");
                scanf("%s", surname);
                printf("Enter student grade: ");
                scanf("%d", &studentGrade);
                insertNode(name, surname,studentGrade);
 
                break;
            case 2:
                printList();
                break;
            default:
            	printf("invalid");
                break;
        }
        
    } while (selection != 0);

	return 0;
}



