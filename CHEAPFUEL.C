#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x,y,a,b,k,i;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d %d %d %d",&x,&y,&a,&b,&k);
	    for(i=0;i<k;i++){
	        x=x+a;
	        y=y+b;
	    }
	    if(x<y){
	        printf("PETROL\n");
	    }
	    else if(x>y){
	        printf("DIESEL\n");
	        
	        
	    }
	    else{
	        printf("SAME PRICE\n");
	    }
	    
	}
	return 0;
}

