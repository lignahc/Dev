#include <stdio.h>

int main()
{
    int hr, min, demand;
    
    scanf("%d %d", &hr, &min);
    scanf("%d", &demand);
          
    min=min+demand;
          
    while (min>60) {
    	min=min-60;
    	hr++;
    }
    printf("%d %d\n", hr>=24?hr-24:hr, min);
               
    return 0;
}
  
    
