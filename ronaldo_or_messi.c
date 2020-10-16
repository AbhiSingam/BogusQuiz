#include<stdio.h>

int career_guide(){
    printf("Are you a football fan?\n");
    printf("your options:\n 1:yes\n 2:no");
    int q1;
    scanf("%d",&q1);
    if(q1==1){
        printf("Do you like clever positioning and runs or do you like dribbling past people and passing or shooting?\n");
        printf("your options:\n 1:I like playing providing options for my teammates\n 2:The defence is like a puzzle to me. It must be solved\n 3: I'm shallow minded and just wanna dribble and shoot.");
        int q2;
        scanf("%d",&q2);
        printf("Lewandowski is the best\n");
    }
    else{
        printf("Both are amazing. But trust me, the greatest of all time is lewandowski.\n");
    }
}