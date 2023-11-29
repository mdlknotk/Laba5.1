//ЮФУ, ИКТИБ, МОП ЭВМ
//Программирование и основы теории алгоритмов
//Лаба4.2 - Текстовые и бинарные файлы
//КТбо1-6, Кравченко Александр Андреевич
//TaskB
//29.11.2023

#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

int main() {
	FILE* fin = fopen("input.txt", "rt");
	if (!fin) exit(1);
	int n,m, s = 1;
	char list[200][100];
	(void)fscanf(fin, "%d", &n);
	for(int i =0;i<n+1;i++)
		fgets(list[i],100, fin);
	(void)fscanf(fin, "%d", &m);
	printf("%d", m);
	fclose(fin);
}
