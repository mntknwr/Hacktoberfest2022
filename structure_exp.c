#include <stdio.h>
#include<string.h>
struct student 
{
    char name[50];
    int roll;
    float percentage;
    struct college
    {
        char Id[20];
        char Clg_name[30];
    }clg;
    
} record[10];

int main() 
{
    int i,n;

    printf("Enter the number of students\n");
    scanf("%d",&n);

    printf("Enter information of students:\n");
    for (i = 0; i < n; ++i) 
    {
        record[i].roll = i + 1;
        printf("\nFor roll number %d,\n", record[i].roll);
        printf("Enter first name: ");
        scanf("%s", record[i].name);
        printf("Enter percentage: ");
        scanf("%f", &record[i].percentage);
        printf("Enter college id: ");
        scanf("%s", &record[i].clg.Id);
        printf("Enter college name: ");
        scanf("%s", &record[i].clg.Clg_name);
    }
    printf("\nDisplaying Information:\n");
    // displaying information
    for (i = 0; i < n; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(record[i].name);
        printf("percentage: %.1f", record[i].percentage);
        puts(record[i].clg.Id);
        puts(record[i].clg.Clg_name);
        printf("\n");
    }
    return 0;
}
