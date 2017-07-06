#include<stdio.h>
int main(){
 printf("docker monitoring \n");
 printf("Please enter the command with no \n");
 printf("1.docker ps\n");
 printf("2.docker stats\n");
char x,args;
  if ((args=scanf("%c",&x))==0){
   printf("Error:not an int\n");
}else
{ 
   printf("Read in%c\n",x)
;}
int joe='1';
 switch(x){
int ret=0; 
case '1' :  ret= system(" docker ps");
   break;
 case '2' :  ret= system("docker stats 97b8591f6f52");
   break;
   default:
   break;

  return 0;
}}


