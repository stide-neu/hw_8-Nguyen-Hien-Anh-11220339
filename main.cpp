/******************************************************************************
Copy đoạn code vào file này
**Lưu ý không đổi tên file hoặc định dạng file
**Nộp thành công sẽ có tích xanh ở ngoài repository
*******************************************************************************/
#include <stdio.h>

 #include <stdio.h>
 
struct students {
char name[20];
int eng;
int math;
int phys;
int score1;
int score2;
int score3;
float subject1;
float subject2;
float subject3;
float mean;
char grade;
}
void student_name(students*s){
struct students students[5];
 
for (int i = 0; i < 5; ++i) {
printf("Student name %d: ", i+1);
scanf("%s", students[i].name);
printf("English : ");
scanf("%d", &students[i].eng);
printf("Math: ");
scanf("%d", &students[i].math);
printf("Physics: ");
scanf("%d", &students[i].phys);
}
}


void student_information(students*s) {
 struct students s[4];
printf("Enter information for each student:\n");
for (int i = 0; i < 4; i++) {
printf("\nStudent %d:\n", i+1);
printf("Name: ");
scanf("%s", s[i].name);
printf("Score 1: ");
scanf("%d", &s[i].score1);
printf("Score 2: ");
scanf("%d", &s[i].score2);
printf("Score 3: ");
scanf("%d", &s[i].score3);
}
}
void student_grade(){
 
int main() {
struct Student student;
printf("Enter student name: ");
scanf("%s", student.name);
printf("Enter marks for Subject 1: ");
scanf("%f", &student.subject1);
printf("Enter marks for Subject 2: ");
scanf("%f", &student.subject2);
printf("Enter marks for Subject 3: ");
scanf("%f", &student.subject3);
student.mean = (student.subject1 + student.subject2 + student.subject3) / 3.0;
if (student.mean >= 90.0) {
student.grade = 'A';
}
else if (student.mean >= 80.0) {
student.grade = 'B';
}
else if (student.mean >= 70.0) {
student.grade = 'C';
}
else if (student.mean >= 60.0) {
student.grade = 'D';
}
else {
student.grade = 'F';
}
printf("\nStudent Name: %s\n", student.name);
printf("Subject 1: %d\n", student.grade);
printf("Subject 2: %d\n", student.grade);
printf("Subject 3: %d\n", student.grade);
}
