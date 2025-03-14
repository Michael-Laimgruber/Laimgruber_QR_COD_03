#include <stdio.h>

int main() 
{

    int start_number, multiplication, steps;
    int result;

        // Eingabe

        printf("Hallo, hier koennen Sie einen schoenen Turm berechnen. Viel Spass.\n\nBitte geben Sie eine Start Nummer ein.");
        printf("Geben Sie eine Zahl ein: ");
        scanf_s("%d", &start_number);
        printf("Geben Sie den Multiplikationsfaktor ein: ");
        scanf_s("%d", &multiplication);
        printf("Geben Sie Anzahl der Schritte ein: ");
        scanf_s("%d", &steps);

  
        // copy start_number value into result 


        result = start_number;

        //Multiplikation
        for (int i = 0; i < steps; i++)
        {

            result = result * multiplication;

            printf("%d * %d = %d\n", result / multiplication, multiplication, result);

        }

        //Division
        for (int i = 0; i < steps; i++)
        {

            result = result / multiplication;

            printf("%d / %d = %d\n", result * multiplication, multiplication, result);


        }


    return 0;
}



/*


Programm 12: - Turmrechnung

Schreiben Sie ein Programm, das eine Turmrechnung durchführt.

Eine Turmrechnung besteht aus einer gleich großen 	Anzahl von Multiplikationen und Divisionen

Beispiel:
	5 * 7 = 35
	35 * 7 = 245
	245 * 7 = 1715
	1715 * 7 = 12005
	12005 / 7 = 1715
	1715 / 7 = 245
	245 / 7 = 35
	35 / 7 = 5


Achten Sie darauf, dass die beiden Zahlen als auch die Anzahl der Rechnungen eingeben werden können– bei obigem Beispiel sind die Zahlen 5 und 7 und die Anzahl der steps ist 4!


*/