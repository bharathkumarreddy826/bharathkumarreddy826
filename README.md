# bharathkumarreddy826
A uniprocessor system has n number of CPU intensive processes, each process has its own requirement of CPU burst. The process with lowest CPU burst is given the highest priority. A late-arriving higher priority process can pre-empt a currently running process with lower priority. Simulate a scheduler that is scheduling the processes in such a way that higher priority process is never starved due to the execution of lower priority process. What should be its average waiting time and average turnaround time if no two processes are arriving are arriving at same time.
The above code comes under preemptive scheduling. If some higher priority process comes then preemptive scheduling have the ability to stop executing process and start executing the higher priority process. Th read having the higher priority and it is executed by the thread that is being interrupting the current low priority one.
Turnaround time is the time between the task arrives and the time it ends. Turn Around Time=Execution Time-Arrival Time and then the execution time adds to the next execution time the already existing time to subtract the arrival time. Then add all the turn around time and the divide there sum total by their total number.
Waiting time is the sum of the period spent waiting in ready queue.
A.T= Arrival Time
B.T= Burst Time
C.T= Completion Time
T.T = Turnaround Time = C.T - A.T
W.T = Waiting Time = T.T - B.T
According to the algorithm, OS schedules the process having the lowest burst time among the processes in the ready queue.

Algorithm:
1)Start
2)Define the number of process and the queue parameters
3)Generate the processes with deadline and the process specifications
4)Define a priority specification of the process
5)Define the condition to change priority to avoid starvation
6)Perform the proposed scheduling process and allocation of processes to CPU
7)Perform the Analysis respective to Turnaround time and wait time.
a) Turnaround Time = C.T - A.T
b) Waiting Time = T.T - B.T
8)Stop
