#include "part.h"
#include "plist.h"
#include <iostream>
#include <string>

using namespace std;

void res_info(string &u_value, string &u_case, string &u_desc, string &u_digi, string &u_data, string &u_pwr, double &u_lim_volt, int &u_qty);

int main()
{

  string choice, part,u_value,u_case,u_desc,u_digi, u_data, u_pwr;
  double u_lim_volt;
  int u_qty;
  Part* part_ptr;
  Plist plist;

  cout<< "Choose from the following: " << endl;
  cout<< "l:lookup" << endl;
  cout<< "i:insert" << endl;
  getline(cin,choice);

  while(choice == "i")
  {
  cout<<"Choose the type of part you wish to insert: " << endl;
  cout<<"r:resistor" << endl;
  cout<<"c:capcitor" << endl;

  getline(cin, part);
//  cin>> part;

      if(part == "r")
      {
        // pass by reference
         res_info(u_value,  u_case,  u_desc,  u_digi,  u_data,  u_pwr,  u_lim_volt,  u_qty);
         part_ptr = new Res(u_pwr,u_lim_volt,"Res",u_value,u_desc,u_digi,u_case,u_qty,u_data);
         plist.insert(part_ptr,part,u_value);
      }

      cout<<"Continue Inserting...press i to continue?" << endl;
      cin>> choice;

  }

  plist.print();




/*  RES FORMAT:
 *
 *  cRes<"Power","Lim_volt","Type","Value","Descrip","Digikey","Case","Qty","Datasheet">
 *
 */



/*  CAP FORMAT:
 *
 *  cCap<"Volt","Type","Value","Descrip","Digikey","Case","Qty","Datasheet">
 *
 */


//Res cRes(u_pwr,u_lim_volt,"Res",u_value,u_desc,u_digi,u_case,u_qty,u_data);
//cRes.print();

//cout<< cRes.get_type()<< endl;
//cout<< cRes.get_value()<< endl;

return 0;

}



void res_info(string &u_value, string &u_case, string &u_desc, string &u_digi, string &u_data, string &u_pwr, double &u_lim_volt, int &u_qty)
{

        cout<<"Enter the following information: " << endl;

        cout<<"Value: " << endl;
        getline(cin, u_value);


        cout<<"Case: " << endl;
        getline(cin, u_case);

        cout<<"Description: " <<endl;
        getline(cin, u_desc);


        cout<<"Digikey Link: " <<endl;
        getline(cin, u_digi);

        cout<<"Datasheet link: " << endl;
        getline(cin, u_data);

        cout<<"Power Rating: "<< endl;
        getline(cin, u_pwr);

        cout<<"Limiting Element Volt: " << endl;
        cin>> u_lim_volt;

        cout<<"Qty: " << endl;
        cin>> u_qty;
}



