#include <stdio.h>
#include <stdlib.h>

struct student 
{
    char name[50];
    int *marks;
    int sub;
};

int main() 
{
    struct student s;
    int choice = 1;   

    while (choice == 1) 
    {
        printf("enter student name: ");
        scanf("%s", s.name);

        printf("enter number of subjects: ");
        scanf("%d", &s.sub);

        while (s.sub <= 0) 
        {
            printf("invalid\n enter number of subjects again: ");
            scanf("%d", &s.sub);
        }

        s.marks = (int*) malloc(s.sub * sizeof(int));

        if (s.marks == NULL) 
        {
            printf("memory does not allocated\n");
            return 0;
        }

        printf("mnter marks for %d subjects:\n", s.sub);
        for (int i = 0; i < s.sub; i++) 
        {
            scanf("%d", &s.marks[i]);
        }

        float sum = 0;
        float highest = s.marks[0];

        for (int i = 0; i < s.sub; i++) 
        {
            sum += s.marks[i];
            if (s.marks[i] > highest) 
            {
                highest = s.marks[i];
            }
        }

        float percentage = sum / s.sub;

        printf("\nstudent Score Sheet\n");
        printf("name: %s\n", s.name);
        printf("total Marks: %.2f\n", sum);
        printf("highest Marks: %.2f\n", highest);
        printf("percentage: %.2f\n", percentage);

        free(s.marks);

        printf("\ndo you want to add another student?\n");
        printf("press 1 for YES, 0 for EXIT: ");
        scanf("%d", &choice);

        printf("\n----------------------------------------\n");
    }

    printf("tankyou, bye.\n");
    return 0;
}