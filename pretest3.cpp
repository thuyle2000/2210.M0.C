#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct EMPLOYEE
{
	int Emp_No;
	char Emp_Name[30];
	int Base_Salary;
	int Worked_Days;
};
typedef struct EMPLOYEE EMP;

void Q1();
void Q2();

int main()
{
	system("cls");
	int option = 0;
	do
	{
		printf("\n\n ***** MENU ***** \n");
		printf("1. Question 1\n");
		printf("2. Question 2\n");
		printf("3. Quit program\n");

		printf("input option [1-3]:");
		scanf("%d", &option);

		switch (option)
		{
		case 1:
			Q1();
			break;
		case 2:
			Q2();
			break;
		case 3:
			exit(0);
		default:
			printf("WRONG OPTION!!");
			break;
		}
	} while (1);
}

void Q1()
{
	system("cls");
	printf("===question 1===\n");
	int n;

	do
	{
		printf("please enter a number from 1 to 20: ");
		scanf("%d", &n);
		if (n < 1 || n > 20)
		{
			printf("invalid number!!! \n");
			continue;
		}
		break;
	} while (1==1);

	double kq = 1;
	for (int i = 1; i <= n; i++)
	{
		kq = kq * i;
	}
	printf(" >> giai thua = %0.f\n", kq);
}


void Q2()
{
	system("cls");

	int n;
	do
	{
		printf(" Nhap so luong nhan vien [2-100]: ");
		scanf("%d", &n);

		if (n >= 2 && n <= 100)
		{
			break;
		}
		printf(" >> Nhap sai. Vui long nhap lai.\n");
	} while (1==1);



	EMP e[n];
	printf(" == Nhap danh sach nhan vien == \n");
	for (int i = 0; i < n; i++)
	{
		printf(" Nhap thong tin nhan vien thu %d:\n", i + 1);
		printf("\t Ma so: ");  scanf("%d", &e[i].Emp_No);
		fflush(stdin);

		printf("\t Ten: ");  scanf("%[^\n]s", &e[i].Emp_Name);
		printf("\t Luong: "); scanf("%d", &e[i].Base_Salary);
		printf("\t Ngay lam viec: "); scanf("%d", &e[i].Worked_Days);
	}

	printf("\n\nDanh sach bang luong nhan vien:\n");
	printf("%-3s %-30s %-10s %-10s %-10s\n",
		   "Ma so", "Ho ten", "Luong CB", "Ngay LV", "Luong");

	for (int i = 0; i < n; i++)
	{
		printf(" %3d %-30s %10d %10d %10d\n",
			   e[i].Emp_No, e[i].Emp_Name, e[i].Base_Salary,
			   e[i].Worked_Days, e[i].Base_Salary * e[i].Worked_Days);
	}

	fflush(stdin);
	char ten[30];
	int countTen = 0;
	printf("\n\n Nhap ten nhan vien muon tim: ");
	scanf("%[^\n]s", ten);

	printf("\n Danh sach nhan vien co ten %s: \n", ten);
	for (int i = 0; i < n; i++)
	{
		if (strstr(e[i].Emp_Name, ten))
		{
			printf(" %3d %-30s %10d %10d %10d\n",
				   e[i].Emp_No, e[i].Emp_Name, e[i].Base_Salary,
				   e[i].Worked_Days, e[i].Base_Salary * e[i].Worked_Days);
			countTen++;
		}
	}
	if (countTen == 0)
	{
		printf(" >> Khong co nhan vien co ten %s: \n", ten);
	}

	int p = 0;
	for (int i = 1; i < n; i++)
	{
		if (e[p].Base_Salary * e[p].Worked_Days < e[i].Base_Salary * e[i].Worked_Days)
		{
			p = i;
		}
	}

	printf("\n\n Nhan vien co luong thuc te cao nhat: \n");
	printf("\t Ma so: %d \n", e[p].Emp_No);
	printf("\t Ten: %s \n", e[p].Emp_Name);
	printf("\t Luong CB: %d \n", e[p].Base_Salary);
	printf("\t Ngay lam viec: %d \n", e[p].Worked_Days);
	printf("\t Luong thuc te: %d \n", e[p].Base_Salary * e[p].Worked_Days);
}
