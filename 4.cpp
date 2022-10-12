    #include<iostream> 
    using namespace std;
    int main(){
        int i,j,temp,pass=0;
             int A[6]={17,35,24,12,26,14};
            cout<<"input list"<<endl;
         for(i=0;i<6;i++){
           cout<<A[i]<<endl;
            }
        cout<<endl;
        for(i=0;i<6;i++){
            for(j=i+1;j<6;j++){
                if (A[j]<A[i]){
                    temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;

                }
            }
            pass++;
        }
        cout<<"sorted array is ";
        for(i=0;i<6;i++){
            cout<<A[i]<<"\t";
        }
        cout<<"notes of passes taken to sort"<<pass<<endl;
        return 0;

}