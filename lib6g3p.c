#include "lib6g3p.h"
#include <stdio.h>
#include <stdlib.h>
#include "mcc_generated_files/mcc.h"
#define Display PORTB

void Supercar()
{
    char i=0;  //inizializzo i
    Display=0b00000001;  //accendo l'ultimo led
    for(i=0;i<7;i++)  //ciclo che si ripete 7 volte
    {
        Display=Display<<1;  //scalo di 1 a sinistra lo stato dei led
        __delay_ms(100);  //aspetto 100ms
    }
    for(i=0;i<7;i++)  //ciclo che si ripete 7 volte
    {
        Display=Display>>1;  //scalo di 1 a destra lo stato dei led
        __delay_ms(100);  //aspetto 100ms
    }
}
void PalleR()
{
    char a=0b00010000;  //inizializzo a
    char b=0b00001000;  //inizializzo b
    char i=0;  //inizializzo i
    for(i=0;i<3;i++)  //ciclo che si ripete 3 volte
       {
            Display=a|b;  //il valore del PORTB è dato dalla somma di a e b
            a=a<<1;  //scalo di 1 a sinistra il valore binario di a
            b=b>>1;  //scalo di 1 a sinistra il valore binario di b
            __delay_ms(50);  //aspetto 50ms
       }
      for(i=0;i<3;i++)  //ciclo che si ripete 3 volte
      {
            Display=a|b;  //il valore del PORTB è dato dalla somma di a e b
            a=a>>1;  //scalo di 1 a sinistra il valore binario di a
            b=b<<1;  //scalo di 1 a sinistra il valore binario di b
            __delay_ms(50);  //aspetto 50ms
      }  
}
void PariDispari()
{
    char i=0;  //inizializzo i
        Display=0b00000010;  //accendo il penultimo led
        __delay_ms(200);  //aspetto 200ms
        for(i=0;i<3;i++)  //ciclo che si ripete 3 volte
        {
            Display=Display<<2;  //scalo a sinistra di 2 il valore del PORTB
            __delay_ms(200);  //aspetto 200ms
        }
        Display=0b01000000;  //accendo il secondo led
        __delay_ms(200);  //aspetto 200ms
        for(i=0;i<3;i++)  //ciclo che si ripete 3 volte
        {
            Display=Display>>2;  //scalo a destra di 2 il valore del PORTB
            __delay_ms(200);  //aspetto 200ms
        }
}
void LampSfas ()  //funzione che simula le lucine di natale che si accendono e spengono
{
    Display=0b01010101; //accendo tutti i Led pari
    __delay_ms(200);
    Display=0b10101010;  // accendo tutti i LED dispari
    __delay_ms(200);
}

void QuattroQuarti() //riproduce visivamente un tempo 4/4
{
    Display=0b00001111;
    __delay_ms(250);
    Display=0b00000000;
    __delay_ms(100);
    Display=0b11110000;
    __delay_ms(250);
    Display=0b00000000;
    __delay_ms(100);
    Display=0b11110000;
    __delay_ms(250);
    Display=0b00000000;
    __delay_ms(100);
    Display=0b11110000;
    __delay_ms(250);
    Display=0b00000000;
    __delay_ms(100);
}

void Caricamento() //riproduce nella striscia di led una barra di caricamento
{
    Display=0b00000000;
    __delay_ms(200);
    Display=0b10000000;
    __delay_ms(200);
    Display=0b11000000;
    __delay_ms(200);
    Display=0b11100000;
    __delay_ms(200);
    Display=0b11110000;
    __delay_ms(200);
    Display=0b11111000;
    __delay_ms(200);
    Display=0b11111100;
    __delay_ms(200);
    Display=0b11111110;
    __delay_ms(200);
    Display=0b11111111;
    __delay_ms(200);
    
}

