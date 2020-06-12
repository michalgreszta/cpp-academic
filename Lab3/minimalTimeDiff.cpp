#include <iostream>
#include <vector>

using namespace std;

int getNumber(char x, char y)
{
    return ((x-'0')*10 + y-'0');
}

unsigned int ToMinutes(std::string time_HH_MM)
{
    if(time_HH_MM[1] != ':')
    {
        return (getNumber(time_HH_MM[0], time_HH_MM[1])*60 + getNumber(time_HH_MM[3], time_HH_MM[4]));
    }
    else
    {
        return (getNumber('0', time_HH_MM[0])*60 + getNumber(time_HH_MM[2], time_HH_MM[3]));
    }
}

unsigned int MinimalTimeDifference(vector<string> times)
{
    for(int i=0; i<times.size()-1; i++)
    {
        for(int j=i+1; j<times.size(); j++)
        {
            
        }
    }
}

int main()
{
    vector<string> myVec = {12:05, 7:11, 11:23, 5:98, 01:15};
    cout << MinimalTimeDifference(myVec) << endl;

    return 0;
}
