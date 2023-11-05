#include<stdio.h>
#include<string.h>
typedef struct pokemon{ //struct pokemon{ ....
	char name[15];
	int speed;
	int hp;
	int attack;
}pokemon;
void cal(pokemon p[]){
	puts(p[0].name);
	printf("%d\t%d\t%d\n\n",p[0].hp,p[0].speed,p[0].attack);
	
	puts(p[1].name);
	printf("%d\t%d\t%d",p[1].hp,p[1].speed,p[1].attack);
}
void main(){
	pokemon poke[2];
	
	strcpy(poke[0].name,"Mewtwo");
	poke[0].speed = 130;
	poke[0].attack = 180;
	poke[0].hp = 120;
	
	strcpy(poke[1].name,"Charizard");
	poke[1].speed = 120;
	poke[1].attack = 110;
	poke[1].hp = 160;

	cal(poke);	
	
}	
