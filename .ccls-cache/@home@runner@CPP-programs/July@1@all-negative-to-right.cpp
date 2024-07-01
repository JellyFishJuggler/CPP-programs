public:
void segregateElements(int arr[],int n)
{
    // Your code goes here
    vector<int>haalo;
    int i=0, j=0;
    //sare positive add krliye
    while(i<n){
        if(arr[i] >= 0){
            //haalo[j] = arr[i];
            haalo.push_back(arr[i]);
            j++;
        }
        i++;
    }
    //sare negative add krliye
    while(i<n){
        if(arr[i] < 0){
            //haalo[j] = arr[i];
            haalo.push_back(arr[i]);
            j++;
        }
        i++;
    }
    //waps krdiye fir baad me
    for(int i=0; i<n; i++){
        arr[i] = haalo[i];
    }
