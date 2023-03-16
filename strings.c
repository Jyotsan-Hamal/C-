#include <stdio.h>
#include <string.h>
main(){
	int c,s,cons,space,joe; 
	char name[200],nam[20];
	printf("what is your name?");
	gets(name);
	
	s=strlen(name);
	for(int i=0;i<s;i++){
		if(name[i]== 'A' || name[i]== 'a'|| name[i]== 'e' || name[i]== 'E' ||name[i]== 'i' || name[i]== 'I'|| name[i]== 'O' || name[i]== 'o' ||name[i]== 'U' || name[i]== 'u' ){
			c++;
		}else if( name[i]==' '){
		    space++;
		}
		else if(name[i]>=0 && name[i]<=100){
		    joe++;
		}
		else{
		    cons++;
		}
		
		
	}
	printf("no. of vowel in name is %d \n",c);
		printf("no. of consonant in name is %d \n",cons);
		printf("no of space is %d\n",space);
		printf("no. of special characters are %d",joe);
	}
