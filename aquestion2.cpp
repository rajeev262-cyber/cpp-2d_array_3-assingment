#include<iostream>
#include<vector>
using namespace std ;
int main ()
{
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
    vector<int>row(m,0);
    vector<int>col(n,0);
    for (int i=0 ; i<m ; i++)
    {
        for (int j =0 ; j<n ; j++)
        {
            if (brr[i][j]==0){
                row[i] = 1 ;
                col[j] = 1;
            }
        }
    }
    for (int i=0; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            if (row[i]==1 || col[j] == 1 ){
                brr[i][j] = 0;
            }
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
}