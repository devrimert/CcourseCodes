/*  Devrim Mert Yöyen (151805004) and Ümran Donak (151805022)'s
Mini Project for Algorithm and Programming (CSE102)
Adnan Menderes University Faculty of Engineering;
Computer Engineering Department;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

struct studentData			
{
 char name[21]; char surname[21]; char special[31]; int number;

}student; 



void createRegister()
{
	FILE *fPtr;


	if ((fPtr = fopen("students.txt", "ab+")) == NULL) 
	{
		puts("File cannot be opened.");
	}
	else
	{
		puts("Enter student's number, name, surname and specialization :");
		scanf("%d%20s%20s%30s", &student.number, student.name, student.surname, student.special); 
		fwrite(&student, sizeof(struct studentData), 1, fPtr);					
		puts("Registration successful.");

	}
	fclose(fPtr);
}

void searchByNumber()
{
	int request;
	printf("Enter the student number: ");
	scanf("%d", &request);
	FILE *fPtr;
	if ((fPtr = fopen("students.txt", "rb+")) == NULL) 
	{
		puts("File cannot be opened.");
	}
	else
	{
		while (fread(&student, sizeof(struct studentData), 1, fPtr))
		{
			if (student.number == request)
			{
				printf("Student found. Student information:\nStudent number : %d\tName : %s\tSurname : %s\tSpecialization : %s\n\n", student.number, student.name, student.surname, student.special);
				break;
			}
			
		}
		fclose(fPtr);
		puts("");
	}
	}
	
	void editRegister()
{
	FILE *fPtr;
	if ((fPtr = fopen("students.txt", "rb+")) == NULL)
	{
		puts("File cannot be opened.");
	}
	else
	{
		int intrequest;
		int record = 0; 
		printf("Enter the student's number: ");
		scanf("%d", &intrequest);
		while (fread(&student, sizeof(struct studentData), 1, fPtr))
		{
			if (student.number == intrequest) 
			{
				puts("Student found.");
				printf("Student number : %d\tName : %s\tSurname : %s\nSpecialization : %s", student.number, student.name, student.surname, student.special);
				puts("Enter the new values of student's number, name, surname and Specialition: ");
				scanf("%d%s%s%s", &student.number, student.name, student.surname, student.special);
				fseek(fPtr, sizeof(struct studentData) * record, SEEK_SET); 
				fwrite(&student, sizeof(struct studentData), 1, fPtr);
				puts("Update successful.\n");
				break;
			}
			record++; 

		}
		fclose(fPtr);


	}
}

void deleteRegister()
{
	FILE *fPtr, *temp;
	if ((fPtr = fopen("students.txt", "rb")) == NULL)
	{
		puts("File cannot be opened.");
	}
	else
	{
		int request;
		temp = fopen("Temp.txt", "wb+");
		printf("Enter the student's number you want to delete: ");
		scanf("%d", &request);
		while (fread(&student, sizeof(struct studentData), 1, fPtr))
		{
			if (student.number != request)
			{
				fwrite(&student, sizeof(struct studentData), 1, temp);
			}
		}
		fclose(fPtr);
		fclose(temp);
		remove("students.txt");
		rename("Temp.txt", "students.txt");
		puts("Delete successful.");
	}
}

void sortRegisters()
{
	FILE *fPtr;
	if ((fPtr = fopen("students.txt", "rb+")) == NULL)
	{
		puts("File cannot be opened");
	}
	else
	{
		puts("\nStudent number\tStudent name\tSpecialization\n");
		
	}
}

void listRegisters()
{
	FILE *fPtr;
	if ((fPtr = fopen("students.txt", "rb+")) == NULL)
	{
		puts("File cannot be opened");
	}
	else
	{
		puts("\nStudent number\tStudent name\tSpecialization\n");
		int i = 1;
		while (fread(&student, sizeof(struct studentData), 1, fPtr))
		{
			printf("%d. %d\t%s %s\t%s\t\n", i, student.number, student.name, student.surname, student.special);
			i++;	
		}
		printf("\n**********************************************\n\n");
		fclose(fPtr);
	}

}

int main(void) {

	unsigned int process;
	
	puts("\t\tStudent \n\t     Management System\n");
	puts("1. New Register\n2. Search by ID Number\n3. Edit a Register\n4. Delete a Register\n5. Sort by ID Number\n6. List Registers\n7. Exit");
	puts("\nPlease choose one process: ");
	scanf_s("%u", &process);

	while (1)
		{
		switch (process)
		{
		case 1:
			createRegister();
			break;

		case 2:
			searchByNumber();
			break;
		case 3:
			editRegister();
			break;
		case 4:
			deleteRegister();
			break;
		case 5:
			sortRegisters();
			break;
		case 6:
			listRegisters();
			break;
		case 7:
			puts("Exiting...");
			exit(EXIT_SUCCESS);
			break;
		default:
			puts("Invalid process.");
			break;
		}
		puts("1. Create Register\n2. Search by Student Number\n3. Edit Register\n4. Delete Regiter\n5. Sort by ID Number\n6. List Registers\n7. Exit");
		printf("\nPlease choose one process: ");
		scanf_s("%d", &process);	
		}	
	}
