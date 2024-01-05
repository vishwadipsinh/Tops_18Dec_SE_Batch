/*
19).  patterns : 7 
*/

#include<stdio.h>
int main (){
	int i,j,k,a,b,c;
	a=1;
	for(i=1;i<=10;i++){
		if(i!=1){a=a+(29-2*i);b=28;}
		switch(i){
			case 1 : {
				for(j=1;j<=10;j++){
					(j!=10)? (printf("   %d ",a)):(printf("  %d",a));
					a++;			
				}
				printf("\n");
				break;
			}
			case 2 : {
				for(j=1;j<=10;j++){
					c=34;
					if(j!=10){
						printf("  %d ",a);
						a++;
					}else{
						a=a-c;
						printf("  %d ",a);
						a++;
					}
				}
				printf("\n");
				break;
			}
			case 3 : {
				c=26;
				for(j=1;j<=10;j++){
					if(j<2){
						printf("  %d ",a);
						a=a+b;
						a++;
					}else if(j>=2 && j<9){
						printf("  %d ",a);
						a++;
					}else if(j>=9){
						a=a-c;
						printf("  %d ",a);
						c=c+8;
						a++;
					}
				}
				printf("\n");
				break;
			}
			case 4 : {
				c=18;
				for(j=1;j<=10;j++){
					if(j<3){
						printf("  %d ",a);
						a=a+b;
						b=b-8;
						a++;
					}else if(j>=3 && j<8){
						printf("  %d ",a);
						a++;
					}else if(j>=8){
						a=a-c;
						printf("  %d ",a);
						c=c+8;
						a++;
					}
				}
				printf("\n");
				break;
			}
			case 5 : {
				c=10;
				for(j=1;j<=10;j++){
					if(j<4){
						printf("  %d ",a);
						a=a+b;
						b=b-8;
						a++;
					}else if(j>=4 && j<7){
						printf("  %d ",a);
						a++;
					}else if(j>=7){
						a=a-c;
						printf("  %d ",a);
						c=c+8;
						a++;
					}
				}
				printf("\n");
				break;
			}
			case 6 : {
				c=2;
				for(j=1;j<=10;j++){
					if(j<5){
						printf("  %d ",a);
						a=a+b;
						b=b-8;
						a++;
					}else if(j>=5 && j<6){
						printf(" %d ",a);
						a++;
					}else if(j>=6){
						a=a-c;
						printf("  %d ",a);
						c=c+8;
						a++;
					}
				}
				printf("\n");
				break;
			}
			case 7 : {
				c=18;
				for(j=1;j<=10;j++){
					if(j<4){
						printf("  %d ",a);
						a=a+b;
						b=b-8;
						a++;
					}else if(j>=4 && j<8){
						printf("  %d ",a);
						a--;
					}else if(j>=8){
						if(j==8){a=a+2;}
						a=a-c;
						printf("  %d ",a);
						c=c+8;
						a++;
					}
				}
				printf("\n");
				break;
			}
			case 8 : {
				c=26;
				for(j=1;j<=10;j++){
					if(j<3){
						printf("  %d ",a);
						a=a+b;
						b=b-8;
						a++;
					}else if(j>=3 && j<9){
						printf("  %d ",a);
						a--;
					}else if(j>=9){
						if(j==9){a=a+2;}
						a=a-c;
						printf("  %d ",a);
						c=c+8;
						a++;
					}
				}
				printf("\n");
				break;
			}
			case 9 : {
				c=32;
				for(j=1;j<=10;j++){
					if(j<2){
						printf("  %d ",a);
						a=a+b;
						b=b-8;
						a++;
					}else if(j>=2 && j<10){
						printf("  %d ",a);
						a--;
					}else{
						a=a-c;
						printf("  %d ",a);
						c=c+8;
						a++;
					}
				}
				printf("\n");
				break;
			}
			case 10 : {
				for(j=1;j<=10;j++){
					printf("  %d ",a);
					a--;
				}
				printf("\n");
				break;
			}	
		}
	}
}
