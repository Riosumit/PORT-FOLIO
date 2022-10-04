#include<iostream>
using namespace std;

int main(){
    int d, m, y;
    cout<<"Enter today's Date in the format : DD MM YYYY (For example 02 10 2022)\n";
    cin>>d>>m>>y;
    if(d > 0 && d < 28){          // if date is between 0 and 28 then directly it will increased by 1
        d++;
    }
    if(d == 28){                  // if date is 28 then we will check for february month and leap year
        if(m == 2){
            if((y % 100 !=0 || y % 4 == 0) || (y % 400 == 0)){   // if month is february and its leap year then date will increase by 1
                d++;
            }
            else{                 // if month is february ans its not leap year then month will increase and date will become 1
                d = 1;
                m++;
            }
        }
        else{                     // if it is not a february month then date will simply increased by 1
            d++;
        }
    }
    if(d == 29){                  
        if(m == 2){               // if date is 29 and its february month then month will change and date become 1
            d = 1;
            m++;
        }
        else{                     // if date is 29 and its not february month then simply date will increase by 1
            d++;
        }
    }
    if(d == 30){                  // if date is 30
        if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){   // if its month of 31 days like january, march then simply date will increase by 1
            d++;
        }
        else{                     // if its not a month of 31 days then month will change and date will become 1
            d = 1;
            m++;
        }
    }
    if(d == 31){
        d = 1;                   // if date is 31 then it is confimed that next day date will be 1
        if(m == 12){             // if it is december month the month will become 1 and year will increase by 1
            m = 1;
            y++;
        }
        else{                    // if its not december month then simply month will increase by 1
            m++;
        }
    }
    cout << "\nNext day's\n";
    cout << "Date : ";
    if(d < 10){                  // if date is less than 10 then 0 shoud be there before it to maintain the format
        cout << "0" << d << endl;
    }
    else{
        cout << d << endl;
    }
    cout << "Month : ";
    if(m < 10){
        cout << "0" << m << endl;
    }
    else{                        // if date is less than 10 then 0 shoud be there before it to maintain the format
        cout << m << endl;
    }
    cout << "Year : " << y;
}