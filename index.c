#include <stdio.h>

void modify(int s[],int n);

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]); // find the array's length
	modify(arr,n);
	printf("\n");
	for(int i = 0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void modify(int arr[],int n){
	if(n <= 1)
		return;

	int prev = arr[0];
	printf("%d x %d",arr[0],arr[1]);
	arr[0] *= arr[1];

	for(int i=1;i<n-1;i++){
		int curr = arr[i];
		printf("|%d x %d ",prev,arr[i+1]);
		arr[i] = prev * arr[i+1];
		prev = curr;
	}
	printf("|%d x %d ",prev,arr[n-1]);
	arr[n-1] = prev * arr[n-1];
}
