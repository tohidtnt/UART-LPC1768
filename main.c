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


}
