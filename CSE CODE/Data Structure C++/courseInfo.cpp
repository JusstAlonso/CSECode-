#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

  struct Time
{

   int hour;
   int minute;
   int second;



}before ,after;

struct Info 
{

    string name;
    int credits;
    bool majorReq;
    double avgGrade;
    string days;
    




};

bool TimeFromUser (struct Time *slots )
{

 string temp1,temp;
  int first,second,third;
   string userIn;
   getline(cin,userIn);
    temp1 = userIn;
      temp1 = temp1.substr(0,2);
        slots->hour =  ((atoi(temp1.c_str()) >=0 && atoi(temp1.c_str()) <24 )? atoi(temp1.c_str()) : -1  );
     if ( userIn.find(":",0))
           temp = userIn.substr(3,2);
           slots->minute = ((atoi(temp.c_str()) >=0 && atoi(temp.c_str()) <60 )? atoi(temp.c_str()) : -1);
            if(userIn.find(":",2))

           userIn = userIn.substr(6,2);
          slots->second= ((atoi(userIn.c_str()) >=0 && atoi(userIn.c_str()) <60 )? atoi(userIn.c_str()) : -1  );
           return (first*second*third);

}



void print24Hours (struct Time times)
{

cout<<times.hour<<":"<<times.minute<<":"<<times.second;


}

int main()
   {
            cout << "Enter the start time for the lecture(format is HH:MM:SS):";
       if( TimeFromUser(&before) < 0)
{
                cout<<"You entered an incorrect start time"<<endl;
                  return 0;
    }
      else
           cout << "Enter end  time for the lecture(format is HH:MM:SS):";

            if (TimeFromUser(&after) < 0 )
         {
             cout<<"You entered the wrong end time ";
                    return 0;
    }
         else
   {
             cout<<"The lecture starts at"; print24Hours(before);
                 cout<< " and ends at "; print24Hours(after);
}
   struct Info p;
   string line;
   ifstream newFile("in.txt") ;
 
   newFile.open();
     while (getline(newFile,line))
{
    cout << line ;
    cin >> p.name;
    cout << line;
     cin >> p.credits;
}

     newFile.close();

      

}

