#include <stdio.h>  
#include <stdlib.h>  

const int N=12;   
int q[N];         
int cont = 0;      
int find(int i,int k)    
{  
    int j=1;  
    while(j<i)  
    {   
        if(q[j]==k || abs(j-i)==abs(q[j]-k))   
            return 0;  
        j++;  
    }  
    return 1;  
}   
void place(int k,int n)    
{  
    int j;  
    if(k>n)  
        cont++;  
    else  
    {  
        for(j=1;j<=n;j++)     
        {  
            if(find(k,j)) 
            {  
                q[k] = j;  
                place(k+1,n); 
            }  
        }  
    }  
}  

int main(void)  
{  
    int n;   
    while(scanf("%d",&n)!=EOF){
		cont=0;
		place(1,n);        
		printf("%d\n",cont);  
	}
    return 0;  
} 

