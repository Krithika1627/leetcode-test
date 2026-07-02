class Solution {
public:
    int noOfB(vector<int>& bloomDay,int x,int m,int k,int n){
        int cnt=0;
        int noofb=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=x){
                cnt++;
            }    
            else{
                noofb+=cnt/k;
                cnt=0;
            }
        }
        noofb+=cnt/k;
        return noofb;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(n<(long long)m*(long long)k) return -1;
        int mine=INT_MAX;
        int maxe=INT_MIN;
        for(int i=0;i<n;i++){
            mine=min(mine,bloomDay[i]);
            maxe=max(maxe,bloomDay[i]);
        }
        int low=mine,high=maxe;
        int res=high;
        while(low<=high){
            int mid=(low+high)/2;
            int noofb=noOfB(bloomDay,mid,m,k,n);
            if(noofb>=m){
                res=mid;
                high=mid-1;;
            }else if(noofb<m){
                low=mid+1;
            }
        }
        return res;
    }
};