/******************************************************************
By: huangh
initially made this to learn git...might as well make it better. 

calculates for you the GPA you need to get a certain goal GPA by
the time you graduate. 

Features to add: 
-figure out combination of class grades that could add up to desired GPA
-good error checking
-gui
-modularize
-crawl BU website for graduation GPA requirements (woahhh)

flesh_out branch - flesh out logic and error checking

******************************************************************/

#include <iostream>
#include "math.h"

using namespace std; 

int main(){

double gpa, gpa_want, gpa_need, credit_remain, honor; 
double grad_credit = 132; 

cout << "Enter your GPA: "; 
cin >> gpa; 
while(gpa < 0 || gpa > 4)
{
  cout << "Invalid GPA. Enter your GPA on the 4.0 scale: ";
  cin >> gpa;
} 

cout << "Enter the number of \"Honor Points\" you have: "; 
cin >> honor;
while(honor < 0 || honor > 4*grad_credit)
{
  cout << "You can't have that many honor points. Enter a valid number of HP under 528: ";
  cin >> honor;
} 

cout << "What is your desired GPA upon graduation? ";
cin >> gpa_want;
while(gpa_want < 0 || gpa_want > 4)
{
  cout << "You can't get that GPA...makes no sense. Enter a valid GPA between 0.0 and 4.0: ";
  cin >> gpa_want;
} 

gpa_need = ((gpa_want*grad_credit) - honor)/(grad_credit - honor/gpa);

cout << "The GPA you need to get to achieve a " << gpa_wants << "overall GPA is a \n" << gpa_need << "GPA for the remaining " << honor/gpa << "credits till you graduate" << endl;


system("pause");







}