#include<stdio.h>
struct studentInfo
{
    char name[20];
    int score;
};
struct studentInfo stu[20],*pstu;
void sort(struct studentInfo *unsorted, int studentNumber);
int main()
{
    //Define the total number inputed.
    printf("Please input the number of students' information you want to input. No more than 20 students.\n");
    int inputNumber;
    scanf("%d",&inputNumber);
    //Input student information one by one.
    int i;
    for (i=0;i<inputNumber;i++)
    {
        printf("Input the name of student %d.\n",i+1);
        scanf("%s",stu[i].name);
        printf("Input the score of student %d.\n",i+1);
        scanf("%d",&stu[i].score);
    }
    //Store information to file "student.txt".
    FILE *student;
    student=fopen("student.txt","w+");
    if (student==NULL)
        printf("File open failed, please try again.\n");
    for (i=0;i<inputNumber;i++)
    {
        fprintf(student,"%s,%d\n",stu[i].name,stu[i].score);
    }
    fclose(student);
    printf("File \"student.txt\" created successfully and information stored successfully.\n");
    //Sorting...
    printf("Begin sort...\n");
    sort(stu,inputNumber);
    printf("Sort finished. Now store sorted result to new file.\n");
    //Save sorted information to file "sorted.txt".
    FILE *sorted;
    sorted=fopen("sorted.txt","w+");
    if (sorted==NULL)
        printf("File open failed, please try again.\n");
    for (i=0;i<inputNumber;i++)
    {
        fprintf(sorted,"%s,%d\n",stu[i].name,stu[i].score);
    }
    fclose(sorted);
    printf("File \"sorted.txt\" created successfully and sorted information stored successfully.\n");
    return 0;
}
void sort(struct studentInfo *unsorted, int studentNumber)
{
    struct studentInfo temp;
    int i,j;
    for(i = studentNumber - 1;i > 0;i--)
    {
        for(j = 0;j < i; j++ )
        {
            if(unsorted[j].score < unsorted[j+1].score)
            {
                temp = unsorted[j];
                unsorted[j] = unsorted[j+1];
                unsorted[j+1] = temp;
            }
        }
    }
}