#include <REG8253.H>

void wait (void)  {                   /* wait function */
  ;                                   /* only to delay for LED flashes */
}

void main (void)  {
  unsigned int i;                     /* Delay var */
  unsigned char j;                    /* LED var */

  while (1) 
		{                         /* Loop forever */
    for (j=0x01; j< 0x80; j<<=1)  {   /* Blink LED 0, 1, 2, 3, 4, 5, 6 */
      P0 = j;                         /* Output to LED Port */
      for (i = 0; i < 10000; i++)  {  /* Delay for 10000 Counts */
       wait ();                       /* call wait function */
      }
    }

    for (j=0x80; j> 0x01; j>>=1)  {   /* Blink LED 6, 5, 4, 3, 2, 1 */
      P0 = j;                         /* Output to LED Port */
      for (i = 0; i < 10000; i++)  {  /* Delay for 10000 Counts */
       wait ();                       /* call wait function */
      }
    }
  }
}