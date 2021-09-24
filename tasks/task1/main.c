#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "russian");
	printf("Задача с нахождением массы шкафа. \n");

	float h, w, d;
	float stenka, bokovina, kryshka, dver, polka, shkaf;
	float dsp, dvp, derevo;
	int check = 0;

	while (check == 0) {
		printf("Ведите высоту (от 1.8 м до 2.2 м), ширину (от 0.8 м до 1.2 м) и глубину (от 0.5 м до 0.9 м): ");
		scanf_s("%f %f %f", &h, &w, &d);
		if (h < 1.8 || h > 2.2 || w < 0.8 || w > 1.2 || d < 0.5 || d > 0.9) printf("Повторите ввод\n");
		else check = 1;
	}
	printf("Введите плотность ДСП, ДВП и дерева: ");
	scanf_s("%f %f %f", &dsp, &dvp, &derevo);

	stenka = (h * w * 0.005) * dvp;
	bokovina = (h * d * 0.015) * dsp;
	kryshka = (w * d * 0.015) * dsp;
	dver = (h * w * 0.5 * 0.01) * derevo;
	polka = ((w - 0.03) * d * 0.015) * dsp;

	shkaf = stenka + 2 * bokovina + 2 * kryshka + 2 * dver + ((int)h / 0.4 - 1) * polka;
	printf("Масса шкафа = %.1f кг.", shkaf);

	return 0;
}