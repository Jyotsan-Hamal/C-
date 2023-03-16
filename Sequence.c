#include<math.h>
#include <stdio.h>
int main(){
	int a[45],n,r,lol,bol,q;
	
	printf("how many terms are there in sequence:");
	scanf("%d",&n);
	//findings no. of terms in sereis
	printf("write the sequence numbers:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	int sum,num,joe,boe,bo,j,man;
	//common term for airthmetic series
	sum=a[1]-a[0];
	num=a[2]-a[1];
	//common ratio for geometric series
	joe=a[1]/a[0];
	boe=a[2]/a[1];
	
if(sum==num){
	printf("it's airthmetic series\n");
	printf("enter \n 1 for sum \n 2 for any term number\n");
	scanf("%d",&j);
	switch(j){
		case 1:
			printf("to how much term you want sum\n");
			scanf("%d",&bo);
			man= (bo/2)*(2*a[0]+(bo-1)*sum);
			printf("sum to the term of %d is %d",bo,man);
	break;
	case 2:
		
		printf("which term do you want \n");
		scanf("%d",&r);
		
		lol=a[0]+(r-1)*num;
		printf("%d term is %d",r,lol);
	
	}
	
	}
	
else if(joe=boe){
	printf("it's a GEOMETRIC series\n");
	printf("enter \n1 for sum\n 2 for any term number \n");
	scanf("%d",&j);
	switch(j){
		case 1:
		printf("to how much term you want sum\n");
			scanf("%d",&bo);
			if(joe>1){
			man= a[0]*((pow(joe,bo) - 1))/(joe-1);
			printf("sum to the term of %d is %d",bo,man);
			}
			else{
			    man= a[0]*(1-(pow(joe,bo)))/(1-joe);
			    printf("sum to the term of %d is %d",bo,man);
			}
	break;
	case 2:
		
		printf("which term do you want \n");
		scanf("%d",&q);
		
		bol=a[0]*pow(joe,q-1);
		printf("%d term is %d",q,bol);
		break;
		
}
}
else{
printf("not found error:");
}
	
	
	return 0;
	
	
	
}
