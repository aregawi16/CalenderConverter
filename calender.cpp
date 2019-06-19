#include<iostream>
#include <cmath>
using namespace std;
class calender
{
	private:
	int year;
	int date;
	int month;
		int gy,gd,gm,ey,ed,em;
	public:
	void get_Ecalender();
		void get_Gcalender();

	void put_Gcalender();
	void put_Ecalender();
	void To_gregorian();
	void To_ethiopian();
};

void calender::get_Ecalender()
{

	cout<<"Enter the  ethiopian calender"<<endl;
	cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
	if(month>13||month<1)//inorder control validity of month
	{
		cout<<"error::"<<"ethiopian  months con not be be less than 1 and greater than 13"<<endl;
		while(month>13||month<1)//inorder control validity of month
	{
		{
		cout<<"Please Enter a valid calender:"<<endl;
		cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;}}
		
	cout<<"Enter date:";
	cin>>date;
	if(date>30||date<1)//inordert to control validity of date in a month
	{
		cout<<"error::"<<"all ethiopian dates are  from 1 up to 30 dates  "<<endl;
		while(date>30||date<1)//inordert to control validity of date in a month
		{
		cout<<"Please Enter a valid calender:"<<endl;
			cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
	cout<<"Enter date:";
cin>>date;}}
}
void calender::get_Gcalender()
{

	cout<<"Enter the  Gregorian calender"<<endl;
	cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
	if(month>12||month<1))//inordert to control validity of date in a month
	{
		cout<<"error::"<<"gregorian months can not be less than 1 and greater than 12"<<endl;
		while(month>12||month<1))//inordert to control validity of date in a month
		{
		cout<<"Please Enter a valid calender:"<<endl;
		cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
	}}
	cout<<"Enter date:";
	cin>>date;
