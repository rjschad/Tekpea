// this file is nust to test the resistors category
// at the moment, must be modfied later to include different parts

#ifndef PART_H
#define PART_H

#include <iostream>

using namespace std;


class Part
{
  public:
    string m_Type;
    string m_Value;
    string m_Case;
    string m_Descr;
    string m_Digikey;
    string m_Datasheet;
    int m_Qty;

    /**** BASE CONSTRUCTOR ***/ 

    Part(string Type="none",string Value="none", string Descr = "none", string Digikey = "none", string Case = "none", int Qty = 0, string Datasheet = "none");

    string get_type();
    string get_value();
   virtual void print();

};




class Res: public Part
{
  public: 
    double  m_Lim_Volt;
    string  m_Power;
    //string get_res_value();

   void print();

    /**** INHERITED CONSTRUCTOR ***/

    Res(string bPower = "none",double dValue = 0.0, string Type = "none", string Value= "none", string Descr = "none", string Digikey = "none", string Case = "none", int Qty = 0,string Datasheet = "none");


};





class Cap: public Part
{
  public: 
    string m_volt;
    void print();

    /**** INHERITED CONSTRUCTOR ***/

    Cap(string bvolt="none", string Type = "none", string Value= "none", string Descr = "none", string Digikey = "none", string Case = "none", int Qty = 0,string Datasheet = "none");


};



#endif
