//  Personal Information Class
#include <iostream>
#include <cstring>
using namespace std;
 
// Constants
const int SIZE = 81;
 
// PersonalInfo class declaration
class PersonalInfo
{
private:
   char name[SIZE];
   char address[SIZE];
   int age;
   int phone[SIZE];
 
public:
   // Default constructor
   // Sets all fields to null or 0.
   PersonalInfo()
   { name[0] = '\0';
     address[0] = '\0';
     age = 0;
     phone[0] = 0;
   }
    
   // Overloaded Constructor
   // Parameters: n is the name
   //   addr is the address
   //   a is the age
   //   p is the phone
   PersonalInfo(char n[], char addr[], int a, int p[])
   {
      setName(n);
      setAddress(addr);
      setAge(a);
      setPhone(p);
   }
    
   // Mutator functions
   void setName(char n[])
   { strncpy(name, n, SIZE);
     name[SIZE-1] = '\0';
   }
 
   void setAddress(char a[])
   { strncpy(address, a, SIZE);
     address[SIZE-1] = '\0';
   }
 
   void setAge(int a)
   { age = a; }
    
   void setPhone(char p[])
   { 
     phone = p;
   }
    
   // Accessor functions
   const char *getName() const
   { return name; }
    
   const char *getAddress() const
   { return address; }
    
   int getAge() const
   { return age; }
    
   int getPhone() const
   { return phone; }
};
 
// Function prototye
void displayPersonalInfo(PersonalInfo);
 
// Demo program
int main()
{
   // Create the first instance of PersonalInfo.
   PersonalInfo me("Herb Dorfmann",
                   "27 Technology Drive",
                   25, 5551212);
    
   // Create an instance for a family member.
   PersonalInfo auntSally("Sally Dorfmann",
                   "48 Friendly Street",
                   50, 5558484);
 
   // Create an instance for a friend.
   PersonalInfo joe("Joe Looney",
                    "191 Apple Mountain Road",
                    30, 5552222);
                    
   // Display the data in each object.
   displayPersonalInfo(me);
   displayPersonalInfo(auntSally);
   displayPersonalInfo(joe);
    
   return 0;
}
 
//**************************************
// The displayPersonalInfo function    *
// displays the data in a PersonalInfo *
// object.                             *
//**************************************
void displayPersonalInfo(PersonalInfo obj)
{
   cout << "Name: " << obj.getName()
        << endl;
   cout << "Address: " << obj.getAddress()
        << endl;
   cout << "Age: " << obj.getAge()
        << endl;
   cout << "Phone: " << obj.getPhone()
        << endl << endl;
}
