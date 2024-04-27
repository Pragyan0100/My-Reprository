#include <stdio.h>
#include <stdlib.h>

// Structure to store a process
struct Process {
  int pid; // Process ID
  int bt; // Burst time
  int wt; // Waiting time
  int tat; // Turnaround time
};

// Function to find the waiting time for all processes
void findWaitingTime(struct Process *p, int n) {
  // Waiting time for first process is 0
  p[0].wt = 0;

  // Calculate waiting time for all other processes
  for (int i = 1; i < n; i++) {
    p[i].wt = p[i - 1].bt + p[i - 1].wt;
  }
}

// Function to calculate turn around time
void findTurnAroundTime(struct Process *p, int n) {
  // Calculate turnaround time for all processes
  for (int i = 0; i < n; i++) {
    p[i].tat = p[i].bt + p[i].wt;
  }
}

// Function to calculate average waiting time
float avgWaitingTime(struct Process *p, int n) {
  // Calculate total waiting time
  int total_wt = 0;
  for (int i = 0; i < n; i++) {
    total_wt += p[i].wt;
  }

  // Calculate average waiting time
  return (float)total_wt / n;
}

// Function to calculate average turn around time
float avgTurnAroundTime(struct Process *p, int n) {
  // Calculate total turn around time
  int total_tat = 0;
  for (int i = 0; i < n; i++) {
    total_tat += p[i].tat;
  }

  // Calculate average turn around time
  return (float)total_tat / n;
}

// Function to print the scheduling results
void printSchedulingResults(struct Process *p, int n) {
  printf("Process ID\tBurst Time\tWaiting Time\tTurnaround Time\n");
  for (int i = 0; i < n; i++) {
    printf("%d\t\t%d\t\t%d\t\t%d\n", p[i].pid, p[i].bt, p[i].wt, p[i].tat);
  }
}

// Main function
int main() {
  // Number of processes
  int n = 5;

  // Create an array of processes
  struct Process p[n];

  // Assign process IDs
  for (int i = 0; i < n; i++) {
    p[i].pid = i + 1;
  }

  // Get burst time for each process
  printf("Enter burst time for each process:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &p[i].bt);
  }

  // Find waiting time for all processes
  findWaitingTime(p, n);

  // Find turn around time for all processes
  findTurnAroundTime(p, n);

  // Print the scheduling results
  printSchedulingResults(p, n);

  // Calculate average waiting time
  float avg_wt = avgWaitingTime(p, n);

  // Calculate average turn around time
  float avg_tat = avgTurnAroundTime(p, n);

  // Print average waiting time and average turn around time
  printf("Average waiting time: %.2f\n", avg_wt);
  printf("Average turn around time: %.2f\n", avg_tat);

  return 0;
}