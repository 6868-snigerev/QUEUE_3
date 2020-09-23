#include <stdio.h>
#include <stdlib.h>
#define N 10
void push(int mas[], int *count , int *end){
    if((*count) == N){
        printf("\nQueue is full!\n");
    }
    else{
        printf("\nInput element of queue:");
        scanf("%d",&mas[(*end)]);
        (*count)++;
        (*end)++;
    }

}

void output(int mas[],int end,int start,int count){
    printf("\nQueue:");
    int i,j;
    j=0;
    for(i=end-1;i>=start;i--,j++){
        if(j<count){
            printf("\n%d\n", mas[i]);
        }
    }
}

void pop(int mas[],int *count,int *start){
    if((*count)==0){
        printf("\n0 elements in queue!\n");
    }
    else{
        printf("Pop element=%d",mas[(*start)]);
        (*start)++;
        (*count)--;
    }
}

int main(void){
    int mas[N];
    int S,n=0,start=0,end=0;
    for(;;){
        printf("\n1)Add element\n2)Pop element\n3)Output queue\n4)Exit\n:");
        scanf("%d",&S);
        switch(S){
            case 1:push(mas,&n,&end);break;
            case 2:pop(mas,&n,&start);break;
            case 3:output(mas,end,start,n);break;
            case 4:return 0;
        }
    }
}
