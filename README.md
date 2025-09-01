# CPU-SCHEDULING-FCFS# CPU Scheduling - First Come First Serve (FCFS)

This project implements the FCFS CPU scheduling algorithm.
It calculates:
- Completion Time (CT)  
- Turnaround Time (TAT)  
- Waiting Time (WT)  
- Average TAT & WT  

## Algorithm
- Processes are executed in the order they arrive.
- Non-preemptive scheduling.

## Example Output
Process ID | Arrival Time | Burst Time | Completion Time | Turnaround Time | Waiting Time
-----------|--------------|------------|-----------------|-----------------|--------------
P1         | 0            | 5          | 5               | 5               | 0
P2         | 1            | 3          | 8               | 7               | 4
P3         | 2            | 8          | 16              | 14              | 6
