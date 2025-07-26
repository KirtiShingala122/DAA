int utopianTree(int n) {
 //using loop   
//     int h=1;
//    for(int i=1;i<=n;i++){
//     if(i%2!=0){
//          h=h*2; 
//         }
//     else{
//         h=h+1;   
//         }    
//    }
//    return h;

//using recursion
        if(n==0)  return 1;
        
        else if(n%2!=0) return 2*utopianTree(n-1);
        
        else  return utopianTree(n-1)+1;
}
