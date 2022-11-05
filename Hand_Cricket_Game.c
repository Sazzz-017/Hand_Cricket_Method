#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int game(int choice){
    srand(time(NULL));
    int r=1,l=0,toss,flag=0,random=3,bat,ball,ballc,batc,h=6,s=1,total=0,total1=0,flag1=0;
    int rand_num=0;
    rand_num=rand()%2;
    printf("%d\n",rand_num);
    if(choice==rand_num){
       printf("You Won The Toss!\n");
       printf("Enter 1 for Bat and 2 for Ball\n");
       scanf("%d",&toss);
       flag=1;
    }
    else{
        printf("You Loss The Toss!\n");
        random=rand()%2;
        
        if(random==1){
            printf("Computer choose Bat first!\n");
        }
        else{
            printf("Computer choose Ball first!\n");
        }
    }
    if(toss==1||random==0){
        printf("Now Your Batting!\n");
        while(1){
        
            printf("Enter: ");
            scanf("%d",&bat);
            ballc=(rand()%(h-s+1))+1;
            printf("Computer: ");
            printf("%d\n",ballc);
            if(bat==ballc){
                printf(" OUT \n");
                flag1=1;
            }
            else{
            total=total+bat;
            }
            if(flag1==1){
                break;
            }
        }
        printf("Your Total is %d\n",total);
        printf("Now Your Balling!\n");
        while(1){
             printf("Enter: ");
            scanf("%d",&ball);
            batc=(rand()%(h-s+1))+1;
            printf("Computer: ");
            printf("%d\n",batc);
            if(ball==batc){
                printf(" OUT \n");
                flag1=0;
            }
           
            else{
            total1=total1+batc;
            }
              if(total<total1){
                flag1=0;
            }
            if(flag1==0){
                break;
            }
        }
        if(total>total1){
            return 1;
        }
         else if(total==total1){
            return 2;
        }
        else{
            return 0;
        }
        
    }
    else if(toss==2||random==1){
         printf("Now Your balling!\n");
        while(1){
           
             printf("Enter: ");
            scanf("%d",&ball);
            batc=(rand()%(h-s+1))+1;
            printf("Computer: ");
            printf("%d\n",batc);
            if(ball==batc){
                printf(" OUT \n");
                flag1=1;
            }
            else{
            total1=total1+batc;
            }
            if(flag1==1){
                break;
            }
        }
        printf("Your Target is %d\n",total1+1);
        printf("Now Your Batting!\n");
         while(1){
            printf("Enter: ");
            
            scanf("%d",&bat);
            ballc=(rand()%(h-s+1))+1;
            printf("Computer: ");
            printf("%d\n",ballc);
            if(bat==ballc){
                printf(" OUT \n");
                flag1=0;
            }
            
            else{
            total=total+bat;
            }
            //printf("%d\n",total);
            if(total>total1){
                flag1=0;
            }
            if(flag1==0){
                break;
            }
        }
        if(total>total1){
            return 1;
        }
        else if(total==total1){
            return 2;
        }
        else{
            return 0;
        }
        

    }


}

int main(){
    int c,i,choice,m;
    char name[100],s;
    printf("                                      ||Welcome TO Hand Cricket Game ||\n              ");
    printf("                              ||Enter 1 To Play||\n                       ");
    printf("                      ||Enter 2 To Exit||\n                                            ");
    printf("Enter: ");
    scanf("%d",&c);
    if(c==1){
        printf("Enter Your Name: ");
        getchar();
        gets(name);
        printf("                                          Welcome ");
        puts(name);
        printf("\n");
        printf("                                          Let's start the game!\n");
        printf("                                          ||Enter s to start||\n");
        scanf("%c",&s);
    }
    if(s=='s'){
        printf("                                               Umpire:                  \n");
        printf("                                   Head(Enter 1) or Tails(Enter 0)!\n                  ");
        scanf("%d",&choice);
        m=game(choice);
            
             
    }
    if(m==1){
        puts(name);
        printf("Won!");

    }
    else if(m==0){
        puts(name);
        printf("Lose!");
    }
    else if(m==2){
        printf("Match Draw!");
    }

    return 0;
}
