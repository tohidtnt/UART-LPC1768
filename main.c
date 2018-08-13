#include "LPC17xx.h"
#include "Serial.h"
#include "stdio.h"

int main()
{	
	while (1)
	{
		SER_Init();
		char text1[20], text2[20];
		uint16_t i_val;
		SER_Init();
		puts("\n\rEnter Your Text1:");
		scanf("%s", text1);
		printf("\n\r Text1 IS:%s\n", text1);
	}
}