#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <time.h>
char* settime(struct tm* u)/*определение функции*//*функциия пользователя (подпрограмма). Передача параметра по указателю*/
/*Адрес фактического параметра x передается в указатель y. Для получения значения в функции пользователя требуется операция разыменования*/
{
    char s[40];
    char* tmp;
    for (int i = 0; i < 40; i++) s[i] = 0;
    int length = strftime(s, 40, "%d %B %Y %H:%M:%S, %A, %W", u);/*формат даты и времени*/
    /*%T Эквивалент %H:%M:%S*/
    tmp = (char*)malloc(sizeof(s));/*void *malloc(unsigned s)  возвращает указатель на начало области динамической памяти длиной в s байт, при неудачном завершении возвращает NULL*/
    strcpy(tmp, s);
    return(tmp);/*указатель-результат*/
}
int main()
{
    struct tm* u;/*преобразует календарное время, указанное ptm, сохраняет его в структуре tm и возвращает указатель на нее*/
    char* f;
    system("chcp 1251");
    system("cls");
    const time_t timer = time(NULL);/*конвертирует время из секунд*/
    /*time_t	Арифметический тип, подходящий для представления времени*/
    u = localtime(&timer);
    f = settime(u);
    printf("%ld соответствует ", timer);
    puts(f);
    getchar();
    return 0;
}
