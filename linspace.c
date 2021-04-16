#include<stdio.h>
#include<stdlib.h>

typedef struct{
	float first;
	float last;
	int num;
}Data;

void linspace(float first, float last, int num){
	Data *info = (Data*)malloc(sizeof(Data));

	info->first = first;
	info->last = last;
	info->num = num;

	float gap = (last - first)/(float)num;
	float vet[num];

	for(int i=0; i<=num; i++){
		if(i == 0){
			vet[0] = first;
			printf("%.2f\n", vet[0]);
		}else{
			vet[i] = vet[i-1] + gap;
			printf("%.2f\n", vet[i]);
		}
	}

	free(info);
}

int main(){

	linspace(1.15, 103, 57);

return 0;
}
