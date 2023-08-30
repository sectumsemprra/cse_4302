#include <iostream>
using namespace std;
class time 
{
    private:
    int hour=0, minute=0, second=0;
    public :
    int time_hour ()
    {
        return hour;
    }
    int time_minute()
    {
        return minute;
    }
    int time_second()
    {
        return second;
    }
    void reset (int h,int m , int s)
    {
       second += s;
        if(second >= 60)
        {
            minute++; second%=60;
        }
        minute+=m;
        if(minute >= 60)
        {
            hour++; minute%=60;
        }
        hour += h;
        hour%=24;
    }
    void advance (int h,int m,int s)
    {
        second += s;
        if(second >= 60)
        {
            minute++; second%=60;
        }
        minute+=m;
        if(minute >= 60)
        {
            hour++; minute%=60;
        }
        hour += h;
        hour%=24;

    }
    void print ()
    {
        cout << "The time is "<<hour <<":"<<minute<<":"<<second<<endl;
    }

};
int main()
{
     int h,m,s;
     cin >> h >> m>> s;
     time t1;
     t1.reset(h,m,s);
     t1.print();
     t1.advance (1,20,20);
     t1.print();
     return 0;
}