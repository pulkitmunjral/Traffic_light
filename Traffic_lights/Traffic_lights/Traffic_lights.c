#include<avr/io.h>
#include<util/delay.h>
void main()
{
DDRA=0b11111111;
DDRB=0b11111111;
DDRC=0b11111111;
DDRD=0b11111111;
while(1)
{int a[10]={
0b00111111,
0b00000110,
0b11011011,
0b11001111,
0b11100110,
0b11101101,
0b11111101,
0b00000111,
0b11111111,
0b11100111,
},i,j,k,l,p,m,
b[1]={0b01110000},
c[1]={0b01000001},
d[1]={0b01000000};

   for(i=5;i>=0;i--)
      {for(j=9;j>=0;j--)
	     {for(l=0;l<6;l++)
{PORTC=0b11110111;
 PORTB=a[j];
_delay_ms(45);
PORTC=0b11111011;
PORTB=a[i];
_delay_ms(50);
PORTD=0b11111110;
}
}
}
PORTD=0b11111101;
_delay_ms(1000);
PORTD=0b11111100;
for(i=0;i<1;i++)
 {for(j=0;j<1;j++)
   {for(k=3;k>=0;k--)
      {for(l=9;l>=1;l--) 
        {for(m=0;m<6;m++)
	{
PORTC=0b11111110;
PORTA=b[i];
PORTB=0b00000000;
_delay_ms(12);
PORTC=0b11111101;
PORTA=c[j];
PORTB=0b01000000;
_delay_ms(12);
PORTC=0b11111011;
PORTA=0b00000000;
PORTB=a[k];
_delay_ms(12);
PORTC=0b11110111;
PORTB=a[l];
_delay_ms(18);
}
}
}
}
}

PORTD=0b11111101;
_delay_ms(1000);
PORTD=0b11111100;

}
}
