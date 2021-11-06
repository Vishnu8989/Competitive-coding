class Solution {
public:
        int sumOfBeauties(vector<int>& ar) {
        int n =ar.size(), ans = 0, l[n], r[n];

    l[0]=ar[0];
    r[n-1]=ar[n-1];

    for(int i=1;i<n;i++){
        l[i]=max(l[i-1],ar[i]);
        r[n-1-i]=min(r[n-i],ar[n-1-i]);
    }

    for(int i=1;i<=n-2;i++)
        if(l[i-1]<ar[i] && ar[i]<r[i+1])
            ans+=2;
        else if(ar[i-1]<ar[i] && ar[i]<ar[i+1])
            ans+=1;

    return ans;
}
};
