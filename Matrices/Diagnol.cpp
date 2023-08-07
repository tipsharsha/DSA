#include <stdio.h>

class Diagnol
{
    private:
        int* A;
        int n;
    public:
        Diagnol()
        {
            n = 2;
            A = new int[2];
        }
        Diagnol(int n)
        {
            this->n = 2;
            this->A = new int[n];
        }
        ~Diagnol()
        {
            delete []A;
        }
        void Set(int i,int j, int x);
        int Get(int i,int j);
        int Display();
        int Get_Dimension()
        {
            return this->n;
        }
};
void Diagnol::Set(int i,int j,int x)
{
    if(i==j)
    {
        A[i-1] = x;
    }
    else{
        printf("Error Off diagnol elements can not be set to non zero value");
    }
}
int Diagnol::Get(int i,int j)
{
    if (i == j)
    {
        return A[i-1];
    }
    else
    {
        return 0;
    }
}
int Diagnol::Display()
{
    for(int i =0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i==j){printf("%d ",A[i-1]);}
            else{printf("0 ");}
        }
        printf("\n");
    }
}
int main()
{
 int d;
 cout<<"Enter Dimensions";
 cin>>d;

 Diagonal dm(d);

 int x;
 cout<<"Enter All Elements";
 for(int i=1;i<=d;i++)
 {
 for(int j=1;j<=d;j++)
 {
 cin>>x;
 dm.Set(i,j,x);
 }
 }

 dm.Display();
 return 0;
}