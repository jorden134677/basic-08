#include<stdio.h> 
#include<conio.h> 


int main() 
{ 

int i,j,s,h=0; 

printf("��Jn�A��ܨ�n�����:�G "); 
scanf("%d",&s); 

for ( i = 2 ; i <= s ; i++) 
{ 
h =0; 

for ( j = 1 ; j <= s ; j++) 
{ 
if( (i % j) == 0 ) h++; 
if ( h > 2 ) break; 
} 
if ( h <= 2 ) printf("%d \t �O���\n",i); 

} 
getch(); 
return 0; 

}
