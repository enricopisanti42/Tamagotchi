#include "LPC17xx.h"
#include "GLCD/GLCD.h" 
#include "TouchPanel/TouchPanel.h"
#include "timer/timer.h"

void pulsanti () {
		//PULSANTI
	LCD_DrawLine(10,269,110,269,Black);
	LCD_DrawLine(10,269,10,309,Black);
	LCD_DrawLine(110,269,110,309,Black);
	LCD_DrawLine(10,309,110,309,Black);
	LCD_DrawLine(129,269,229,269,Black);
	LCD_DrawLine(129,309,229,309,Black);
	LCD_DrawLine(129,269,129,309,Black);
	LCD_DrawLine(229,269,229,309,Black);
	GUI_Text(45, 283,(uint8_t*)"MEAL",Black,White);
	GUI_Text(164, 283,(uint8_t*)"SNACK",Black,White);
}

void batteria1() {
	//BATTERIA1
	LCD_DrawLine(40,60,83,60,Black);
	LCD_DrawLine(40,80,83,80,Black);
	LCD_DrawLine(40,80,40,60,Black);
	LCD_DrawLine(83,80,83,60,Black);
	LCD_DrawLine(83,68,88,68,Black);
	LCD_DrawLine(83,68,88,72,Black);
	LCD_DrawLine(83,72,88,72,Black);
	GUI_Text(30,40,(uint8_t*) "Happiness",Black,White);
}
void batteria2(){
	//BATTERIA2
	LCD_DrawLine(160,60,203,60,Black);
	LCD_DrawLine(160,60,160,80,Black);
	LCD_DrawLine(203,60,203,80,Black);
	LCD_DrawLine(160,80,203,80,Black);
	LCD_DrawLine(203,68,208,68,Black);
	LCD_DrawLine(203,68,208,72,Black);
	LCD_DrawLine(203,72,208,72,Black);
	GUI_Text(160,40,(uint8_t*)"Satiety",Black,White);
	}

