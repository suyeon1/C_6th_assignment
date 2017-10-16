#include <stdio.h>
int main(){
	int i;
	char c;
	while((c=getchar())!='a'){
		for(i=1; i<=c-48; i++)
			printf("%d", c-48);
			printf("\n");
	}
	
	return 0;
}