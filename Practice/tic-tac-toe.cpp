#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
bool check_dig(vvi &v,int i,int j,int ans){
    for(int i=0;i<3;i++){
       
            if(v[i][i]==ans)
            return true; 
        }
    for(int i=0;i<3;i++){
        if(v[i][2-i]==ans) return true; 
    }
    return false;
}

bool check_col(vvi &v,int i,int j,int ans){
    for(j=0;j<3;j++){
        if(v[i][j]==ans)
        return true ;
    }
    return false;
}

bool check_row(vvi &v,int i,int j,int ans){
    for(int i=0;i<3;i++){
        if(v[i][j]==ans)
        return true;
    }
    return false;
}

int take_ip(vvi &v,int x,int y,int &ans){
    bool flag=true;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            cout<<"i: ";
            cin>>i;          
            cout<<"j: ";
         cin>>j;
            if(flag==true) {
                v[i][j]=1;
            flag=false;}
            else {
                v[i][j]=0;
            flag=true;}
            ans=v[i][j];
        }  
    }
    return ans;

}



int main(){
vvi v(3,vector<int>(3,-1));
int ans;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<< v[i][j]<<" ";
        }
        cout<<endl;
    }
    take_ip(v,i,j,ans);
bool ans1 = check_dig(v,i,j,ans);
bool ans2=check_col(v,i,j,ans);
bool ans3=check_row(v,i,j,ans)
if(ans1 || ans2 ||ans3 ){
    cout
}
}