vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

    int x=a[0],y=b[0];
    for(int i=1;i<n;i++)
    {
        x = x*10+a[i];
    }
    
    for(int i=1;i<m;i++)
    {
        y = y*10+b[i];
    }
   
    x = x+y;

    vector<int>v;
    while(x!=0){
        int d = x%10;
        v.push_back(d);
        x = x/10;
    }
    reverse(v.begin(),v.end());
    return v;
}