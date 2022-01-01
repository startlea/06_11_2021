#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{

    int GraphDriver; /* Karta graficzna */
    int GraphMode;   /* Tryb karty graficznej */
    int ErrorCode;   /* Numer błedu */
    int i = 0;

    printf("Inicjalizacja sterownika BGI...\n");
    GraphDriver = DETECT; /* Autodedekcja sterownika karty graficznej      */

    initgraph(&GraphDriver, &GraphMode, "");
    ErrorCode = graphresult(); /* Czytaj wynik inicjalizacji*/

    if (ErrorCode != grOk)
    { /* Bład przy inicjalizacji    */
        printf(" Błąd systemu BGI: %s\n", grapherrormsg(ErrorCode));
        exit(1);
    }

    setgraphmode(GraphMode);
    settextstyle(5, 0, 9);
    outtextxy(20, 20, "Kocham Cie");
    outtextxy(20, 100, "IMIE DZIEWCZYNY !!!");
    settextstyle(5, 0, 5);
    outtextxy(100, 300, "Twoj IMIE !!! ");
    delay(1000);
    for (i = 0; i < 50; i++)
    {
        setcolor(random(16));
        circle(500, 400, i);
        sound(random(400));
        delay(random(80));
        nosound();
    }
    system("PAUSE");
    closegraph();
    sound(200);
    delay(80);
    sound(300);
    delay(20);
    sound(300);
    delay(200);
    sound(100);
    delay(20);
    sound(100);
    delay(80);
    sound(400);
    nosound;
}