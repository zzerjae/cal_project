#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define N 60
int main(void){
	
	char a[N]={0}, b[N]={0}, c[N]={0};
	int i=0, t=0, str_a, str_b;
	
	scanf("%s",a);
	str_a=strlen(a);

	scanf("%s",b);
	str_b=strlen(b);
	
	for(i=str_a-1;i>=0;i--){
		printf("%c",a[i]);}
	printf("\n");
	
	for(t=str_b-1;t>=0;t--){
		printf("%c",b[t]);}
	printf("\n");

	for(i=str_a-1, t=str_b-1;i>=0||t>=0;i--,t--){
		if(i>=t){
			c[i]=a[i]+b[t];
			
			/* if(c[i]>9){
				c[i+1]=c[i]/10;
				c[i]=c[i]%10;} */
			
			if(b[t]==0){
				printf("%d",c[i]-48);}
			else printf("%d",c[i]-96);}
		
		else {
			c[t]=a[i]+b[t];

			if(a[i]==0){
				printf("%d",c[t]-48);}
			else printf("%d",c[t]-96);}
	}
	printf("\n");
	
	
	return 0;
}
