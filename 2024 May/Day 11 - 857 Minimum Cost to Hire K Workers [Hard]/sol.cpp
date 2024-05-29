#pragma GCC optimize("O3", "unroll-loops")

class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<array<double,2>> worker(n); // wage/quality, quality
        for(int i=0; i<n; i++) worker[i] = {(double)wage[i]/quality[i],(double)quality[i]}; 

        sort(worker.begin(),worker.end());

        int qualitysum = 0;

        priority_queue<int> pq; // maxheap (quality)
        for(int i=0; i<k; i++){ // k best (quality/wage)
            qualitysum += worker[i][1];
            pq.push(worker[i][1]);
        }
        double pay = qualitysum * worker[k-1][0];
        for(int i=k; i<n; i++) {
            pq.push(worker[i][1]);
            qualitysum += worker[i][1]-pq.top();
            pq.pop();
            pay = min(pay,qualitysum*worker[i][0]);
        }
        
        return pay;
    }
};

const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();


// C++
// 15 ms (beats 94.64%)
// 24.97 mb (beats 84.95%)