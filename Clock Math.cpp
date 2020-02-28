#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    int h,m;

    cin>>h>>m;

    float output,hour,minute,degree;

    hour=(((60*h)+m)*0.5);
    minute=m*6;

    output=abs(hour-minute);

    if(output>180)
    {

        degree=360-output;
        cout<<fixed<<setprecision(7)<<degree<<endl;

    }


    else  cout<<fixed<<setprecision(7)<<output<<endl;






    return 0;
}