void frame1(){
	int i;
	int y;
	int z;

	LCD_DrawRectangle(170,90,10,10,White);
	LCD_DrawRectangle(190,90,10,10,White);
	LCD_DrawRectangle(160,100,50,10,White);
	LCD_DrawRectangle(170,110,30,10,White);
	LCD_DrawRectangle(180,120,10,10,White);
	
	//cancello mela
	LCD_DrawLine(50,240,70,240,White);
	LCD_DrawLine(50,260,70,260,White);
	LCD_DrawLine(50,240,50,260,White);
	LCD_DrawLine(70,240,70,260,White);
	
	for(i=51;i<69;i++){
		LCD_DrawLine(i,241,i,259,White);
	}

	LCD_DrawLine(65,240,65,230,White);
	LCD_DrawLine(65,240,50,230,White);
	LCD_DrawLine(50,230,63,240,White);
	
	//cancello figura a sinistra
	//sposto tamagochi	

	//viso
	LCD_DrawLine(35,150,85,150,White);
	LCD_DrawLine(35,200,85,200,White);
	LCD_DrawLine(35,200,35,150,White);
	LCD_DrawLine(85,200,85,150,White);
	
	//occhi
	LCD_DrawLine(45,160,50,160,White);
	LCD_DrawLine(50,160,50,165,White);
	LCD_DrawLine(45,160,45,165,White);
	LCD_DrawLine(45,165,50,165,White);
	
	LCD_DrawLine(70,160,75,160,White);
	LCD_DrawLine(70,165,75,165,White);
	LCD_DrawLine(70,165,70,160,White);
	LCD_DrawLine(75,165,75,160,White);

	//bocca
	LCD_DrawLine(45,180,75,180,White);
	LCD_DrawLine(45,185,75,185,White);
	LCD_DrawLine(45,180,45,185,White);
	LCD_DrawLine(75,185,75,180,White);

	//cancello animazione frame 2 sempre della figura a sinistra
	for(i=45;i<51;i++){
	LCD_DrawLine(i,160,i,165,White);
	LCD_DrawLine(45,165,50,165,White);
	LCD_DrawLine(45,160,45,165,White);
	LCD_DrawLine(50,160,50,165,White);
	}
	
	for(y=70;y<76;y++){
	LCD_DrawLine(y,160,y,165,White);
	LCD_DrawLine(70,165,75,165,White);
	LCD_DrawLine(70,160,70,165,White);
	LCD_DrawLine(75,160,75,165,White);
	}

	for(z=45;z<76;z++){
	LCD_DrawLine(z,180,z,185,White);
	}
	
	//cancello animazione a destra
		//cancello cioccolata 
			//tavoletta cioccolato
	LCD_DrawLine(170,240,210,240,White);
	LCD_DrawLine(170,260,210,260,White);
	LCD_DrawLine(170,240,170,260,White);
	LCD_DrawLine(210,240,210,260,White);
	
	LCD_DrawLine(180,240,180,260,White);
	LCD_DrawLine(190,240,190,260,White);
	LCD_DrawLine(200,240,200,260,White);
	LCD_DrawLine(170,250,210,250,White);
	
	
	//cancello tamagochi a dx

	//viso
	LCD_DrawLine(145,160,195,160,White);
	LCD_DrawLine(145,210,195,210,White);
	LCD_DrawLine(145,210,145,160,White);
	LCD_DrawLine(195,210,195,160,White);
	
	//occhi
	LCD_DrawLine(155,170,160,170,White);
	LCD_DrawLine(160,170,160,175,White);
	LCD_DrawLine(155,170,155,175,White);
	LCD_DrawLine(155,175,160,175,White);
	
	LCD_DrawLine(180,170,185,170,White);
	LCD_DrawLine(180,175,185,175,White);
	LCD_DrawLine(180,175,180,170,White);
	LCD_DrawLine(185,175,185,170,White);

	//bocca
	LCD_DrawLine(155,190,185,190,White);
	LCD_DrawLine(155,195,185,195,White);
	LCD_DrawLine(155,190,155,195,White);
	LCD_DrawLine(185,195,185,190,White);
	
	// cancello animazione frame2 a dx
	for(i=155;i<161;i++){
	LCD_DrawLine(i,170,i,175,White);
	LCD_DrawLine(155,175,160,175,White);
	LCD_DrawLine(155,170,155,175,White);
	LCD_DrawLine(160,170,160,175,White);
	}
	
	for(y=180;y<186;y++){
	LCD_DrawLine(y,170,y,175,White);
	LCD_DrawLine(180,175,185,175,White);
	LCD_DrawLine(180,170,180,175,White);
	LCD_DrawLine(185,170,185,175,White);
	}

	for(z=155;z<186;z++){
	LCD_DrawLine(z,190,z,195,White);
	}

	//creazione frame centrale
	for(i=100;i<106;i++){
	LCD_DrawLine(i,140,i,145,White);
	LCD_DrawLine(100,145,105,145,White);
	LCD_DrawLine(100,140,100,145,White);
	LCD_DrawLine(105,140,105,145,White);
	}
	
	for(y=125;y<131;y++){
	LCD_DrawLine(y,140,y,145,White);
	LCD_DrawLine(125,145,130,145,White);
	LCD_DrawLine(125,140,125,145,White);
	LCD_DrawLine(130,140,130,145,White);
	}

	for(z=100;z<131;z++){
	LCD_DrawLine(z,160,z,165,White);
}
	
	LCD_DrawLine(90,130,140,130,Black);
	LCD_DrawLine(90,180,140,180,Black);
	LCD_DrawLine(90,180,90,130,Black);
	LCD_DrawLine(140,180,140,130,Black);
	
	LCD_DrawLine(100,140,105,140,Black);
	LCD_DrawLine(105,140,105,145,Black);
	LCD_DrawLine(100,140,100,145,Black);
	LCD_DrawLine(100,145,105,145,Black);
	
	LCD_DrawLine(125,140,130,140,Black);
	LCD_DrawLine(125,145,130,145,Black);
	LCD_DrawLine(125,145,125,140,Black);
	LCD_DrawLine(130,145,130,140,Black);

	LCD_DrawLine(100,160,130,160,Black);
	LCD_DrawLine(100,165,130,165,Black);
	LCD_DrawLine(100,160,100,165,Black);
	LCD_DrawLine(130,165,130,160,Black);
}
 
