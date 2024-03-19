/*********************************************************************************************************
**--------------File Info---------------------------------------------------------------------------------
** File name:           IRQ_timer.c
** Last modified Date:  2014-09-25
** Last Version:        V1.00
** Descriptions:        functions to manage T0 and T1 interrupts
** Correlated files:    timer.h
**--------------------------------------------------------------------------------------------------------
*********************************************************************************************************/
#include "lpc17xx.h"
#include "timer.h"
#include "../grafica.h"
#include "../GLCD/GLCD.h"
#include "../RIT/RIT.h"
#include "../ADC/adc.h"
#include <stdio.h> 

/******************************************************************************
** Function name:		Timer0_IRQHandler
**
** Descriptions:		Timer/Counter 0 interrupt handler
**
** parameters:			None
** Returned value:		None
**
******************************************************************************/

extern volatile int select;
extern volatile int left;
extern volatile int right;
extern volatile int touch;
extern volatile double volume;


uint16_t SinTable[45] =                                       /* ÕýÏÒ±í                       */
{
    410, 467, 523, 576, 627, 673, 714, 749, 778,
    799, 813, 819, 817, 807, 789, 764, 732, 694, 
    650, 602, 550, 495, 438, 381, 324, 270, 217,
    169, 125, 87 , 55 , 30 , 12 , 2  , 0  , 6  ,   
    20 , 41 , 70 , 105, 146, 193, 243, 297, 353
};

void TIMER0_IRQHandler (void)
{
	static int secondi=0;
	static int minuti=0;
	static int ore=0;
	static int sechappiness=0;
	static int secsatiety=0;
	static int countersatiety=0;
	static int counterhappiness=0;
	static int flagtama=0;
	static int flagtama2=0;
	static int countercoccole=0;
	static int flagcoccole=0;


	
	// Al fine di ottenere un risultato che fosse il più reale possibile, ho notato che realizzando una figura più semplice, il tempo
	// di gioco procedeva più velocemente infatti per la realizzazione del video non mi è stato necessario velocizzarlo.
	
	//secsatiety-> counter di secondi per la satiety
	//sechappiness-> counter di secondi per la happiness 
	//coutersatiety -> è il valore che mi fa capire a che livello è la batteria satiety ed è il parametro della funzione handlesatiety
	//couterhappiness -> è il valore che mi fa capire a che livello è la batteria happiness ed è il parametro della funzione handlehappiness
	//flagtama -> è un flag che viene utilizzato affinchè l'animazione di uscita addio1 venga mostrata solo una volta
	//flagtama2 -> è un flag che viene utilizzato affinchè l'animazione di uscita addio2 venga mostrata solo una volta
	// ore,minuti e secondi -> servono invece per gestire quello che è il tempo di gioco.
	
	// quando o la variabile counterhappiness o la variabile countersatiety arriva al valore 4, significa che la partita è terminata; viene
	// quindi stampato il tempo di gioco e qualora si volesse riniziare una nuova partita basterà fare in modo che select diventi pari a 1
	// premendo il tasto centrale.
	
	// durante la selezione dei tasti meal o snack viene disabilitato il RIT in modo che non possa essere selezionato nessun altro tasto mentre
	// il tamagotchi sta mangiando il meal o lo snack che sia.
	
	
	char vett[10];
	/* Match register 0 interrupt service routine */
	if (LPC_TIM0->IR & 01){
		
		if( (counterhappiness==4) || (countersatiety==4)){
			handlehappiness(counterhappiness);
			handlesatiety(countersatiety);
			sprintf(vett," %02d:%02d:%02d ",ore,minuti,secondi);
			GUI_Text(80,27,(uint8_t *) vett, Black,White);
			
			if(flagtama==0){
				
				reset_timer(1);
				init_timer(1,0,0,3,2040);
				enable_timer(1);
				
				addio1();
				
				disable_timer(1);
				flagtama=1;
			}
			
			if(select==1){
				secondi=0;
				minuti=0;
				ore=0;
				counterhappiness=0;
				countersatiety=0;
				sechappiness=0;
				secsatiety=0;
				flagtama=0;
				flagtama2=0;
        select=0;
				right=0;
        left=0;
				touch=0;
				countercoccole=0;
				flagcoccole=0;
				LCD_Clear(White);
			}
			
		}

		else{
		//select=0;
		sprintf(vett," %02d:%02d:%02d ",ore,minuti,secondi);
		GUI_Text(80,27,(uint8_t *) vett, Black,White);
		secondi++;
			
		frame1();
		if( (left==0) && (right==0)){
		pulsanti();
		}
		batteria1();
		batteria2();
		
		sechappiness++;
		secsatiety++;
			
		if(secondi==60){
			secondi=0;
			minuti++;
		}

		if(minuti==60){
			minuti=0;
			ore++;
		}
	

		handlehappiness(counterhappiness);
		handlesatiety(countersatiety);
		
		if(flagcoccole == 0){
			frame1();
		}
		
					else
			{
				countercoccole++;
				reset_timer(1);
				init_timer(1,0,0,3,1125);
				enable_timer(1);
				coccole2();
				disable_timer(1);

				if (countercoccole>=2)
				{		
					countercoccole=0;
						flagcoccole=0;
						reset_RIT();
						enable_RIT();
				}
			}
			
			
			

	
   		if(left==1){
       buttonleft();
           if(select==1){
						pulsanti();
						 
						reset_timer(1);
						init_timer(1,0,0,3,1592);
						enable_timer(1);
						  
						meal();
						 disable_RIT();
							if(countersatiety>0){
								countersatiety--;
							}
						disable_timer(1);
						select=0; 
						left=0;
						secsatiety=0;
						handlesatiety(countersatiety);
						reset_RIT();
						enable_RIT();
									
					}
			}
		
				
			if(right==1){
				buttonright();
         if(select==1){
					pulsanti();
					 
					reset_timer(1);
					init_timer(1,0,0,3,1592);
					enable_timer(1);
					  
					snack();
					disable_RIT();
						if(counterhappiness>0){
								counterhappiness--;
						}
						disable_timer(1);
						select=0;
						right=0;						
						sechappiness=0;
						handlehappiness(counterhappiness);
						reset_RIT();
						enable_RIT();
					}
			}
		
						if(touch==1){
						disable_RIT();
							coccole1();
				if (counterhappiness>0)
						{
						counterhappiness--;
						}
						
							handlehappiness(counterhappiness);
							touch=0;
							flagcoccole=1;
						
					
			}

			
		if(secsatiety==5){
			countersatiety++;
			secsatiety=0;
		}
		
		if(sechappiness==5){ //se sono passati 5 secondi dall'ultima volta che la batteria è stata decrementata
			counterhappiness++;
			sechappiness=0;
		}
	}
		
		
		LPC_TIM0->IR = 1;			/* clear interrupt flag */
	}

		/* Match register 1 interrupt service routine */
	else{ 
		if(LPC_TIM0->IR & 02){
	
			if(flagtama==1){
				if(flagtama2==0){
				addio2();
				tastoreset();
				flagtama2=1;
			}
		
			if(select==1){
				secondi=0;
				minuti=0;
				ore=0;
				counterhappiness=0;
				countersatiety=0;
				sechappiness=0;
				secsatiety=0;
				flagtama=0;
				flagtama2=0;
        select=0;
				right=0; 
				left=0;
				LCD_Clear(White);
			}
		}
			else {
						
		if(flagcoccole == 0){
				frame2(); // mostro il primo frame dell'animazione
			}
				
				
			}
		LPC_TIM0->IR =  2 ;			/* clear interrupt flag */	
	}
	return;
	}
}	



