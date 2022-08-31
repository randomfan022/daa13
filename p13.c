#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int paths[10][10]; 
int min (int a, int b) 
{ 
 return (a>b)? b:a ; 
} 
void Floyd (int n) 
{ 
 int i,j,k; 
 for(k=0;k<n;k++) 
 { 
 for(i=0;i<n;i++) 
 { 
 for(j=0;j<n;j++) 
 { 
 paths[i][j]=min((paths[i][j]),(paths[i][k]+paths[k][j])); 
 } 
 } 
 } 
} 
void main() 
{ 
 int n,i,j,k; 
 clock_t start,end; 
 double clk; 
 
 printf("ENTER NO OF CITIES\n"); 
 scanf("%d",&n); 
 
 printf("ENTER COST MATRIX\n"); 
 for(i=0;i<n;i++) 
 for(j=0;j<n;j++) 
 scanf("%d",&paths[i][j]); 
 
 start=clock(); 
 Floyd(n); 
 end=clock(); 
 
 printf("MINIMUM COST MATRIX\n"); 
 for(i=0;i<n;i++) 
 { 
 for(j=0;j<n;j++) 
 printf("%d ",paths[i][j]); 
 printf("\n"); 
 } 
 
 clk=(end-start)/CLOCKS_PER_SEC; 
 
 printf("TIME REQUIRED IS %f\n",clk); 
} 
