#include <stdio.h>

int main(){

	int size = 0;

	printf("Enter the array's size: ");
	scanf("%d", &size);

	int arr[size];

	printf("Enter arrays' vlues \n");
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];

	for(int i = 0; i < size; ++i){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}

	printf("%d", max + min);

return 0;
}
