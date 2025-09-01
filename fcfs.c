#include <stdio.h>

struct Process {
    int id;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
};

int main() {
    int n, i;
    struct Process p[20];
    float avgWT = 0, avgTAT = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        p[i].id = i + 1;
        printf("Enter Burst Time for Process %d: ", p[i].id);
        scanf("%d", &p[i].burstTime);
    }

    // First process waiting time = 0
    p[0].waitingTime = 0;

    // Calculate waiting time for each process
    for (i = 1; i < n; i++) {
        p[i].waitingTime = p[i - 1].waitingTime + p[i - 1].burstTime;
    }

    // Calculate turnaround time = burst time + waiting time
    for (i = 0; i < n; i++) {
        p[i].turnaroundTime = p[i].burstTime + p[i].waitingTime;
        avgWT += p[i].waitingTime;
        avgTAT += p[i].turnaroundTime;
    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t\t%d\t\t%d\t\t%d\n", p[i].id, p[i].burstTime, p[i].waitingTime, p[i].turnaroundTime);
    }

    printf("\nAverage Waiting Time: %.2f", avgWT / n);
    printf("\nAverage Turnaround Time: %.2f\n", avgTAT / n);

    return 0;
}
