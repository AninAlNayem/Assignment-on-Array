for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(i!=j){
         if(arr[i]+arr[j]==target){
           return {i,j};
         }
       }
     }
}
