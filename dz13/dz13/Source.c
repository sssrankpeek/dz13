#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    setlocale(LC_ALL, "RUS");
    char str[100];
    int a = 0, count = 0;
    printf("������� ������\n");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    char* simvol = strtok(str, " ");
    while (simvol != NULL) 
    {
        if (strlen(simvol) == 4) count++;
        simvol = strtok(NULL, " ");
    }
    printf("\n���������� ���� ����� 4: %d", count);
}
