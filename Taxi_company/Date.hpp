#pragma once
#include<iostream>
#include<ctime>

using namespace std;

class Date
{
    int day;
    int month;
    int year;

    bool isleapyear()const;
    int monthdays()const;

    void nextDate();
    void prevDate();

public:
    Date();
    Date(int day, int month, int year);

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    int getDay()const;
    int getMonth()const;
    int getYear()const;

    bool valid()const;

    void showInfo()const;
    
    //--------- Œœ≈–¿“Œ–€ —–¿¬Õ≈Õ»ﬂ ---------

    bool operator == (const Date& obj)const&;
    bool operator != (const Date& obj)const&;
    bool operator > (const Date& obj)const&;
    bool operator < (const Date& obj)const&;
    bool operator >= (const Date& obj)const&;
    bool operator <= (const Date& obj)const&;

    //--------- Œœ≈–¿“Œ–€ œ–»—¬Œ≈Õ»ﬂ ---------

    Date& operator += (int days); //‰Ó·‡‚ËÚ¸ days ‰ÌÂÈ Í ‰‡ÚÂ
    Date& operator -= (int days); //‚˚˜ÂÒÚ¸ days ‰ÌÂÈ ËÁ ‰‡Ú˚
    Date& operator += (float months); //‰Ó·‡‚ËÚ¸ months ÏÂÒˇˆÂ‚ Í ‰‡ÚÂ
    Date& operator -= (float months); //‚˚˜ÂÒÚ¸ months ÏÂÒˇˆÂ‚ ËÁ ‰‡Ú˚
    Date& operator += (long years); //‰Ó·‡‚ËÚ¸ years ÎÂÚ Í ‰‡ÚÂ
    Date& operator -= (long years); //‚˚˜ÂÒÚ¸ years ÎÂÚ ËÁ ‰‡Ú˚

    //--------- ¿–»‘Ã≈“»◊≈— »≈ Œœ≈–¿“Œ–€ ---------

    Date operator + (int days)const&;
    Date operator - (int days)const&;
    Date operator + (float months)const&; //‰Ó·‡‚ËÚ¸ months ÏÂÒˇˆÂ‚ Í ‰‡ÚÂ
    Date operator - (float months)const&; //‚˚˜ÂÒÚ¸ months ÏÂÒˇˆÂ‚ ËÁ ‰‡Ú˚
    Date operator + (long years)const&; //‰Ó·‡‚ËÚ¸ years ÎÂÚ Í ‰‡ÚÂ
    Date operator - (long years)const&; //‚˚˜ÂÒÚ¸ years ÎÂÚ ËÁ ‰‡Ú˚

    int operator-(const Date& obj)const; //ÍÓÎË˜ÂÒÚ‚Ó ‰ÌÂÈ ÏÂÊ‰Û ‰‡Ú‡ÏË
    Date& operator -- ();
    Date operator -- (int);
    Date& operator ++ ();
    Date operator ++ (int);

    friend Date operator + (int n, const Date& a);
    friend Date operator - (int n, const Date& a);

    friend ostream& operator << (ostream& os, const Date& t);
    friend istream& operator >> (istream& is, Date& t);
};


