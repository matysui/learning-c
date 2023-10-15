#include <stdio.h>

int bino(int x,int v[],int n);

int main(){
	int arr[] = {2, 4, 6, 7, 9, 29, 45, 46, 49, 50, 51};
    printf("%d\n", bino(2, arr, 10)); //element,array,array's length
}

int bino(int x,int v[],int n){
	int low,high,mid ;
	low = 0;
	high =n-1;
	mid = (low + high) / 2;
	while (low < high && x != v[mid]) {
		if (x > v[mid]) {
			low = mid + 1;
		}else {
			high = mid - 1;
		}
		mid = (low + high);
	}
	if (x ==v[mid]) {
		return mid;
	}else {
		return -1;
	}
}
