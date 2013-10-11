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

update flesh_out branch - merged incorrectly before

******************************************************************/

#include <iostream>
#include "math.h"


int main(){

double gpa = 0.0, //current GPA on 4.0 scale
	gpa_want = 0.0, //desired GPA (4.0 scale)
	gpa_need = 0.0; //calculated GPA value needed for rest of school career
//	credit_remain = 0.0, //calculated number of credits 

int grad_credit = 132, //credits required to graduate for engineering
	credits = 0;

std::cout << "Enter your current GPA (4.0 scale): "; 
std::cin >> gpa; 
while(gpa < 0.0 || gpa > 4.0)
{
  std::cout << "Invalid GPA. Enter your GPA on the 4.0 scale: ";
  std::cin >> gpa;
} 

std::cout << "Enter your total number of credit hours taken thus far (about ~32 per year): "; 
std::cin >> credits;
while(credits < 0 || credits > 132)
{
  std::cout << "You can't have that many. Again please: ";
  std::cin >> credits;
} 

std::cout << "What GPA do you want to graduate with? ";
std::cin >> gpa_want;
while(gpa_want < 0 || gpa_want > 4)
{
  std::cout << "You can't get that GPA...makes no sense. Enter a valid GPA between 0.0 and 4.0: ";
  std::cin >> gpa_want;
} 

gpa_need = (gpa_want*grad_credit - gpa*credits)/(grad_credit - credits);

std::cout << "The GPA you need to get to achieve a " << gpa_want << " overall GPA is a \n" << gpa_need << " GPA for the remaining " << grad_credit - credits << "credits till you graduate" << std::endl;

if( gpa_need > 4.0)
	std::cout << "Sorry bro/bra, can't be done" << std::endl;

system("pause");
}
