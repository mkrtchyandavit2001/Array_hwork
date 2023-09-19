#include <stdio.h>

int main() {

    int size = 0;

    printf("Enter arrays' size : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter arrays' vaues:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
	printf("\n");	
    for (int i = size - 1; i >= 0; i--) {
        printf("%d \n", arr[i]);
    }

    return 0;
}
