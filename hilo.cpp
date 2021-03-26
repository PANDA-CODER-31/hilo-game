#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int no,lower=1,upper=100,t=1,lastno,cnt=0,amount=0,rup,low=0;
    char expt,decision;
    printf("       \n\n\n\n\t\t\t\t\t\t::::::::::::::::: Game  ::::::::::::::::::\n\n\n \t\t\t\t\t\t\t\t\t\t\t\t //  Abbrevations: H/h=greater;L/l=lower;Y/y=Yes;N/n=No;E/e=Equal \n\n");
    printf("Max rupees u can use at a time is 100");
    srand(time(0));
    lastno=(rand()%(upper-lower+1)) + lower;
    while(low!=5)
    {   printf("Last no: %d\n",lastno);
        printf("Enter your expectation:\n");
        scanf("%c",&expt); 
        getchar();
        printf("Enter amount on move:\n");
        scanf("%d",&rup);
        getchar();
        printf("%d",rup);
        if((expt!='H' && expt!='h' && expt!='L' && expt!='l' && expt!='E' && expt!='e') || rup>100  )
        {
            printf("Entered wrong value. Again enter\n");
            continue;
        }
        srand(time(0));
        no=(rand()%(upper-lower+1)) + lower;
        if((lastno<no && expt=='H' )  || (lastno<no && expt=='h' ) )
        {
            printf("Correct expectation\n\n");
            amount+=rup;
            cnt++;
        }
        else if((lastno==no && expt=='E' ) || (lastno==no && expt=='e') )
         {
            printf("Correct expectation\n\n");
            amount+=rup;
        }
        else if((lastno>no && expt=='L') ||  (lastno>no && expt=='l'))
        {
            cnt++;
            printf("Correct expectation\n\n");
            amount+=rup;
        }
        else{
            low++;
            printf("Incorrect expactation\n");
            amount-=rup;
        }
        lastno=no;
       
    }
     printf("Your total score is: %d, And total earned is: %d \n",cnt,amount);
    return 0;
}