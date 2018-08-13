#include "LPC17xx.h"
#include "Serial.h"
#include "stdio.h"



 struct student
{
	int id;
	char *firstName;
	char *lastName;
	float gpa;

} ;


void displayStudentInformation(struct student stu)
{
	printf("Student information is :\n\r");
	printf("                    id : %d \n\r", stu.id);
	printf("            First Name : %s \n\r", stu.firstName);
	printf("             Last Name : %s \n\r", stu.lastName);
	printf("                GPA is : %.2f \n\r", stu.gpa);
  printf("---------------------------------------\n\r");
}

void displayStudentInformation2(struct student *pstu)
{
	printf("Student information is :\n\r");
	printf("                    id : %d \n\r", pstu->id);
	printf("            First Name : %s \n\r", pstu->firstName);
	printf("             Last Name : %s \n\r", pstu->lastName);
	printf("                GPA is : %.2f \n\r", pstu->gpa);
	printf("---------------------------------------\n\r");
}


int main()
{
	SER_Init();
	struct student stu1;
	stu1.firstName = "ALI";
	stu1.lastName = "ALAVI";
	stu1.id = 101;
	stu1.gpa = 18;
	struct student stu2 = { 102,"REZA","RAZAVI",18 };

	displayStudentInformation(stu1);
    displayStudentInformation(stu2);
	printf("=======call from using pointer (call by refrence)========\n\r");
	displayStudentInformation2(&stu1);
	displayStudentInformation2(&stu2);


}
