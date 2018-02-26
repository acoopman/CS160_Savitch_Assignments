// Section CSC160 - Computer Science I: C++

// File Name:lesson5-619-11

// Student:Aidan Coopman

// Homework Number:lesson 5 #11

// Description:

// Last Changed:



#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

//----------------------------------------------------------------------
//--------------------------------------------------------------------
//decalring a class
class Movie
{
  
public :
  
  //constructors and destructor
  Movie();
  //a constructor that accept an initial movie name and movie rating.
  Movie(string name_in, string mpaa_rating_in);
  //destructor
  ~Movie();
  
  //public accessor and mutator member functions getName(), setName(), setRating(), getRating(), addRating(), and getAverage().
  string getName();
  void   setName(string in);
  string getMPAA_rating();
  void   setMPAA_rating(string in);
  void   addRating(int newReview);
  double getAverage();
  
private :
//seven private member variables that will be used to describe the object attributes described in the programming problem.  
  string name;
  string mpaa_rating;
  double avgReview;
  int terrible;
  int bad;
  int ok;
  int good;
  int great;
  int rating;
  int num_ratings; //total number of reviews
};

//------------------------------------------------------------------------

int main( )
{
  
  Movie movie1;
  string movie1_name = "The Ajustment Bureau";
  movie1.setName(movie1_name);
  string mpaa1 = "PG-13";
  movie1.setMPAA_rating(mpaa1);
  
  //do 5 ratings and do an extra one to show it does not add an invalid rating
  movie1.addRating(5);
  movie1.addRating(4);
  movie1.addRating(5);
  movie1.addRating(4);
  movie1.addRating(5);
  movie1.addRating(6);//test case to show that only valid ratings work
  
  cout << movie1.getName() << ", " << movie1.getMPAA_rating() << ", Average rating: " << movie1.getAverage() << endl;
  
  //-----------------------------------------------------------
  //Second Movie
  string movie2_name = "I Am Number Four";
  string mpaa2       = "PG-13"; 
  //use the overloaded constructor to test 
  Movie movie2(movie2_name,mpaa2);
  
  //do 5 ratings like teacher's example
  movie2.addRating(2);
  movie2.addRating(2);
  movie2.addRating(3);
  movie2.addRating(3);
  movie2.addRating(2);
  
  cout << movie2.getName() << ", " << movie2.getMPAA_rating() << ", Average rating: " << movie2.getAverage() << endl;
  
  return 0;
}
//define the function of the class
//--------------------------------------------------------------------
//constructor
Movie::Movie()
{
  mpaa_rating = "No info for MPAA";
  name        = "No name for Movie";
  rating      = 0;
  terrible    = 0;
  bad         = 0;
  ok          = 0;
  good        = 0;
  great       = 0;
  num_ratings = 0;
}
//---------------------------------------------------------------------
//a constructor that accept an initial movie name and movie rating.
Movie::Movie(string name_in, string mpaa_rating_in)
{
  name        = name_in;
  mpaa_rating = mpaa_rating_in;
  rating      = 0;
  terrible    = 0;
  bad         = 0;
  ok          = 0;
  good        = 0;
  great       = 0;
  num_ratings = 0;
}
//---------------------------------------------------------------------
//destructor
Movie::~Movie()
{
  
}
//---------------------------------------------------------------------
string Movie::getName()
{
  return name; 	
}
void Movie::setName(string in)
{
  name = in;
}
//---------------------------------------------------------------------
void Movie::addRating(int newReview)
{
  switch (newReview)
    {
    case 1: 
      terrible++;
      break;
    case 2: 
      bad++;
      break;
    case 3: 
      ok++;
      break;
    case 4: 
      good++;
      break;
    case 5: 
      great++;
      break;
    default:
      cout << "Rating is not valid\n";
      num_ratings--; //this rating is not valid so we cannot count it
    }
  
  //keep a count of the number of ratings
  num_ratings++;
}
//-------------------------------------------------------------------------
double Movie::getAverage()
{
  if(num_ratings == 0)
    return 0;
  
  avgReview = ((terrible * 1) + (bad * 2) + (ok * 3) + (good * 4) + (great * 5))/static_cast<float>(num_ratings);
  return avgReview;
}
//--------------------------------------------------------------------------
string Movie::getMPAA_rating()
{
  return mpaa_rating;
}
//-------------------------------------------------------------------------------
void Movie::setMPAA_rating(string in)
{
  mpaa_rating = in;
}
//------------------------------------------------------------------------------

