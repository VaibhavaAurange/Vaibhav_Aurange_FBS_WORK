// 1. Student (rollNo, name, marks) with function
#include<stdio.h>
struct Student
{
	int rollno;
	char name[20];
	int marks;
};
struct Student Storestudent();
void displayStudent(struct Student );
void main()
{
	struct Student s1,s2;
	s1=Storestudent();
	s2=Storestudent();
	
	displayStudent(s1);
	displayStudent(s2);
}
struct Student Storestudent()
{
	struct Student stud;
	printf("Enter student information:");
	printf("Enter rollno: ");
	scanf("%d",&stud.rollno);
	printf("Enter name of students: ");
	scanf("%s",&stud.name);
	printf("Enter marks: ");
	scanf("%d",&stud.marks);
	return stud;	
}
void displayStudent(struct Student stud)
{
	printf("Student information =\n");
	printf("rollno:%d\n",stud.rollno);
	printf("name:%s\n",stud.name);
	printf("marks:%d\n",stud.marks);
	
}