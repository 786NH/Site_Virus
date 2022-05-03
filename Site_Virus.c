#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
  char site[]="explorer https:\\";
  char url[90];
  printf("Enter the url");
  gets(url);
  strcat(site,url);
  while(1){
  system(site);
}
}