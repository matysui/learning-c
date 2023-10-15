#include <stdio.h>

int bino(int x,int v[],int n);

int main(){
	int arr[] = {2, 4, 6, 7, 9, 29, 45, 46, 49, 50, 51};
    printf("%d", bino(2, arr, 10)); //element,array,array's length
}

int bino(int x,int v[],int n){
	int low,high,mid ;
	low = 0;
	high =n-1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid]) {
			high = mid - 1;
		}
		else if(x > v[mid]){
			low = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
