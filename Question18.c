#include <stdio.h>

int main(){
    int writtenTest, labExams, assignment;
    float overallGrade;
    printf("Enter the marks scored in Written test\n");
    scanf("%d",&writtenTest);
    printf("Enter the marks scored in Lab exam\n");
    scanf("%d",&labExams);
    printf("Enter the marks scored in Assignments\n");
    scanf("%d",&assignment);
    overallGrade = (float)(writtenTest*70)/100+(float)(labExams*20)/100+(float)(assignment*10)/100;
    printf("Grade of the Student is %0.1f",overallGrade);
    return 0;
}