
class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        //zero ka count bana liya
       int zCount = 0;
       for(int i=0; i<n; i++){
           if(arr[i] == 0)  zCount++;    //count bada liya
       }

       for(int i=0; i<n; i++){
           if(zCount > 0){
               //count ko ghta liya + 0 ko add krliya
               arr[i] = 0;
               zCount--;
           }
           else{
               //vrna 1 ko kr liya
               arr[i] = 1;
           }
       }
    }