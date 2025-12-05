#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int *marks;
    int sub;
};

int main() {
    struct student s;
    int choice = 0;

    while (1) 
    {

        printf("\nenter student name:\n ");
        scanf("%s", s.name);

        
        while (1)
        {
            printf("enter number of subjects:\n ");
            
            if (scanf("%d", &s.sub) == 1)
            {
                if(s.sub > 0)
                {
                    printf("valid entry\n");
                    break;  
                }
                else
                {
                    printf("Must be positive number!\n");
                }
            }
            else
            {
                printf("Invalid entry... please enter integer only.\n");
                while(getchar()!='\n'); 
            }
        }

        s.marks = (int*) malloc(s.sub * sizeof(int));
        if(s.marks == NULL){
            printf("Memory allocation failed!\n");
            return 0;
        }

        printf("enter marks for %d subjects:\n", s.sub);
        for(int i=0;i<s.sub;i++)
            scanf("%d",&s.marks[i]);

        float sum=0, highest=s.marks[0];

        for(int i=0;i<s.sub;i++){
            sum += s.marks[i];
            if(s.marks[i]>highest) highest=s.marks[i];
        }

        float percentage = sum/s.sub;

        do
        {
            printf("\nMenu:\n");
            printf("1. show total marks\n");
            printf("2. show highest marks\n");
            printf("3. show percentage\n");
            printf("4. enter another student\n");
            printf("5. exit program\n");
            printf("enter your choice: ");
            scanf("%d",&choice);

            switch(choice)
            {
                case 1: 
                printf("Total Marks = %.2f\n",sum);
                break;
                case 2: 
                printf("Highest Marks = %.2f\n",highest);
                break;
                case 3:
                printf("Percentage = %.2f%%\n",percentage);
                break;
                case 4: 
                break; 
                case 5: 
                printf("tank you, bye.\n"); 

                free(s.marks); 
                return 0;

                default: 
                printf("invalid try again.\n");
            }

        }while(choice!=4);

        free(s.marks);
        printf("\n----------------------------------------\n");
    }
}

