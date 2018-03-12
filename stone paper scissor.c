# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
 int i,x,comp,pt=0;
 char Ar[20];
FLAG: printf("\nEnter your !!Move!!\n");
//taking entry for user's turn
 scanf("%s",Ar);
 //generating a random choice from the computer                       
 comp=rand()%3;
 switch(comp)
 {//let case 1 is stone
  case 0:
  {
   if(strcmp(Ar,"scissors")==0)
    {
    printf("\n\nHA HA HA you're easy to trick\n\n your score is :%d \ndo you want to play again??\npress 1 for YES and 2 for NO\n ",pt);
    scanf("%d",&x);
    if(x==2)
    exit(0);
    else goto FLAG;
    }
    else if(strcmp(Ar,"paper")==0)
    {
     printf("\n\nWHOA!!!You're good.\n\n your score is :%d \ndo you want to play again??\npress 1 for YES and 2 for NO\n ",pt+1);
     pt=pt+1;
     scanf("%d",&x);
     if(x==2)
     exit(0);
     else goto FLAG;
    }
    else if(strcmp(Ar,"stone")==0)
    {
     printf("DAMMN!!!How did you know my move!!!Let,s rematch");
     goto FLAG;
    }
    break;
  }
  //let case 2 is paper
  case 1:
  {
   if(strcmp(Ar,"stone")==0)
    {
    printf("\n\nHA HA HA you're easy to trick\n\n your score is :%d \ndo you want to play again??\npress 1 for YES and 2 for NO\n ",pt);
    scanf("%d",&x);
    if(x==2)
    exit(0);
    else goto FLAG;
    }
    else if(strcmp(Ar,"scissors")==0)
    {
     printf("\n\nWHOA!!!You're good.\n\n your score is :%d \ndo you want to play again??\npress 1 for YES and 2 for NO\n ",pt+1);
     pt=pt+1;
     scanf("%d",&x);
     if(x==2)
     exit(0);
     else goto FLAG;
    }
    else if(strcmp(Ar,"paper")==0)
    {
     printf("DAMMN!!!How did you know my move!!!Let,s rematch");
     goto FLAG;
    }
    break;
  }
  //let case 3 is scissors
  case 2:
  {
   if(strcmp(Ar,"paper")==0)
    {
    printf("\n\nHA HA HA you're easy to trick\n\n your score is :%d \ndo you want to play again??\npress 1 for YES and 2 for NO\n ",pt);
    scanf("%d",&x);
    if(x==2)
    exit(0);
    else goto FLAG;
    }
    else if(strcmp(Ar,"stone")==0)
    {
     printf("\n\nWHOA!!!You're good.\n\n your score is :%d \ndo you want to play again??\npress 1 for YES and 2 for NO\n ",pt+1);
     pt=pt+1;
     scanf("%d",&x);
     if(x==2)
     exit(0);
     else goto FLAG;
    }
    else if(strcmp(Ar,"scissors")==0)
    {
     printf("DAMMN!!!How did you know my move!!!Let,s rematch");
     goto FLAG;
    }
  }
  break;
 }
}
