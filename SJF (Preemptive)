#include<stdio.h>
int main(){
    int at[10],bt[10],temp[10],i,limit,time,count=0,smallest;
    float awt,atat;
    double wt=0,tat=0,end;
    printf("Enter no. of processes: ");
    scanf("%d",&limit);
    printf("Enter details of %d processes: \n\n",limit);
    for(int i=0;i<limit;i++){
        printf("enter arrival time: ");
        scanf("%d",&at[i]);
        printf("enter burst time: ");
        scanf("%d",&bt[i]);
        temp[i]=bt[i];
    }  
    bt[9]=99999;
    for(time=0;count!=limit;time++){
        smallest=9;
        for(int i=0;i<limit;i++){
            if(at[i]<=time && bt[i]<bt[smallest] && bt[i]>0){
                smallest=i;
            }
        }
        bt[smallest]--;
        if(bt[smallest]==0){
            count++;
            end=time+1;
            wt=wt+end-at[smallest]-temp[smallest]; //substituting values of tat
            tat=tat+end-at[smallest];
        }
    }
    awt=wt/limit;
    atat=tat/limit;
    printf("\nAverage waiting time = %lf",awt);
    printf("\nAverage Turnaround Time = %lf",atat);

    return 0;
}