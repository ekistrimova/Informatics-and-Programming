#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "russian");

  // init data
  int a, h;
  float S;

  printf("������� ��� ��������� ����������� (����� ������): ");
  scanf_s("%d %d", &a, &h);   // & - �����

  // action
  S = 0.5 * a * h;

  // result
  printf("�������: S = %.2f", S);

  return 0;
}