/******************************************************************************
** Function name:		Timer1_IRQHandler
**
** Descriptions:		Timer/Counter 1 interrupt handler
**
** parameters:			None
** Returned value:		None
**
******************************************************************************/
void TIMER1_IRQHandler (void)
{
static int ticks=0;
	if (LPC_TIM1->IR & 01)
	{
		
	/* DAC management */	
	LPC_DAC->DACR = (SinTable[ticks]<<6)*volume;
	ticks++;
	if(ticks==45) ticks=0;
		LPC_TIM1->IR = 1;			/* clear interrupt flag */
	}
  LPC_TIM1->IR = 1;			/* clear interrupt flag */
  return;
}

/******************************************************************************
** Function name:		Timer2_IRQHandler
**
** Descriptions:		Timer/Counter 2 interrupt handler
**
** parameters:			None
** Returned value:		None
**
******************************************************************************/
void TIMER2_IRQHandler (void)
{
 static int ticks=0;
	if (LPC_TIM2->IR & 01)
	{
		
	/* DAC management */	
	LPC_DAC->DACR = (SinTable[ticks]<<6)*volume;
	ticks++;
	if(ticks==45) ticks=0;
		LPC_TIM1->IR = 1;			/* clear interrupt flag */
	}
  LPC_TIM2->IR = 1;			/* clear interrupt flag */
  return;
}

void TIMER3_IRQHandler (void)
{
	static int ticks=0;
	if (LPC_TIM3->IR & 01)
	{
		
	/* DAC management */	
	LPC_DAC->DACR = (SinTable[ticks]<<6)*volume;
	ticks++;
	if(ticks==45) ticks=0;
		LPC_TIM3->IR = 1;			/* clear interrupt flag */
	}

  LPC_TIM3->IR = 1;			/* clear interrupt flag */
  return;
}





/******************************************************************************
**                            End Of File
******************************************************************************/