void frame2() {
	
	int i;
	int y;
	int z;
	
	//cancello mela
	LCD_DrawLine(50,240,70,240,White);
	LCD_DrawLine(50,260,70,260,White);
	LCD_DrawLine(50,240,50,260,White);
	LCD_DrawLine(70,240,70,260,White);
	
	for(i=51;i<69;i++){
		LCD_DrawLine(i,241,i,259,White);
	}

	LCD_DrawLine(65,240,65,230,White);
	LCD_DrawLine(65,240,50,230,White);
	LCD_DrawLine(50,230,63,240,White);
	
	//cancello figura a sinistra
	//sposto tamagochi	

	//viso
	LCD_DrawLine(35,150,85,150,White);
	LCD_DrawLine(35,200,85,200,White);
	LCD_DrawLine(35,200,35,150,White);
	LCD_DrawLine(85,200,85,150,White);
	
	//occhi
	LCD_DrawLine(45,160,50,160,White);
	LCD_DrawLine(50,160,50,165,White);
	LCD_DrawLine(45,160,45,165,White);
	LCD_DrawLine(45,165,50,165,White);
	
	LCD_DrawLine(70,160,75,160,White);
	LCD_DrawLine(70,165,75,165,White);
	LCD_DrawLine(70,165,70,160,White);
	LCD_DrawLine(75,165,75,160,White);

	//bocca
	LCD_DrawLine(45,180,75,180,White);
	LCD_DrawLine(45,185,75,185,White);
	LCD_DrawLine(45,180,45,185,White);
	LCD_DrawLine(75,185,75,180,White);

	//cancello animazione frame 2 a sx
	for(i=45;i<51;i++){
	LCD_DrawLine(i,160,i,165,White);
	LCD_DrawLine(45,165,50,165,White);
	LCD_DrawLine(45,160,45,165,White);
	LCD_DrawLine(50,160,50,165,White);
	}
	
	for(y=70;y<76;y++){
	LCD_DrawLine(y,160,y,165,White);
	LCD_DrawLine(70,165,75,165,White);
	LCD_DrawLine(70,160,70,165,White);
	LCD_DrawLine(75,160,75,165,White);
	}

	for(z=45;z<76;z++){
	LCD_DrawLine(z,180,z,185,White);
	}
	
	//cancello cioccolata 
			//tavoletta cioccolato
	LCD_DrawLine(170,240,210,240,White);
	LCD_DrawLine(170,260,210,260,White);
	LCD_DrawLine(170,240,170,260,White);
	LCD_DrawLine(210,240,210,260,White);
	
	LCD_DrawLine(180,240,180,260,White);
	LCD_DrawLine(190,240,190,260,White);
	LCD_DrawLine(200,240,200,260,White);
	LCD_DrawLine(170,250,210,250,White);
	
	
	//cancello tamagochi a dx

	
	//viso
	LCD_DrawLine(145,160,195,160,White);
	LCD_DrawLine(145,210,195,210,White);
	LCD_DrawLine(145,210,145,160,White);
	LCD_DrawLine(195,210,195,160,White);
	
	//occhi
	LCD_DrawLine(155,170,160,170,White);
	LCD_DrawLine(160,170,160,175,White);
	LCD_DrawLine(155,170,155,175,White);
	LCD_DrawLine(155,175,160,175,White);
	
	LCD_DrawLine(180,170,185,170,White);
	LCD_DrawLine(180,175,185,175,White);
	LCD_DrawLine(180,175,180,170,White);
	LCD_DrawLine(185,175,185,170,White);

	//bocca
	LCD_DrawLine(155,190,185,190,White);
	LCD_DrawLine(155,195,185,195,White);
	LCD_DrawLine(155,190,155,195,White);
	LCD_DrawLine(185,195,185,190,White);
	
	// cancello animazione frame2 a dx
	for(i=155;i<161;i++){
	LCD_DrawLine(i,170,i,175,White);
	LCD_DrawLine(155,175,160,175,White);
	LCD_DrawLine(155,170,155,175,White);
	LCD_DrawLine(160,170,160,175,White);
	}
	
	for(y=180;y<186;y++){
	LCD_DrawLine(y,170,y,175,White);
	LCD_DrawLine(180,175,185,175,White);
	LCD_DrawLine(180,170,180,175,White);
	LCD_DrawLine(185,170,185,175,White);
	}

	for(z=155;z<186;z++){
	LCD_DrawLine(z,190,z,195,White);
	}
	//disegno figura principale
	LCD_DrawLine(90,130,140,130,Black);
	LCD_DrawLine(90,180,140,180,Black);
	LCD_DrawLine(90,180,90,130,Black);
	LCD_DrawLine(140,180,140,130,Black);
	
	LCD_DrawLine(100,140,105,140,Black);
	LCD_DrawLine(105,140,105,145,Black);
	LCD_DrawLine(100,140,100,145,Black);
	LCD_DrawLine(100,145,105,145,Black);
	
	LCD_DrawLine(125,140,130,140,Black);
	LCD_DrawLine(125,145,130,145,Black);
	LCD_DrawLine(125,145,125,140,Black);
	LCD_DrawLine(130,145,130,140,Black);

	LCD_DrawLine(100,160,130,160,Black);
	LCD_DrawLine(100,165,130,165,Black);
	LCD_DrawLine(100,160,100,165,Black);
	LCD_DrawLine(130,165,130,160,Black);
	
	for(i=100;i<106;i++){
	LCD_DrawLine(i,140,i,145,Black);
	LCD_DrawLine(100,145,105,145,Black);
	LCD_DrawLine(100,140,100,145,Black);
	LCD_DrawLine(105,140,105,145,Black);
	}
	
	for(y=125;y<131;y++){
	LCD_DrawLine(y,140,y,145,Black);
	LCD_DrawLine(125,145,130,145,Black);
	LCD_DrawLine(125,140,125,145,Black);
	LCD_DrawLine(130,140,130,145,Black);
	}

	for(z=100;z<131;z++){
	LCD_DrawLine(z,160,z,165,Black);
	}

	}

