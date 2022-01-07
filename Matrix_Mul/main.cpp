#include <iostream>   
#include <math.h>

using namespace std; 
int main()
{

float mul[3][1] , a[3][3], b [3][1];
a [1][1] = -(1/3);
a [1][2] = 2/3;
a [1][3] = 0;
a [2][1] = -(1/3);
a [2][2] = -(1/3);
a [2][3] = -(0.57735026919);
a [3][1] = -(1/3);
a [3][2] = -(1/3);
a [3][3] = 0.57735026919;

b [1][1]= 1;
b [2][1]= 2;
b [3][1]= 3;

    for(int i=0; i<3; i++)    
    {    
        for(int j=0 ;j<3; j++)    
        {    
            //float mul[i][j]=0;    
            for(int k=0; k<1; k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    


    for(int i=0; i<3; i++)    
    {    
        for(int j=0 ;j<3; j++)    
        {    
            cout<<mul[i][j];
        }
    }
return 0;
}
