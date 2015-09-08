#include <stdio.h>
#include <stdlib.h>

int is_unique(int* position, int spot, int index);
int main(void)
{
	int position[12];
	int i; 

	for(i = 0; i < 12; i++){
		do{
			position[i] = (rand()%12) + 1;
		}
		while(!is_unique(position, position[i], i));
		printf("%d\n", position[i]);
	}
	return 0;
}

int is_unique(int* position, int spot, int index)
{
	int i;
	for(i = 0; i < index; i++){
		if(spot == position[i]){
			return 0;
		}
	}

	return 1;
}

