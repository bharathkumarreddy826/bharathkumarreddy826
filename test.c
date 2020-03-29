#include<stdio.h> //module
int no;
struct uniprocess //structure
{

int p_num;

int arrival_time;
int burst_time;
int ct,wait_time;
int turnaround_time,p;

int mark;
 }p_list[100];
 void Sort()
 {
struct uniprocess p; //struct variable

int i, j;

for(i=0;i<no-1;i++)

{

for(j=i+1;j<no;j++)

{

if(p_list[i].arrival_time > p_list[j].arrival_time)

{

p = p_list[i];

p_list[i] = p_list[j];

p_list[j] = p;

}

}

}
 }
 int main()
 {

int i,t=0,b_t=0,peak;

int arr[10];

float wait_time = 0, turnaround_time = 0, average_w_t=0, avg_taround_time=0;

printf("Enter the no. of processes: ");

scanf("%d",&no);

for(i = 0; i < no; i++)

{

p_list[i].p_num = i+1;

printf("\nEnter Info For P%d process:-\n", p_list[i].p_num);
printf("Enter Arrival_Time: ");
scanf("%d", &p_list[i].arrival_time );
printf("Enter Burst_Time: ");
scanf("%d", &p_list[i].burst_time);
p_list[i].mark = 0;
b_t = b_t + p_list[i].burst_time;
}
Sort(); //function call
for(int i=0;i<no;i++)
{
arr[i]=p_list[i].burst_time;
}
p_list[9].burst_time = 9999;
for(t = p_list[0].arrival_time; t <= b_t+1;)
{
peak = 9;
for(i=0;i<no;i++)
{
if(p_list[i].arrival_time <= t && p_list[i].burst_time < p_list[peak].burst_time && p_list[i].mark != 1)
{
peak = i;
}
if(p_list[peak].burst_time==0 && p_list[i].mark != 1)
{
p_list[i].mark = 1;
p_list[peak].ct=t;p_list[peak].burst_time=9999;
printf("P%d completes in %d\no",p_list[i].p_num,p_list[peak].ct);
}
}
t++;
(p_list[peak].burst_time)--;
}
for(i=0;i<no;i++)
{
p_list[i].turnaround_time=(p_list[i].ct)-(p_list[i].arrival_time);
avg_taround_time=avg_taround_time+p_list[i].turnaround_time;
p_list[i].wait_time=((p_list[i].turnaround_time)-arr[i]);
average_w_t=average_w_t+p_list[i].wait_time;
}
printf("PNO\tAT\tCT\tTA\tWTt\n");
for(i=0;i<no;i++)
{
printf("P%d\t%d\t%d\t%d\t%d\n",p_list[i].p_num,p_list[i].arrival_time,p_list[i].ct,p_list[i].turnaround_time
,p_list[i].wait_time);
 }
printf("Average Turn_around_Time: %f\t\n\n",avg_taround_time);
printf("Average Waiting_Time :\t %f\t\n",average_w_t);
}