void handlesatiety( int countersatiety){
	int i=0;
	if(countersatiety==0){
		LCD_DrawLine(160,60,203,60,Black);
		LCD_DrawLine(160,60,160,80,Black);
		LCD_DrawLine(203,60,203,80,Black);
		LCD_DrawLine(160,80,203,80,Black);
		
		for(i=160; i<170; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=171; i<181; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}	
		for(i=182;i<192;i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=193;i<203;i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
	}
		if(countersatiety==1){
		LCD_DrawLine(160,60,203,60,Black);
		LCD_DrawLine(160,60,160,80,Black);
		LCD_DrawLine(203,60,203,80,Black);
		LCD_DrawLine(160,80,203,80,Black);
				
		for(i=160; i<170; i++){
				LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=171; i<181; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}	
		for(i=182;i<192;i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=193;i<203;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
	}
		if(countersatiety==2){
		LCD_DrawLine(160,60,203,60,Black);
		LCD_DrawLine(160,60,160,80,Black);
		LCD_DrawLine(203,60,203,80,Black);
		LCD_DrawLine(160,80,203,80,Black);
				
		for(i=160; i<170; i++){
				LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=171; i<181; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}	
		for(i=182;i<192;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
		for(i=193;i<203;i++){
			LCD_DrawLine(i,61,i,79,White);
		}		
	}
			
		if(countersatiety==3){
			
		LCD_DrawLine(160,60,203,60,Black);
		LCD_DrawLine(160,60,160,80,Black);
		LCD_DrawLine(203,60,203,80,Black);
		LCD_DrawLine(160,80,203,80,Black);
				
		for(i=160; i<170; i++){
				LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=171; i<181; i++){
			LCD_DrawLine(i,61,i,79,White);
		}	
		for(i=182;i<192;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
		for(i=193;i<203;i++){
			LCD_DrawLine(i,61,i,79,White);
		}			
	}

  	if(countersatiety==4){
			
		LCD_DrawLine(160,60,203,60,Black);
		LCD_DrawLine(160,60,160,80,Black);
		LCD_DrawLine(203,60,203,80,Black);
		LCD_DrawLine(160,80,203,80,Black);
				
		for(i=161; i<170; i++){
				LCD_DrawLine(i,61,i,79,White);
		}
		for(i=171; i<181; i++){
			LCD_DrawLine(i,61,i,79,White);
		}	
		for(i=182;i<192;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
		for(i=193;i<203;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
			
		}
	
}

void handlehappiness(int counterhappiness){
	
		int i=0;
		if(counterhappiness==0){
		LCD_DrawLine(40,60,83,60,Black);
		LCD_DrawLine(40,80,83,80,Black);
		LCD_DrawLine(40,80,40,60,Black);
		LCD_DrawLine(83,80,83,60,Black);
		
		for(i=40; i<50; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=51; i<61; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}	
		for(i=62;i<72;i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=73;i<83;i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
	}
		
		if(counterhappiness==1){
		LCD_DrawLine(40,60,83,60,Black);
		LCD_DrawLine(40,80,83,80,Black);
		LCD_DrawLine(40,80,40,60,Black);
		LCD_DrawLine(83,80,83,60,Black);
		
		for(i=40; i<50; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=51; i<61; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}	
		for(i=62;i<72;i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=73;i<83;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
	}
			
		if(counterhappiness==2){
		LCD_DrawLine(40,60,83,60,Black);
		LCD_DrawLine(40,80,83,80,Black);
		LCD_DrawLine(40,80,40,60,Black);
		LCD_DrawLine(83,80,83,60,Black);
		
		for(i=40; i<50; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=51; i<61; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}	
		for(i=62;i<72;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
		for(i=73;i<83;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
	}
			
		if(counterhappiness==3){
		LCD_DrawLine(40,60,83,60,Black);
		LCD_DrawLine(40,80,83,80,Black);
		LCD_DrawLine(40,80,40,60,Black);
		LCD_DrawLine(83,80,83,60,Black);
		
		for(i=40; i<50; i++){
			LCD_DrawLine(i,61,i,79,Black);
		}
		for(i=51; i<61; i++){
			LCD_DrawLine(i,61,i,79,White);
		}	
		for(i=62;i<72;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
		for(i=73;i<83;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
	}
			
		if(counterhappiness==4){
		LCD_DrawLine(40,60,83,60,Black);
		LCD_DrawLine(40,80,83,80,Black);
		LCD_DrawLine(40,80,40,60,Black);
		LCD_DrawLine(83,80,83,60,Black);
		
		for(i=41; i<50; i++){
			LCD_DrawLine(i,61,i,79,White);
		}
		for(i=51; i<61; i++){
			LCD_DrawLine(i,61,i,79,White);
		}	
		for(i=62;i<72;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
		for(i=73;i<83;i++){
			LCD_DrawLine(i,61,i,79,White);
		}
	}
			
}

void buttonright(){
	LCD_DrawLine(10,269,110,269,Black);
	LCD_DrawLine(10,269,10,309,Black);
	LCD_DrawLine(110,269,110,309,Black);
	LCD_DrawLine(10,309,110,309,Black);
	GUI_Text(45, 283,(uint8_t*)"MEAL",Black,White);
	LCD_DrawLine(129,269,229,269,Red);
	LCD_DrawLine(129,309,229,309,Red);
	LCD_DrawLine(129,269,129,309,Red);
	LCD_DrawLine(229,269,229,309,Red);
	GUI_Text(164, 283,(uint8_t*)"SNACK",Black,Red);
	
}
void buttonleft(){
	LCD_DrawLine(129,269,229,269,Black);
	LCD_DrawLine(129,309,229,309,Black);
	LCD_DrawLine(129,269,129,309,Black);
	LCD_DrawLine(229,269,229,309,Black);
	GUI_Text(164, 283,(uint8_t*)"SNACK",Black,White);
	LCD_DrawLine(10,269,110,269,Red);
	LCD_DrawLine(10,269,10,309,Red);
	LCD_DrawLine(110,269,110,309,Red);
	LCD_DrawLine(10,309,110,309,Red);
	GUI_Text(45, 283,(uint8_t*)"MEAL",Black,Red);

}
void meal(){
	
	//disegno mela
	int i=0;
	int y=0;
	int z=0;
  LCD_DrawLine(50,240,70,240,Black);
	LCD_DrawLine(50,260,70,260,Black);
	LCD_DrawLine(50,240,50,260,Black);
	LCD_DrawLine(70,240,70,260,Black);
	
	for(i=51;i<69;i++){
		LCD_DrawLine(i,241,i,259,Red);
	}

	LCD_DrawLine(65,240,65,230,Green);
	LCD_DrawLine(65,240,50,230,Green);
	LCD_DrawLine(50,230,63,240,Green);
	
	//cancello figura centrale
	LCD_DrawLine(90,130,140,130,White);
	LCD_DrawLine(90,180,140,180,White);
	LCD_DrawLine(90,180,90,130,White);
	LCD_DrawLine(140,180,140,130,White);
	
	LCD_DrawLine(100,140,105,140,White);
	LCD_DrawLine(105,140,105,145,White);
	LCD_DrawLine(100,140,100,145,White);
	LCD_DrawLine(100,145,105,145,White);
	
	LCD_DrawLine(125,140,130,140,White);
	LCD_DrawLine(125,145,130,145,White);
	LCD_DrawLine(125,145,125,140,White);
	LCD_DrawLine(130,145,130,140,White);

	LCD_DrawLine(100,160,130,160,White);
	LCD_DrawLine(100,165,130,165,White);
	LCD_DrawLine(100,160,100,165,White);
	LCD_DrawLine(130,165,130,160,White);
	
	for(i=100;i<106;i++){
	LCD_DrawLine(i,140,i,145,White);
	LCD_DrawLine(100,145,105,145,White);
	LCD_DrawLine(100,140,100,145,White);
	LCD_DrawLine(105,140,105,145,White);
	}
	
	for(y=125;y<131;y++){
	LCD_DrawLine(y,140,y,145,White);
	LCD_DrawLine(125,145,130,145,White);
	LCD_DrawLine(125,140,125,145,White);
	LCD_DrawLine(130,140,130,145,White);
	}

	for(z=100;z<131;z++){
	LCD_DrawLine(z,160,z,165,White);
	}

	//sposto tamagochi	

	
	//viso
	LCD_DrawLine(35,150,85,150,Black);
	LCD_DrawLine(35,200,85,200,Black);
	LCD_DrawLine(35,200,35,150,Black);
	LCD_DrawLine(85,200,85,150,Black);
	
	//occhi
	LCD_DrawLine(45,160,50,160,Black);
	LCD_DrawLine(50,160,50,165,Black);
	LCD_DrawLine(45,160,45,165,Black);
	LCD_DrawLine(45,165,50,165,Black);
	
	LCD_DrawLine(70,160,75,160,Black);
	LCD_DrawLine(70,165,75,165,Black);
	LCD_DrawLine(70,165,70,160,Black);
	LCD_DrawLine(75,165,75,160,Black);

	//bocca
	LCD_DrawLine(45,180,75,180,Black);
	LCD_DrawLine(45,185,75,185,Black);
	LCD_DrawLine(45,180,45,185,Black);
	LCD_DrawLine(75,185,75,180,Black);

	//animazione frame 2
	for(i=45;i<51;i++){
	LCD_DrawLine(i,160,i,165,Black);
	LCD_DrawLine(45,165,50,165,Black);
	LCD_DrawLine(45,160,45,165,Black);
	LCD_DrawLine(50,160,50,165,Black);
	}
	
	for(y=70;y<76;y++){
	LCD_DrawLine(y,160,y,165,Black);
	LCD_DrawLine(70,165,75,165,Black);
	LCD_DrawLine(70,160,70,165,Black);
	LCD_DrawLine(75,160,75,165,Black);
	}

	for(z=45;z<76;z++){
	LCD_DrawLine(z,180,z,185,Black);
	}
}

void snack() {
	int i=0;
	int y=0;
	int z=0;
	
	//tavoletta cioccolato
	LCD_DrawLine(170,240,210,240,Black);
	LCD_DrawLine(170,260,210,260,Black);
	LCD_DrawLine(170,240,170,260,Black);
	LCD_DrawLine(210,240,210,260,Black);
	
	LCD_DrawLine(180,240,180,260,Black);
	LCD_DrawLine(190,240,190,260,Black);
	LCD_DrawLine(200,240,200,260,Black);
	LCD_DrawLine(170,250,210,250,Black);
	
	//cancello figura centrale
	LCD_DrawLine(90,130,140,130,White);
	LCD_DrawLine(90,180,140,180,White);
	LCD_DrawLine(90,180,90,130,White);
	LCD_DrawLine(140,180,140,130,White);
	
	LCD_DrawLine(100,140,105,140,White);
	LCD_DrawLine(105,140,105,145,White);
	LCD_DrawLine(100,140,100,145,White);
	LCD_DrawLine(100,145,105,145,White);
	
	LCD_DrawLine(125,140,130,140,White);
	LCD_DrawLine(125,145,130,145,White);
	LCD_DrawLine(125,145,125,140,White);
	LCD_DrawLine(130,145,130,140,White);

	LCD_DrawLine(100,160,130,160,White);
	LCD_DrawLine(100,165,130,165,White);
	LCD_DrawLine(100,160,100,165,White);
	LCD_DrawLine(130,165,130,160,White);
	
	for(i=100;i<106;i++){
	LCD_DrawLine(i,140,i,145,White);
	LCD_DrawLine(100,145,105,145,White);
	LCD_DrawLine(100,140,100,145,White);
	LCD_DrawLine(105,140,105,145,White);
	}
	
	for(y=125;y<131;y++){
	LCD_DrawLine(y,140,y,145,White);
	LCD_DrawLine(125,145,130,145,White);
	LCD_DrawLine(125,140,125,145,White);
	LCD_DrawLine(130,140,130,145,White);
	}

	for(z=100;z<131;z++){
	LCD_DrawLine(z,160,z,165,White);
	}
	
	//sposto tamagochi
	for(i=155;i<161;i++){
	LCD_DrawLine(i,170,i,175,White);
	LCD_DrawLine(155,175,160,175,White);
	LCD_DrawLine(155,170,155,175,White);
	LCD_DrawLine(160,170,160,175,White);
	}
	
	for(y=180;y<186;y++){
	LCD_DrawLine(y,170,y,175,White);
	LCD_DrawLine(180,175,185,175,White);
	LCD_DrawLine(180,170,180,175,White);
	LCD_DrawLine(185,170,185,175,White);
	}

	for(z=155;z<186;z++){
	LCD_DrawLine(z,190,z,195,White);
	}
	
	//viso
	LCD_DrawLine(145,160,195,160,Black);
	LCD_DrawLine(145,210,195,210,Black);
	LCD_DrawLine(145,210,145,160,Black);
	LCD_DrawLine(195,210,195,160,Black);
	
	//occhi
	LCD_DrawLine(155,170,160,170,Black);
	LCD_DrawLine(160,170,160,175,Black);
	LCD_DrawLine(155,170,155,175,Black);
	LCD_DrawLine(155,175,160,175,Black);
	
	LCD_DrawLine(180,170,185,170,Black);
	LCD_DrawLine(180,175,185,175,Black);
	LCD_DrawLine(180,175,180,170,Black);
	LCD_DrawLine(185,175,185,170,Black);

	//bocca
	LCD_DrawLine(155,190,185,190,Black);
	LCD_DrawLine(155,195,185,195,Black);
	LCD_DrawLine(155,190,155,195,Black);
	LCD_DrawLine(185,195,185,190,Black);
	
	// animazione frame2
	for(i=155;i<161;i++){
	LCD_DrawLine(i,170,i,175,Black);
	LCD_DrawLine(155,175,160,175,Black);
	LCD_DrawLine(155,170,155,175,Black);
	LCD_DrawLine(160,170,160,175,Black);
	}
	
	for(y=180;y<186;y++){
	LCD_DrawLine(y,170,y,175,Black);
	LCD_DrawLine(180,175,185,175,Black);
	LCD_DrawLine(180,170,180,175,Black);
	LCD_DrawLine(185,170,185,175,Black);
	}

	for(z=155;z<186;z++){
	LCD_DrawLine(z,190,z,195,Black);
	}

}

void tastoreset(){
	
		//cancello seconda animazione
	LCD_DrawLine(210,130,239,130,White);
	LCD_DrawLine(210,180,239,180,White);
	LCD_DrawLine(210,130,210,180,White);

	LCD_DrawLine(220,140,225,140,White);
	LCD_DrawLine(225,140,225,145,White);
	LCD_DrawLine(220,140,220,145,White);
	LCD_DrawLine(220,145,225,145,White);
	
	LCD_DrawLine(220,160,239,160,White);
	LCD_DrawLine(220,165,239,165,White);
	LCD_DrawLine(220,160,220,165,White);
	
	//stampo tasto reset e cancello i tasti meal e snack
	LCD_DrawLine(10,269,110,269,White);
	LCD_DrawLine(10,269,10,309,White);
	LCD_DrawLine(110,269,110,309,White);
	LCD_DrawLine(10,309,110,309,White);
	LCD_DrawLine(129,269,229,269,White);
	LCD_DrawLine(129,309,229,309,White);
	LCD_DrawLine(129,269,129,309,White);
	LCD_DrawLine(229,269,229,309,White);
	GUI_Text(45, 283,(uint8_t*)"MEAL",White,White);
	GUI_Text(164, 283,(uint8_t*)"SNACK",White,White);	
	
	LCD_DrawLine(10,269,229,269,Red);
	LCD_DrawLine(10,269,10,309,Red);
	LCD_DrawLine(10,309,229,309,Red);
	LCD_DrawLine(229,269,229,309,Red);
	GUI_Text(100, 283,(uint8_t*)"RESET",Black,White);
	
	GUI_Text(90,180,(uint8_t*)"THE END",Red,White);
}



void addio1(){
	int i=0;
	int y=0;
	int z=0;
	//cancellazione frame centrale
	LCD_DrawLine(90,130,140,130,White);
	LCD_DrawLine(90,180,140,180,White);
	LCD_DrawLine(90,180,90,130,White);
	LCD_DrawLine(140,180,140,130,White);
	
	LCD_DrawLine(100,140,105,140,White);
	LCD_DrawLine(105,140,105,145,White);
	LCD_DrawLine(100,140,100,145,White);
	LCD_DrawLine(100,145,105,145,White);
	
	LCD_DrawLine(125,140,130,140,White);
	LCD_DrawLine(125,145,130,145,White);
	LCD_DrawLine(125,145,125,140,White);
	LCD_DrawLine(130,145,130,140,White);

	LCD_DrawLine(100,160,130,160,White);
	LCD_DrawLine(100,165,130,165,White);
	LCD_DrawLine(100,160,100,165,White);
	LCD_DrawLine(130,165,130,160,White);
	
		for(i=100;i<106;i++){
	LCD_DrawLine(i,140,i,145,White);
	LCD_DrawLine(100,145,105,145,White);
	LCD_DrawLine(100,140,100,145,White);
	LCD_DrawLine(105,140,105,145,White);
	}
	
	for(y=125;y<131;y++){
	LCD_DrawLine(y,140,y,145,White);
	LCD_DrawLine(125,145,130,145,White);
	LCD_DrawLine(125,140,125,145,White);
	LCD_DrawLine(130,140,130,145,White);
	}

	for(z=100;z<131;z++){
	LCD_DrawLine(z,160,z,165,White);
	}
	
	//prima animazione
	LCD_DrawLine(150,130,200,130,Black);
	LCD_DrawLine(150,180,200,180,Black);
	LCD_DrawLine(150,180,150,130,Black);
	LCD_DrawLine(200,180,200,130,Black);
	
	LCD_DrawLine(160,140,165,140,Black);
	LCD_DrawLine(165,140,165,145,Black);
	LCD_DrawLine(160,140,160,145,Black);
	LCD_DrawLine(160,145,165,145,Black);
	
	LCD_DrawLine(185,140,190,140,Black);
	LCD_DrawLine(185,145,190,145,Black);
	LCD_DrawLine(185,145,185,140,Black);
	LCD_DrawLine(190,145,190,140,Black);

	LCD_DrawLine(160,160,190,160,Black);
	LCD_DrawLine(160,165,190,165,Black);
	LCD_DrawLine(160,160,160,165,Black);
	LCD_DrawLine(190,165,190,160,Black);
	
	

}

void addio2() {
	
	//cancello prima animazione
	LCD_DrawLine(150,130,200,130,White);
	LCD_DrawLine(150,180,200,180,White);
	LCD_DrawLine(150,180,150,130,White);
	LCD_DrawLine(200,180,200,130,White);
	
	LCD_DrawLine(160,140,165,140,White);
	LCD_DrawLine(165,140,165,145,White);
	LCD_DrawLine(160,140,160,145,White);
	LCD_DrawLine(160,145,165,145,White);
	
	LCD_DrawLine(185,140,190,140,White);
	LCD_DrawLine(185,145,190,145,White);
	LCD_DrawLine(185,145,185,140,White);
	LCD_DrawLine(190,145,190,140,White);

	LCD_DrawLine(160,160,190,160,White);
	LCD_DrawLine(160,165,190,165,White);
	LCD_DrawLine(160,160,160,165,White);
	LCD_DrawLine(190,165,190,160,White);	
	
	//seconda animazione
	LCD_DrawLine(210,130,239,130,Black);
	LCD_DrawLine(210,180,239,180,Black);
	LCD_DrawLine(210,130,210,180,Black);

	LCD_DrawLine(220,140,225,140,Black);
	LCD_DrawLine(225,140,225,145,Black);
	LCD_DrawLine(220,140,220,145,Black);
	LCD_DrawLine(220,145,225,145,Black);
	
	LCD_DrawLine(220,160,239,160,Black);
	LCD_DrawLine(220,165,239,165,Black);
	LCD_DrawLine(220,160,220,165,Black);
	
}


void coccole1(){
	// disegna cuore rosso 
	LCD_DrawRectangle(170,100,10,10,Red);
	LCD_DrawRectangle(190,100,10,10,Red);
	LCD_DrawRectangle(160,110,50,10,Red);
	LCD_DrawRectangle(170,120,30,10,Red);
	LCD_DrawRectangle(180,130,10,10,Red);
	
}

void coccole2(){
		
	LCD_DrawRectangle(170,100,10,10,White);
	LCD_DrawRectangle(190,100,10,10,White);
	LCD_DrawRectangle(160,110,50,10,White);
	LCD_DrawRectangle(170,120,30,10,White);
	LCD_DrawRectangle(180,130,10,10,White);
	
	
	LCD_DrawRectangle(170,90,10,10,Red);
	LCD_DrawRectangle(190,90,10,10,Red);
	LCD_DrawRectangle(160,100,50,10,Red);
	LCD_DrawRectangle(170,110,30,10,Red);
	LCD_DrawRectangle(180,120,10,10,Red);
	
}


void disegnavolume(int valore)
{
		GUI_Text(120,5,(uint8_t*)"volume:",Black,White);
		if(valore==0){
		LCD_DrawRectangle(200,5,10,20,White);
		LCD_DrawRectangle(212,5,10,20,White);
		LCD_DrawRectangle(224,5,10,20,White);
	}
	
		if(valore==1){
		LCD_DrawRectangle(200,5,10,20,Black);
		LCD_DrawRectangle(212,5,10,20,White);
		LCD_DrawRectangle(224,5,10,20,White);
	}
	
		if(valore==2){
		LCD_DrawRectangle(200,5,10,20,Black);
		LCD_DrawRectangle(212,5,10,20,Black);
		LCD_DrawRectangle(224,5,10,20,White);
	}
	
		if(valore==3){
		LCD_DrawRectangle(200,5,10,20,Black);
		LCD_DrawRectangle(212,5,10,20,Black);
		LCD_DrawRectangle(224,5,10,20,Black);
	}
	
}


