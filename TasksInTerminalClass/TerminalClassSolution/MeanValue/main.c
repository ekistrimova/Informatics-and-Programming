#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "russian");

  // init data
  int a, b, c;
  float mean;

  printf("������� ��� ����� (����� ������): ");
  scanf_s("%d %d %d", &a, &b, &c);   // & - �����

  // action
  mean = a * b * c / 3.0;

  // result
  printf("������� ��������������: %.2f", mean);

  return 0;
}
