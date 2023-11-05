#include<stdio.h>

typedef struct pokemon{ //struct pokemon{ ....
	char name[15];
	int speed;
	int hp;
	int attack;
}pokemon;		// }
void main(){
	int i;
   pokemon poke[3];			// struct pokemon poke[3];

	for(i=0 ;i<3 ; i++){
		printf("Enter name: ");
		scanf("%s",poke[i].name);
		
		printf("\nEnter speed: ");
		scanf("%d",&poke[i].speed);
		printf("\nEnter HP: ");
		scanf("%d",&poke[i].hp);
		printf("\nEnter attack: ");
		scanf("%d\nk",&poke[i].attack);
	}
	
	for(i=0 ; i<3 ; i++){
		printf("\nName: %s",poke[i].name);
		printf("\nSpeed: %d",poke[i].speed);
			printf("\nHP: %d",poke[i].hp);
				printf("\nAttack: %d\n\n",poke[i].attack);
	}
	
}
