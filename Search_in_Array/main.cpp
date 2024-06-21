int main(){
    float arr[2][4],n;

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<"A("<<i<<","<<j<<")= ";
            cin>>arr[i][j];
        }
     }
     cout<<"Enter a number: ";
     cin>>n;

     bool flag =false;
     for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            if(n==arr[i][j]){
                flag=true;
                break;
            }
        }
     }
if(t)
cout<<n<<" is present in the array";
else
cout<<n<<"is not present in the array";
    return 0;
}
