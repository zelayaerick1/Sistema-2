#include <iostream>

using namespace std;

int main()
{
    int c1=0,c2=0,c3=0;
    int num;
    int c=0;
    int mayor=0;
    int menor=1000000000;
    double suma1;
    double suma2;
    double suma3;
    double Promedio1;
    double Promedio2;
    double Promedio3;

    while (c<5)
    {
        cout <<"ingresar numero...:";
        cin>>num;
        {if (num>mayor)
        {
            mayor=num;
        }}
        {if (num<menor)
        {
            menor=num;
        }}

        if ((num>=1) and (num<=50))
            {c1++;
            suma1+=num;
            {
                if(c1>0)
                    Promedio1=suma1/c1;
                else
                    Promedio1=0;

            }}

        else if ((num>=51) and (num<=100))
               {c2++;
            suma2+=num;
            {
                if(c2>0)
                    Promedio2=suma2/c2;
                else
                    Promedio2=0;

            }}
            if(num>101)
            {
                c3++;
                suma3+=num;
                {
                    if (c3>0)
                        Promedio3=suma3/c3;
                    else
                        Promedio3=0;

                }}
                c++;



    }
   cout<<"Numero Mayor...:   "<<mayor<<"\n";
   cout<<"Numero Menor...:  "<<menor<<"\n";
   cout<<"contador 0-50...:  "<<c1<<"\n";
   cout<<"contador 51-100...: "<<c2<<"\n";
   cout<<"contador 80...: "<<c3<<"\n";
   cout<<"Promedio 0-50...:  "<<Promedio1<<"\n";
   cout<<"Promedio 51-100...:  "<<Promedio2<<"\n";
   cout<<"Promedio 100...:   "<<Promedio3<<"\n";
    return 0;
}

