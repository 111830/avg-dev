struct Process {
    int pid; // Process ID
    int arrival_time;
    int burst_time;
    int remaining_time; // For preemptive algorithms
    int completion_time;
    int waiting_time;
    int turnaround_time;
    int priority;
};

