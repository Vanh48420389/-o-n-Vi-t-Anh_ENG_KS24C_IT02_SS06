#include <stdio.h>

int main(){
	int n;
	int sum;
	printf("nhap vao 5 so nguyen:\n");
	for(int i=1;i<=5;i++){
		printf("nhap so thu %d: ",i);
	    scanf("%d", &n);
	    
	    if(n%2!=0){
	    	sum +=n;
		}
	}
	printf("tong cac so le la : %d", sum);
	return 0; 
} 
