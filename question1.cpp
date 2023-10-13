#include<iostream>
using namespace std ;

 
int main ()
{
    // int m ;
    // cout << "enter the number of rows ";
    // cin>> m ;
    // int n ;
    // cout << "enter the number of columns ";
    // cin >> n ;
    int brr[3][3] ;
    int m =3 ;
    int n = 3;
    for (int i=0; i<m;i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cin >> brr[i][j];
        }
    }
     for(int i=0 ; i<3;i++)
    {
        for (int j=0; j<3;j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl ;
    }
    cout<< endl ;
   
    int arr[3][3];
    for (int i=0 ; i<m;i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if (brr[i][j]==0) {
                for (int t=0 ; t <m ; t++) arr[t][j] = 0 ;
                for (int p=0 ; p < n ; p++) arr[i][p] = 0 ;
            }
            else {
                if (arr[i][j]==0) continue ;
                else  arr[i][j] = brr[i][j];
            }
        }
    }
     for(int i=0 ; i<3;i++)
    {
        for (int j=0; j<3;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }
  
  
}