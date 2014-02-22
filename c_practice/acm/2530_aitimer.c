#include <stdio.h>

int main()
{
    int hr, min, sec, demand;
    
    scanf("%d %d %d", &hr, &min, &sec);
    scanf("%d", &demand);
          
    sec+=demand;
          
    while (sec>59) {
    	sec-=60;
    	min++;
    	if (min>59) {
    		min-=60;
    		hr++;
    		if (hr>23)
    			hr-=24;
    	}
    }
    printf("%d %d %d\n", hr, min, sec);
               
    return 0;
}
  
    
