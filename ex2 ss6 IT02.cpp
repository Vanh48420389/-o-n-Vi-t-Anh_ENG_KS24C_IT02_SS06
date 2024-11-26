#include <stdio.h>

int main(){
	int n;
	int sole=0,sochan=0;
	printf("nhap vao 5 so nguyen :\n");
	for(int i=1;i<=5;i++){
		printf("nhap so thu %d:", i);
	    scanf("%d", &n);
	    if(n%2==0){
		    sochan++;
	    }else{
	    	sole++;
		}
    }
		  printf("so so le la :%d",sole); 
		  printf("so so chan la:%d",sochan);
	return 0;
   }
