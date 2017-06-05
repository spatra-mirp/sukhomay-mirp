#include <iostream>
using namespace std;
int main()
{
    int N, c=0;
        cout<<"Enter the number: ";
        cin>>N;
        for(int i=N; i<=N; i--) {
          c=c+1; 
        for(int a=i-1; a>=1; a--) {
                cout<<"*";
           for(int b=1;b<=c;b++)
                    cout<<c;
            }
            cout<<" "<<endl;
        }
    return 0;
}
    
