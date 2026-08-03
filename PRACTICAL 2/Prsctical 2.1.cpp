/*
#include<iostream>
using namespace std;

int main()
{
    string np[50];
    string tp;
    int n,i,l;



    cout<<"Enter the number of Licence plates"<<endl;
    cin>>n;

    cout<<"Enter the starting index number"<<endl;
    cin>>l;

    for(i=0;i<n;i++){
        cout<<"Enter number plate "<<i+1<<" "<<endl;
        cin>>np[i];
      }

      cout<<"Enter target number plate"<<endl;
      cin>>tp;

      for(i=l;i<n;i++){
        if(np[i]==tp){
            cout<<"Target number plate is at index number "<<i;
        }
      }
}
*/



#include<iostream>
using namespace std;


void fnd(int l){


    string np[50];
    string tp;
    int n,i;

    for(i=0;i<n;i++){
        cout<<"Enter number plate "<<i+1<<" "<<endl;
        cin>>np[i];
      }

      cout<<"Enter target number plate"<<endl;
      cin>>tp;

      for(i=l;i<n;i++){
        if(np[i]==tp){
            cout<<"Target number plate is at index number "<<i;
        }
      }
}
int main()
{
    string np[50];
    string tp;
    int n,i,l;



    cout<<"Enter the number of Licence plates"<<endl;
    cin>>n;

    cout<<"Enter strating Index Number"<<endl;
    cin>>l;

    fnd(l);



}