if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&(date>31||date<1))//inordert to control validity of date in a month that have 31 days
	{
		while((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&(date>31||date<1))//inordert to control validity of date in a month that have 31 days
		{
		cout<<"error::"<<"the month that you  entered have not on the interval 1<=date<=31"<<endl;
			cout<<"Please Enter a valid calender:"<<endl;
			cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
		cout<<"Enter date:";
	cin>>date;}}
	else if((month==4||month==6||month==9||month==11)&&(date>30||date<1))//inordert to control validity of date in a month that have 30 days
	{
		
		while((month==4||month==6||month==9||month==11)&&(date>30||date<1))//inordert to control validity of date in a month that have 30 days
		{
			cout<<"error::"<<"the month that you  entered have not on the interval 1<=date<=30"<<endl;
			cout<<"Please Enter a valid calender:"<<endl;
			cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
		cout<<"Enter date:";
	cin>>date;}
	}
	else 
	{
		if(((year%400==0)||(year%4==0&&year%100!=0))&&month==2&&(date>29||date<1))//inordert to control validity of date in march of of leap year
		{
			
		while(((year%400==0)||(year%4==0&&year%100!=0))&&month==2&&(date>29||date<1)||((year%400!=0)&&(year%4!=0||year%100==0))&&month==2&&(date>28|date<1))
			//inordert to control validity of date in march of of leap year or non leap year;
		{
			if(((year%400==0)||(year%4==0&&year%100!=0))&&month==2&&(date>29||date<1))//enter the calender if it is leap year
			{
			cout<<"error::"<<"march of leap year have the interval 1<=date<=29"<<endl;
			cout<<"Please Enter a valid calender:"<<endl;
			cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
		cout<<"Enter date:";
		cin>>date;
		}
		
	else if(((year%400!=0)&&(year%4!=0||year%100==0))&&month==2&&(date>28||date<1))//enter the calender if it is not leap year
	{
		cout<<"error::"<<"march of non leap year have the interval 1<=date<=28"<<endl;
			cout<<"Please Enter a valid calender:"<<endl;
			cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
		cout<<"Enter date:";
	cin>>date;}	
			
		}
		}
		else
		{
			while(((year%400==0)||(year%4==0&&year%100!=0))&&month==2&&(date>29||date<1)||((year%400!=0)&&(year%4!=0||year%100==0))&&month==2&&(date>28||date<1))
				//inordert to control validity of date in march of of leap year or non leap year;
		{
			if(((year%400==0)||(year%4==0&&year%100!=0))&&month==2&&(date>29||date<1))//enter the calender if it is leap year
			{
			cout<<"error::"<<"march of leap year have the interval 1<=date<=29"<<endl;
			cout<<"Please Enter a valid calender:"<<endl;
			cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
		cout<<"Enter date:";
		cin>>date;
		}
		
	else if(((year%400!=0)&&(year%4!=0||year%100==0))&&month==2&&(date>28||date<1))
		//enter the calender if it is not leap year
	{
		cout<<"error::"<<"march of non leap year have the interval 1<=date<=28"<<endl;
			cout<<"Please Enter a valid calender:"<<endl;
			cout<<"Enter year:";
	cin>>year;
	cout<<"Enter month:";
	cin>>month;
		cout<<"Enter date:";
	cin>>date;}	
			
		}
	
		}
	}
}
void calender::To_gregorian()
{
	int ly;
if((year%400==0&&year%100==0)||(year%4==0&&year%100!=0))//if the year is leap year;
{
if(month==1)
{
gd=date+11;
gm=month+8;
gy=year+7;
if(gd>30)
{
gd=gd%30;
gm++;
}
}
else if(month==2)
{
gd=date+11;
gm=month+8;
gy=year+7;
if(gd>31)
{
gd=gd%31;
gm++;
}
}
else if(month==3)
{
gd=date+10;
gm=month+8;
gy=year+7;
if(gd>30)
{
gd=gd%30;
gm++;
}
}
else if(month==4)
{
gd=date+10;
gm=month+8;
gy=year+7;
 if(gd>31)
{
gy++;
month++;
gd=gd%31;
gm=month-4;
}
}
else if(month==5)
{
gd=date+9;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==6)
{
gd=date+8;
gm=month-4;;
gy=year+8;
if(gd>29)
{

gd=gd%29;
gm++;
}
}
else if(month==7)
{
gd=date+9;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==8)
{
gd=date+8;
gm=month-4;
gy=year+8;
if(gd>30)
{
gd=gd%30;
gm++;
}
}
else if(month==9)
{
gd=date+8;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==10)
{
gd=date+7;
gm=month-4;;
gy=year+8;
if(gd>30)
{

gd=gd%30;
gm++;
}
}
else if(month==11)
{
gd=date+7;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==12)
{
gd=date+6;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==13)//here users must enter date less than 6
{
if(date>5)
{
cout<<"there is no more than 5 days in this month\n";
cout<<"if yuo want to continue please enter the valid date of the month\n";
cin>>date;
}
gd=date+5;
gm=month-4;;
gy=year+8;
}
}
else//if the yeaar not leap year;
{
if(month==1)
{
gd=date+10;
gm=month+8;
gy=year+7;
if(gd>30)
{
gd=gd%30;
gm++;
}
}
else if(month==2)
{
gd=date+10;
gm=month+8;
gy=year+7;
if(gd>31)
{
gd=gd%31;
gm++;
}
}
else if(month==3)
{
gd=date+9;
gm=month+8;
gy=year+7;
if(gd>30)
{
gd=gd%30;
gm++;
}
}
else if(month==4)
{
gd=date+9;
gm=month+8;
gy=year+7;
 if(gd>31)
{
gy++;
month++;
gd=gd%31;
gm=month-4;
}
}
else if(month==5)
{
gd=date+8;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==6)
{
gd=date+7;
gm=month-4;;
gy=year+8;
if(gd>29)
{

gd=gd%29;
gm++;
}
}
else if(month==7)
{
gd=date+9;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==8)
{
gd=date+8;
gm=month-4;
gy=year+8;
if(gd>30)
{
gd=gd%30;
gm++;
}
}
else if(month==9)
{
gd=date+8;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==10)
{
gd=date+7;
gm=month-4;;
gy=year+8;
if(gd>30)
{

gd=gd%30;
gm++;
}
}
else if(month==11)
{
gd=date+7;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==12)
{
gd=date+6;
gm=month-4;;
gy=year+8;
if(gd>31)
{

gd=gd%31;
gm++;
}
}
else if(month==13)//here users must enter date less than 6
{
ly=year+1;
if(ly%400==0||ly%4==0&&ly%100!=0)
{
if(date>6)
{
cout<<"there is no more than 6 days in this month"<<endl;;
cout<<"if yuo want to continue please enter the valid date of the month"<<endl;
cin>>date;
}
gd=date+5;
gm=month-4;;
gy=year+8;
}
else
{
if(date>5)
{
cout<<"there is no more than 5 days in this month"<<endl;;
cout<<"if you want to continue please enter the valid date of the month"<<endl;;
cin>>date;
}
gd=date+5;
gm=month-4;;
gy=year+8;
}
}
}
}
void calender::put_Gcalender()
{
	int fmonth, leap;
	
   int dayOfWeek;
   int YY = year % 100;
   int century = year / 100;
 
	
   //leap function 1 for leap & 0 for non-leap
   if ((year % 100 == 0) && (year % 400 != 0))
      leap = 0;
   else if (year % 4 == 0)
      leap = 1;
   else
      leap = 0;
 
   fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))
         + (5 * month + month / 9) / 2;
 
   //bring it in range of 0 to 6
   fmonth = fmonth % 7;
    dayOfWeek = 1.25 * YY + fmonth + date - 2 * (century % 4);
 
   //remainder on division by 7
   dayOfWeek = dayOfWeek % 7;
   cout<<"Ethiopian caleder date :month:year respectively"<<endl;
   switch (dayOfWeek) {
      case 0:
         cout<<" Saturday ";
         break;
      case 1:
         cout<<" Sunday ";
         break;
      case 2:
         cout<<" Monday  ";
         break;
      case 3:
         cout<<"Tuesday ";
         break;
      case 4:
         cout<<" Wednesday ";
         break;
      case 5:
         cout<<" Thursday ";
         break;
      case 6:
         cout<<"Friday";
         break;
      default:
         cout<<"Incorrect data";
   }
   
	cout<<date<<"/"<<month<<"/"<<year<<" EC"<<endl;
	cout<<"Grgorian caleder date :month:year respectively"<<endl;
	switch (dayOfWeek) {
      case 0:
         cout<<" Saturday ";
         break;
      case 1:
         cout<<" Sunday ";
         break;
      case 2:
         cout<<" Monday  ";
         break;
      case 3:
         cout<<"Tuesday ";
         break;
      case 4:
         cout<<" Wednesday ";
         break;
      case 5:
         cout<<" Thursday ";
         break;
      case 6:
         cout<<"Friday";
         break;
      default:
         cout<<"Incorrect data";
   }
	cout<<gd<<"/"<<gm<<"/"<<gy<<" GC"<<endl;

}
void calender::To_ethiopian()
{
	int ly;
	if(year%400==0||year%4==0&&year%100!=0)
{
    if(month==1)
    {
        if(date<10)
            {
            em=month+3;
            ed=date+30-9;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-9;
            ey=year-8;
            }

    }
  else if(month==2)
    {
          if(date<9)
            {
            em=month+3;
            ed=date+30-8;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-8;
            ey=year-8;

        }
    }

else if(month==3)
    {
          if(date<10)
            {
            em=month+3;
            ed=date+30-9;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-9;
            ey=year-8;

        }
    }
    else if(month==4)
    {
          if(date<10)
            {
            em=month+3;
            ed=date+30-9;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-9;
            ey=year-8;

        }
    }

else if(month==5)
    {
          if(date<9)
            {
            em=month+3;
            ed=date+30-8;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-8;
            ey=year-8;

        }
    }
else if(month==6)
    {
          if(date<8)
            {
            em=month+3;
            ed=date+30-7;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-7;
            ey=year-8;

        }
    }
else if(month==7)
    {
          if(date<8)
            {
            em=month+3;
            ed=date+30-7;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-7;
            ey=year-8;

        }
    }


else if(month==8)
    {
          if(date<7)
            {
            em=month+3;
            ed=date+30-6;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-6;
            ey=year-8;

        }
    }

else if(month==9)
    {
          if(date<6)
            {
            em=month+3;
            ed=date+30-5;
            ey=year-8;
            }
            else if(date>=6&&date<=10)
            {
                em=month+4;
                ed=date-5;
                ey=year-8;
            }
        else
            {
            em=month-8;
            ed=date-10;
            ey=year-7;

        }
    }

else if(month==10)
{
    if(date<11)
    {
        em=month-9;
        ed=date+30-10;
        ey=year-7;
    }
    else
        {
         em=month-8;
        ed=date-10;
        ey=year-7;

        }
}

 else if(month==11)
{
    if(date<10)
    {
        em=month-9;
        ed=date+30-9;
        ey=year-7;
    }
    else
        {
         em=month-8;
        ed=date-9;
        ey=year-7;

        }
}

else if(month==12)
{
    if(date<10)
    {
        em=month-9;
        ed=date+30-9;
        ey=year-7;
    }
    else
        {
         em=month-8;
        ed=date-9;
        ey=year-7;

        }
}}
else
    {
        if(month==1)
    {
        if(date<9)
            {
            em=month+3;
            ed=date+30-8;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-8;
            ey=year-8;
            }

    }
  else if(month==2)
    {
          if(date<8)
            {
            em=month+3;
            ed=date+30-7;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-7;
            ey=year-8;

        }
    }

else if(month==3)
    {
          if(date<10)
            {
            em=month+3;
            ed=date+30-9;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-9;
            ey=year-8;

        }
    }
    else if(month==4)
    {
          if(date<10)
            {
            em=month+3;
            ed=date+30-9;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-9;
            ey=year-8;

        }
    }

else if(month==5)
    {
          if(date<9)
            {
            em=month+3;
            ed=date+30-8;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-8;
            ey=year-8;

        }
    }
else if(month==6)
    {
          if(date<9)
            {
            em=month+3;
            ed=date+30-8;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-8;
            ey=year-8;

        }
    }
else if(month==7)
    {
          if(date<8)
            {
            em=month+3;
            ed=date+30-7;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-7;
            ey=year-8;

        }
    }


else if(month==8)
    {
          if(date<7)
            {
            em=month+3;
            ed=date+30-6;
            ey=year-8;
            }
        else
            {
            em=month+4;
            ed=date-6;
            ey=year-8;

        }
    }

else if(month>=9)
    {
        if((year+1)%400!=0||(year+1)%4!=0&&(year+1)%100==0)
        {
            if(month==9)
            {

                   if(date<6)
            {
            em=month+3;
            ed=date+30-5;
            ey=year-8;
            }
            else if(date>=6&&date<=10)
            {
                em=month+4;
                ed=date-5;
                ey=year-8;
            }
        else
            {
            em=month-8;
            ed=date-10;
            ey=year-7;

            }
            }

else if(month==10)
{
    if(date<11)
    {
        em=month-9;
        ed=date+30-10;
        ey=year-7;
    }
    else
        {
         em=month-8;
        ed=date-10;
        ey=year-7;

        }
}

 else if(month==11)
{
    if(date<10)
    {
        em=month-9;
        ed=date+30-9;
        ey=year-7;
    }
    else
        {
         em=month-8;
        ed=date-9;
        ey=year-7;

        }
}

else if(month==12)
{
    if(date<10)
    {
        em=month-9;
        ed=date+30-9;
        ey=year-7;
    }
    else
        {
         em=month-8;
        ed=date-9;
        ey=year-7;

        }
}
        }
        else
        {
             if(month==9)
            {

                   if(date<6)
            {
            em=month+3;
            ed=date+30-5;
            ey=year-8;
            }
            else if(date>=6&&date<=11)
            {
                em=month+4;
                ed=date-5;
                ey=year-8;
            }
        else
            {
            em=month-8;
            ed=date-11;
            ey=year-7;

            }
            }

else if(month==10)
{
    if(date<12)
    {
        em=month-9;
        ed=date+30-11;
        ey=year-7;
    }
    else
        {
         em=month-8;
        ed=date-11;
        ey=year-7;

        }
}

 else if(month==11)
{
    if(date<11)
    {
        em=month-9;
        ed=date+30-10;
        ey=year-7;
    }
    else
        {
         em=month-8;
        ed=date-10;
        ey=year-7;

        }
}

else if(month==12)
{
    if(date<11)
    {
        em=month-9;
        ed=date+30-10;
        ey=year-7;
    }
    else
        {
         em=month-8;
        ed=date-10;
        ey=year-7;

        }
}
        }

    }

    }
}
void calender::put_Ecalender()
{
	int fmonth, leap;
	
   int dayOfWeek;
   int YY = year % 100;
   int century = year / 100;
 
	cout<<"Ethiopian caleder date :month:year respectively"<<endl;
   //leap function 1 for leap & 0 for non-leap
   if ((year % 100 == 0) && (year % 400 != 0))
      leap = 0;
   else if (year % 4 == 0)
      leap = 1;
   else
      leap = 0;
 
   fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))
         + (5 * month + month / 9) / 2;
 
   //bring it in range of 0 to 6
   fmonth = fmonth % 7;
    dayOfWeek = 1.25 * YY + fmonth + date - 2 * (century % 4);
 
   //remainder on division by 7
   dayOfWeek = dayOfWeek % 7;
	cout<<"Gregorian caleder date :month:year respectively"<<endl;
	switch (dayOfWeek) {
      case 0:
         cout<<" Saturday ";
         break;
      case 1:
         cout<<" Sunday ";
         break;
      case 2:
         cout<<" Monday  ";
         break;
      case 3:
         cout<<"Tuesday ";
         break;
      case 4:
         cout<<" Wednesday ";
         break;
      case 5:
         cout<<" Thursday ";
         break;
      case 6:
         cout<<"Friday";
         break;
      default:
         cout<<"Incorrect data";
   }
	cout<<date<<"/"<<month<<"/"<<year<<" GC"<<endl;
	cout<<"Ethiopian caleder date :month:year respectively"<<endl;
	switch (dayOfWeek) {
      case 0:
         cout<<" Saturday ";
         break;
      case 1:
         cout<<" Sunday ";
         break;
      case 2:
         cout<<" Monday  ";
         break;
      case 3:
         cout<<"Tuesday ";
         break;
      case 4:
         cout<<" Wednesday ";
         break;
      case 5:
         cout<<" Thursday ";
         break;
      case 6:
         cout<<"Friday";
         break;
      default:
         cout<<"Incorrect data";
   }
	cout<<ed<<"/"<<em<<"/"<<ey<<" EC"<<endl;
}

main()
{
	calender cal1,cal2;
	char select;
	cout<<"Enter the character to choose what you want"<<endl;
	cout<<"Enter G if you want to change Ethiopian to Gregorian calender"<<endl;
	cout<<"Enter  E if you want to change Gregorian to Ethiopian calender"<<endl;
	cin>>select;
	switch(select)
	{
		case 'G':
	cal1.get_Ecalender();
	cal1.To_gregorian();
		cal1.put_Gcalender();
		break;
		case 'E':
		cal1.get_Gcalender();
		cal1.To_ethiopian();
		cal1.put_Ecalender();
		break;
		default:
		cout<<"error";
		break;
	}

}
