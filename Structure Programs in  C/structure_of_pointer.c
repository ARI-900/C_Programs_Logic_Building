#include<stdio.h>
typedef struct pokemon{
	char name[15];
	int hp;
	int speed;
	int attack;
	char tier;
}pokemon;

void main(){
	pokemon poke;
	pokemon *p = &poke;
	
	p -> hp = 70;
	p -> attack = 110;
	
		printf("HP: %d",p->hp);
	printf("attack: %d",(*p).attack);
	
	

	
	
}
