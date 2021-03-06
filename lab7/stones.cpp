#include "stones.h"
#include <queue> // to use std::priority_queue
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    priority_queue<int, vector<int>, less<int> > pq;
    for (unsigned int i = 0; i < stones.size(); i++) {
        pq.push(stones[i]);
    }
    while (pq.size() > 1) {
        int stone1 = pq.top();
        pq.pop();
        int stone2 = pq.top();
        pq.pop();
        if (stone1 != stone2) {
            pq.push(abs(stone1 - stone2));
        }
    }
    return pq.size() == 1 ? pq.top():0;
}