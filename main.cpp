  #include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    char name[20];
    int eng;
    int math;
    int phys;
    char grade;
};
void input(struct student s[]){
    for (int i = 0; i < 4; i++)
    {
        printf("Student name %d:\n", i + 1);
        printf("Name: "); fflush(stdin);
        gets(s[i].name);
        printf("English: "); fflush(stdin);
        scanf("%d", &s[i].eng);
        printf("Maths: "); fflush(stdin);
        scanf("%d", &s[i].math);
        printf("Physics: "); fflush(stdin);
        scanf("%d", &s[i].phys);
    } 
} 
void output(struct student s[])
    {for (int i = 0; i < 4; ++i) {
        printf("Name: %s\n", s[i].name);
        printf("Eng: %d\n", s[i].eng);
        printf("Math: %d\n", s[i].math);
        printf("Phys: %d\n", s[i].phys);   
        printf("Grade: %c", s[i].grade);
        printf("\n");

}
    }
void grade(struct student s[])
{
    float mean;
    for (int i = 0; i < 4; i++)
    {
        mean = (s[i].eng + s[i].math + s[i].phys) / 3;
    if (90 <= mean && mean <= 100)
    {
        s[i].grade = 'S';
    }
    else if (80 <= mean && mean < 90)
    {
        s[i].grade = 'A';
    }
    else if (70 <= mean && mean < 80)
    {
        s[i].grade = 'B';
    }
    else if (60 <= mean && mean < 70)
    {
        s[i].grade = 'C';
    }   
    else s[i].grade = 'D';

    }
    
};
int main(){
    struct student s[100] ;
    input(s);
    grade(s);
    output(s);
    
}
