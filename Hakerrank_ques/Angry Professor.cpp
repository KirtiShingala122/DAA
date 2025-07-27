string angryProfessor(int k, vector<int> a) {
 
  int n=0;
 for(int i=0;i<a.size();i++)
 {if(a[i]<=0)
  n++;}
 
     if (n >= k) 
      return "NO"; 
    else 
        return "YES"; 
 
}
