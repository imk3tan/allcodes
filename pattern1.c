#include<stdio.h>
main(){
	
	int  n,i,j;
	
	printf("Enter the value");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			printf("%d",j);
		
		}
		printf("\n");
	}
	return 0;
}
/*for pattern 
*
**
***
****
*****
*/
