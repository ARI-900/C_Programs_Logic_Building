#include<stdio.h>
struct pokemon{
	int speed;
	int hp;
	int attack;
	char tier;
	
}poke;
struct legendaray_pokemon{
	int special_attack;
	struct pokemon x;
}legend;
void main(){
	printf("Enter special attack: ");
	scanf("%d",&legend.special_attack);
	printf("Enter speed: ");
	scanf("%d",&legend.x.speed);
	
	printf("Special attack: %d\nSpeed: %d",legend.special_attack,legend.x.speed);
}
