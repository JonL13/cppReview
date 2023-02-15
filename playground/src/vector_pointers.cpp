/* This is a program that mixes pointers and vectors. */

#include <vector>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

class VP {
  public:
    vector <int> vec;
};

int main()
{
  vector <int> iv;                     // Vector of integers
  vector <int> *ivp;                   // Pointers to vector of integers
  VP *vp;                              // Pointer to an instance of the VP class.
  size_t i;

  /* Set iv to be the first 10 multiples of 11, and print them out. */

  for (i = 0; i < 10; i++) iv.push_back(11*i);

  cout << endl << "Here is a vector of integers called iv:" << endl << endl;
  for (i = 0; i < iv.size(); i++) printf("%2d ", iv[i]); 
  printf("\n");

  /* Set ivp to point to iv -- as you can see, it prints out the same vector.
     I like to use that at method here, because it looks I think, better than (*ivp)[i]. */

  cout << endl << "Setting ivp to point to iv and printing it:" << endl << endl;
  ivp = &iv;
  for (i = 0; i < ivp->size(); i++) printf("%2d ", ivp->at(i));
  printf("\n");

  /* Resizing ivp also resizes iv -- because they are the same vector. */

  cout << endl << "Resizing ivp is reflected by iv being resized." << endl << endl;
  ivp->resize(4);
  printf("iv:  ");
  for (i = 0; i < iv.size(); i++) printf("%2d ", iv[i]); 
  printf("\n");
  printf("ivp: ");
  for (i = 0; i < ivp->size(); i++) printf("%2d ", ivp->at(i));
  printf("\n");

  /* Changing an element of ivp changes that element in iv -- because they are the same vector. */

  cout << endl << "Setting ivp->at(2) to 2." << endl << endl;
  ivp->at(2) = 2;
  printf("iv:  ");
  for (i = 0; i < iv.size(); i++) printf("%2d ", iv[i]); 
  printf("\n");
  printf("ivp: ");
  for (i = 0; i < ivp->size(); i++) printf("%2d ", ivp->at(i));
  printf("\n");

  /* I use new to allocate an instance of the VP class.  
     I use an arrow to get at vp's member variable.  However, since that member
     variable is a vector, and not a pointer to a vector, you access its methods
     with "." and its elements with "[]": */

  cout << endl << "This code demonstrates a pointer to a class whose member variable is a vector."
       << endl << endl;

  vp = new VP;
  for (i = 0; i < 10; i++) vp->vec.push_back(9*i);
  for (i = 0; i < vp->vec.size(); i++) printf("%2d ", vp->vec[i]); 
  printf("\n");
  return 0;
}