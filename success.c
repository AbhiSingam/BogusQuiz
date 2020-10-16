#include<stdio.h>

int career_guide(){
    printf("Are you happy or are you depressed?\n");
    printf("your options:\n 1:I'm very depressed\n 2:I'm happy");
    int q1;
    scanf("%d",&q1);
    if(q1==1){
        printf("Do people like you or are you bullied all the time?\n");
        printf("your options:\n 1:People are so nice id take a bullet for them\n 2:I love sticking stuff up my ass\n 3: I'm gonna sneak a gun intoo my school soon.");
        int q2;
        scanf("%d",&q2);
        if(q2==1){
            printf("No one likes a show off. Especially a show off who hasn't nd won't ever do shit with his life. Go to hell.\n");
        }
        else if(q2==2){
            printf("Dude chill. Like we all love it but dont say it outloud. Like chill man");
        }
        else{
            printf("You should be an Engineer. Do jee and join iit for iit tag. Any iit branch join iit.\n");
        }
    }
    else{
        printf("You're very successful. You have something even some famous people would do anything for :)\n");
    }
}