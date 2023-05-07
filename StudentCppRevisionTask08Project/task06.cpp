﻿#include "tasks.h"

/*	Task 06. The Average Number [среднее число]
 *
 *	Даны три различных числа. Определите среднее по величине число.
 *
 *	Примечание
 *	1) Не забудьте про "защиту от дурака": все три числа должны быть различными.
 *
 *	Формат входных данных [input]
 *	На вход даётся три различных целых числа в диапазоне типа int.
 *
 *	Формат выходных данных [output]
 *	Должно быть возвращено среднее по величине число или ноль, если среди чисел есть одинаковые.
 *
 *	[ input 1]: 1 2 3
 *	[output 1]: 2
 *
 *	[ input 2]: 17 23 11
 *	[output 2]: 11
 *
 *	[ input 3]: 7 7 7
 *	[output 3]: 0
 *
 *	[ input 4]: 5 7 7
 *	[output 4]: 0
 */

int task06(int a, int b, int c) {
	if (a > b)
	{
		swap(a, b); 
	}
	if (b > c)
	{
		swap(c, b);
	}
	if (a > b)
	{
		swap(a, b); 
	}

	return a == b or b == c or a == c ? 0 : b;
}