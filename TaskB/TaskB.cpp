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
	int n, m, s = 1;
	char list[200][100];
	char mutual[200][100];
	char alsofriends[200][100];
	int alsocount = 0;
	char tmp[100];
	int fnd = 0;
	(void)fscanf(fin, "%d\n", &n);
	for (int i = 0; i < n + 1; i++)
		fgets(list[i], 100, fin);
	(void)fscanf(fin, "%d\n", &m);
	for (int i = 0; i < m; i++) {
		fgets(tmp, 100, fin);
		for (int i = 0; i < n; i++)
		{
			if (tmp == list[i])
				fnd = 1;
			if (fnd == 0)

		}
	}

	fclose(fin);
}
