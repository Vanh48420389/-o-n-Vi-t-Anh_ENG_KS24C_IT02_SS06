#include <stdio.h>

int main(){
//	khai bao va nhap gia tri cho n 
    int n;
	printf("nhap gia tri :");
	scanf("%d",&n); 
	 
//  khai bao f1,f2,fn
    int f1=0;
	int f2=1;
	int fn;
	 
    printf("gia tri ");
//  in f1,f2 
    printf("%d %d ",f1 ,f2);
 
//  su dung vong lap for de tao ra day fibonacci
    for(int i=0; i<n; i++){
    	 printf("%d ",f1);
    	fn=f1+f2;
		f1=f2;
		f2=fn; 
	} 
//  gan fn=f1+f2 ; f1=f2; f2=fn 
//  in ket qua
//  ket thuc chuong trinh
 
	return 0; 
} 
