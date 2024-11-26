#include <stdio.h>

int main(){
	int month;
	int year;
	printf("nhap nam:");
	scanf("%d",&year);
	printf("nhap thang :");
	scanf("%d",&month);
	
	switch(month){
		case 4:
		case 6:
		case 9:
		case 11:
			printf("thang co 30 ngay \n", month);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("thang co 31 ngay \n", month);
			break;
		case 2:
			if(year%4==0&&year%100!=0||year%400==0){
				printf("thang co 29 ngay \n", month); 
			}else{
				printf("thang co 28 ngay \n", month);
			}
			break;  
		default:
		    printf("thang ko hop le \n");
		    break;
	
			
		
	}
	return 0;
	}
	
