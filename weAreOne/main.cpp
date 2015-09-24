#include <iostream>

int  judgeAB(int a , int b);
int  judgeBC(int b , int c);
int  judgeCD(int c , int d);
int  judgeDE(int d , int e);
int  judgeADE(int a,int d, int e);

using namespace std;

int main()
{
    int Aer ,Ber, Cer, Der, Eer;
    int A ,B ,C ,D ,E;
    string whoIsRight[2]={"I an not a criminal","I am an criminal"};
    for(Aer = 0 ;Aer < 2; Aer++)
    {
        for(Ber = 0;Ber <2 ;Ber++)
        {
            for(Cer = 0;Cer <2;Cer++)
            {
                for(Der = 0;Der <2;Der++)
                {
                    for(Eer = 0 ;Eer <2 ;Eer++)
                    {
                        if((A = judgeAB(Aer ,Ber)) ==1)
                        if((B = judgeBC(Ber ,Cer)) ==1)
                        if((C = judgeCD(Cer ,Der)) ==1)
                        if((D = judgeDE(Der ,Cer)) ==1)
                        if((E = judgeADE(Aer ,Der ,Eer)) ==1)
                        {
                            cout<<whoIsRight[Aer]<<endl;
                            cout<<whoIsRight[Ber]<<endl;
                            cout<<whoIsRight[Cer]<<endl;
                            cout<<whoIsRight[Der]<<endl;
                            cout<<whoIsRight[Eer]<<endl;

                        }


                    }
                }
            }
        }
    }
}
int judgeAB(int a, int b)
{
    if(a == 1)
    {
        if(b != 1)
        {
            return 0;
        }
        else
            return 1;
    }
    return 1;
}
int judgeBC(int b, int c)
{
    if(b + c == 1)
    {
        return 1;
    }
    else
        return 0;
}
int judgeCD(int c, int d)
{
    if(c + d != 1)
    {
        return 1;
    }
    else
        return 0;
}
int judgeDE(int d, int e)
{
    if(d + e >= 1)
    {
        return 1;
    }
    else
        return 0;
}
int judgeADE(int a, int d, int e)
{
    if(e == 1)
    {
        if( a + d == 2)
        {
            return 1;
        }
        return 0;
    }
    return 1;
}
