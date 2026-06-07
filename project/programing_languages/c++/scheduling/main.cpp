#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

struct Process {
    int id;
    int burstTime;
    int remaining;
};

void printQueues(const vector<vector<Process>>& queues) {
    string names[] = {"VERY HIGH", "HIGH     ", "MEDIUM   ", "VERY LOW "};
    for (int i = 0; i < 4; i++) {
        cout << "  Queue " << i << " (" << names[i] << "): ";
        if (queues[i].empty()) {
            cout << "[ bosh ]";
        } else {
            for (const auto& p : queues[i]) {
                cout << "[P" << p.id << ":" << p.remaining << "ms] ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    const int QUANTUM = 100;
    
    vector<vector<Process>> queues(4);
    
    int picksPerRound[4] = {4, 3, 2, 1};
    
    // Queue 0 - VERY HIGH
    queues[0] = {
        {1, 150, 150},
        {2,  80,  80},
        {3, 220, 220},
        {4,  50,  50},
        {5, 130, 130}
    };
    
    // Queue 1 - HIGH
    queues[1] = {
        {6,  200, 200},
        {7,   90,  90},
        {8,  170, 170},
        {9,   60,  60},
        {10, 110, 110}
    };
    
    // Queue 2 - MEDIUM
    queues[2] = {
        {11, 180, 180},
        {12,  70,  70},
        {13, 250, 250},
        {14, 100, 100}
    };
    
    // Queue 3 - VERY LOW
    queues[3] = {
        {15, 300, 300},
        {16, 120, 120},
        {17,  80,  80}
    };
    
    int currentTime = 0;
    int roundNum = 1;
    
    cout << "============================================" << endl;
    cout << "  MULTI-LEVEL QUEUE SCHEDULING SIMULATION" << endl;
    cout << "  Quanti = " << QUANTUM << " ms" << endl;
    cout << "  Picks per round: Q0=4, Q1=3, Q2=2, Q3=1" << endl;
    cout << "============================================" << endl << endl;
    
    cout << "Gjendja fillestare e rradheve:" << endl;
    printQueues(queues);
    
    while (!queues[0].empty() || !queues[1].empty() || 
           !queues[2].empty() || !queues[3].empty()) {
        
        cout << "============ ROUND " << roundNum++ << " ============" << endl;
        
        for (int q = 0; q < 4; q++) {
            int picks = picksPerRound[q];
            int picked = 0;
            
            cout << ">> Duke marre deri ne " << picks 
                 << " procese nga Queue " << q << ":" << endl;
            
            if (queues[q].empty()) {
                cout << "   (Queue " << q << " eshte bosh)" << endl;
                continue;
            }
            
            while (picked < picks && !queues[q].empty()) {
                Process p = queues[q].front();
                queues[q].erase(queues[q].begin());
                
                cout << "   [t=" << currentTime << "ms] P" << p.id 
                     << " RUNNING (kerkon " << p.remaining << "ms) ";
                
                if (p.remaining <= QUANTUM) {
                    currentTime += p.remaining;
                    cout << "=> PERFUNDOI ne t=" << currentTime << "ms" << endl;
                } else {
                    currentTime += QUANTUM;
                    p.remaining -= QUANTUM;
                    cout << "=> NDALUA (" << p.remaining 
                         << "ms mbeten) -> kthehet ne Queue " << q << endl;
                    queues[q].push_back(p);
                }
                picked++;
            }
            cout << endl;
        }
        
        cout << "Gjendja pas Round-it:" << endl;
        printQueues(queues);
    }
    
    cout << "============================================" << endl;
    cout << "  TE GJITHA PROCESET PERFUNDUAN!" << endl;
    cout << "  Koha totale e simulimit: " << currentTime << " ms" << endl;
    cout << "============================================" << endl;
    
    return 0;
}

// Multi-Level Queue (MLQ)
// Round Robin (RR)
// FCFS — First Come First Served