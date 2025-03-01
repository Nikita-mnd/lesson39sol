#include "task.h"

/*	Task 03. The Number of tens [����� ��������]
*
*	���� ����� ����� N, ���������� ����� �������� � ��� (������������� ����� �����).
*	���� ������������� ����� ���, �� ����� �������, ��� ����� �������� ����� ����.
*
*	������ ������� ������ [input]
*	�� ���� ������ ����� ����� ����� N � ��������� �++ ���� int.
*
*	������ �������� ������ [output]
*	�������� ���� ����� ����� - ����� �� ������.
*
*	[sample function input 1]: 456
*	[sample function output 1]: 5
*
*	[ input 2]: -1234567
*	[output 2]: 6
*
*	[ input 3]: 1000
*	[output 3]: 0
*
*	[ input 4]: 9
*	[output 4]: 0
*/

int task03(int number) {
	if (number < 10 && number > -10) {
		return 0;
	} if (number < 0) {
		number *= -1;
	}
	number = (number % 100) / 10;
	return number;
}