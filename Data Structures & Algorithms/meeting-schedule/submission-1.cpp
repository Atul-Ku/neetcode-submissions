/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    static bool issort(Interval &a, Interval &b){
        return a.end<=b.end;
    }
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),issort);
        int n=intervals.size();
        int last=intervals[0].end;
        // for(int i=0;i<n;i++){
        //     cout<<intervals[i].start<<" "<<intervals[i].end<<endl;
        // }
        for(int i=1;i<n;i++){
            if(last>intervals[i].start){
                return false;
            }
            else{
                last=intervals[i].end;
            }
        }
        return true;
    }
};
