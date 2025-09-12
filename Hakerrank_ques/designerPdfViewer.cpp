
int designerPdfViewer(vector<int> h, string word) {
int max=0;
for(int i=0;i<word.length();i++){
    char c=word[i];
    if(h[c-'a']>max) max=h[c-'a']; 
}
return (max)*word.length();
}
