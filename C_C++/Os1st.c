#include <stdio.h>

// Function to calculate waiting time for each process
void findWaitingTime(int processes[], int n, int bt[], int wt[]) {
    wt[0] = 0; // First process doesn't wait
    for (int i = 1; i < n; i++) {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
}

// Function to calculate turnaround time for each process
void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

// Function to find average waiting time and average turnaround time
void findAvgTime(int processes[], int n, int bt[]) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    findWaitingTime(processes, n, bt, wt);
    findTurnAroundTime(processes, n, bt, wt, tat);

    printf("Processes\tBurst time\tWaiting time\tTurnaround time\n");
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    printf("\nAverage waiting time = %.2f\n", (float)total_wt / n);
    printf("Average turnaround time = %.2f\n", (float)total_tat / n);
}

int main() {
    int processes[] = {1, 2, 3}; // Process IDs
    int n = sizeof(processes) / sizeof(processes[0]); // Number of processes
    int burst_time[] = {10, 5, 8}; // Burst times for each process

    findAvgTime(processes, n, burst_time);
    return 0;
}
