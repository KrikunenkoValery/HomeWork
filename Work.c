#include <locale.h>
#include <stdio.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("����:\n%12d \n%12d \n\t________ \n�����:\n\t%+08.3f", 3, 333, 3./333);
	getchar();
}