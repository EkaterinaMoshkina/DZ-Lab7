#include <stdio.h>
#include <locale.h>

int main()
{
	int a,c;
	setlocale(LC_CTYPE, "RUS");
	puts("������� ������� � �������");
	scanf("%d",&a);

    if (a <= 2) 
        {
        c = 1;
        }
    else if (a <= 12) 
             {
        c = 2;
             }
    else if (a <= 36) 
             {
        c = 3;
             }
    else if (a <= 84) 
             {
        c = 4;
             }
    else if (a <= 156) 
             { 
        c = 5;
             }
    else if (a <= 204) 
             {
        c = 6;
             };
	


	switch (c)
	{
    case 1:
        puts("���������� ��������� - ������������");
        break;
    case 2:
        puts("���������� ��������� - ��������");
        break;
    case 3:
        puts("���������� ��������� - ������ �������");
        break;
    case 4:
        puts("���������� ��������� - ����������");
        break;
    case 5:
        puts("���������� ��������� - ��������");
        break;
    case 6:
        puts("���������� ��������� - ���������");
        break;
    default:
        puts("������");
        break;
	}
}