#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <locale.h>

void main()
{
/*	//1.	����� �������� ������� y = 3x6 ?6x2 ?7 ��� ������ �������� x.

	int x = 0, y = 0;

	printf("x = ");
	scanf("%d", &x);

	y = 3 * pow(x,6) - 6 * pow(x,2) - 7;

	printf("y = %d\n", y);*/

//---------------------------------------------------------------------------------------------------------------------
	
/*	//2.	����� �������� ������� y = 4(x?3)6 ? 7(x?3)3 + 2 ��� ������ �������� x.
	
	int x = 0, y = 0;

	printf("x = ");
	scanf("%d", &x);

	y = 4* pow((x-3), 6) - 7 * pow(x-3, 2) + 2;

	printf("y = %d\n", y);*/

//---------------------------------------------------------------------------------------------------------------------

/*	//3.	���� ����� A. ��������� A8, ��������� ��������������� ���������� � ��� �������� ���������.
	//��� ����� ��������������� �������� A2, A4, A8. ������� ��� ��������� ������� ����� A.

	int A, A1;

	printf("A = ");
	scanf("%d", &A);

	A1 = A * A;
	printf("A^2 = %d\n", A1);
	A1 = A1 * A1;
	printf("A^4 = %d\n", A1);
	A1 = A1 * A1;
	printf("A^8 = %d\n", A1);*/

//---------------------------------------------------------------------------------------------------------------------

/*	//4.	���� ����� A. ��������� A15, ��������� ��� ��������������� ���������� � ���� �������� ���������.
	//��� ����� ��������������� �������� A2, A3, A5, A10, A15. ������� ��� ��������� ������� ����� A.
	int a, b, c;

	printf("A = ");
	scanf("%d", &a);

	b = a*a;
	printf("A^2 = %d\n", b);
	c = a*b;
	printf("A^3 = %d\n", c);
	b = c*b;
	printf("A^5 = %d\n", b);
	c = b*b;
	printf("A^10 = %d\n", c);
	b = b*c;
	printf("A^15 = %d\n", b);*/

//---------------------------------------------------------------------------------------------------------------------

	//5.	���� �������� ����������� T � �������� ����������. ���������� �������� ���� �� ����������� � �������� �������. 
	//����������� �� ������� TC � ����������� �� ���������� TF ������� ��������� ������������: TC = (TF ? 32)�5/9.

	float Tf, Tc;

	printf("Tf = ");
	scanf("%f", &Tf);

	Tc = (Tf - 32) * 5 / 9;

	printf("Tc  = %f\n", Tc);

}