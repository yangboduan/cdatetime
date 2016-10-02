#include <boost/algorithm/string.hpp>
#include <string>
#include <vector>
#include <iostream>
#include <ctime>
using namespace std;

string datetime(){
    time_t now = time(0);// 基于当前系统的当前日期/时间
    tm *ltm = localtime(&now);

    char iyear[50],imonth[50],iday[50],ihour[50],imin[50],isec[50];
    sprintf(iyear, "%d",1900 + ltm->tm_year );
    sprintf(imonth, "%02d", 1 + ltm->tm_mon );
    sprintf(iday, "%02d", ltm->tm_mday );
    sprintf(ihour, "%02d", ltm->tm_hour );
    sprintf(imin, "%02d",  ltm->tm_min);
    sprintf(isec, "%02d",  ltm->tm_sec);

    vector<string> sDate{iyear, imonth, iday};
    vector<string> sTime{ihour, imin, isec};
    string myDate = boost::algorithm::join(sDate, "-") ;
    string myTime = boost::algorithm::join(sTime, ":") ;
    vector<string> sDateTime{myDate, myTime};
    string myDateTime = boost::algorithm::join(sDateTime, " ") ;
    return myDateTime;
}

int main( )
{
        cout << datetime()<< endl;
}
