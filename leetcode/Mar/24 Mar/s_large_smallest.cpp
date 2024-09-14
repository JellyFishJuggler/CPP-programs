int secondLargest(int n, vector<int>&a){
    int largest  = a[0], s_large = -1;
    for(int i=1;i<n;i++){
        if(a[i] > largest){
            s_large = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > s_large){
            s_large = a[i];
        }
    }
    return s_large;
}
int secondSmallest(int n, vector<int>&a){
    int smallest  = a[0], s_small = INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i] < smallest){
            s_small = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < s_small){
            s_small = a[i];
        }
    }
    return s_small;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int s_largest = secondLargest(n,a);
    int s_smallest = secondSmallest(n,a);
    return {s_largest,s_smallest};
}
