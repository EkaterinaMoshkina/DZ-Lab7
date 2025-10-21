#include <stdio.h>
#include <locale.h>

int main()
{
	int a,c;
	setlocale(LC_CTYPE, "RUS");
	puts("введите возраст в месяцах");
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
        puts("возрастная категория - новорождённый");
        break;
    case 2:
        puts("возрастная категория - младенец");
        break;
    case 3:
        puts("возрастная категория - раннее детство");
        break;
    case 4:
        puts("возрастная категория - дошкольник");
        break;
    case 5:
        puts("возрастная категория - школьник");
        break;
    case 6:
        puts("возрастная категория - подросток");
        break;
    default:
        puts("ошибка");
        break;
	}
}