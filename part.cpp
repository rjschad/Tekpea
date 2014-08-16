#include <iostream>
#include <string>
#include "part.h"


/* CONTRUCTORS */


Part::Part(string Type ,string Value,string Descr,string Digikey,string Case,int Qty,string Datasheet):
     m_Type(Type),m_Value(Value), m_Descr(Descr), m_Digikey(Digikey), m_Case(Case), m_Qty(Qty), m_Datasheet(Datasheet)
     {}



Res::Res(string bPower,double dValue,string Type,string Value,string Descr,string Digikey,string Case,int Qty,string Datasheet):
     Part(Type,Value, Descr, Digikey, Case, Qty, Datasheet), m_Lim_Volt(dValue), m_Power(bPower)
     {}



Cap::Cap(string bvolt,string Type,string Value,string Descr,string Digikey,string Case,int Qty,string Datasheet):
      Part(Type,Value, Descr, Digikey, Case, Qty, Datasheet), m_volt(bvolt)
      {}


/* PRINT */

void Part::print()
    {
      cout<< endl;
      cout<<"Type: " << m_Type << endl;
      cout<<"Value: " << m_Value << endl;
      //cout<<"Limiting Element Voltage: " << m_Lim_Volt << endl;
      cout<<"Description: " << m_Descr << endl;
      //cout<<"Power: " << m_Power << endl;
      //cout<<"Case: " << m_Case << endl;
      cout<<"Qty: " << m_Qty << endl;
      cout<<"Digikey URL: " << m_Digikey << endl;
      cout<<"Datasheet URL: " << m_Datasheet << endl << endl;
    }

void Res::print()
    {
      cout<< endl;
      cout<<"Type: " << m_Type << endl;
      cout<<"Value: " << m_Value << endl;
      cout<<"Limiting Element Voltage: " << m_Lim_Volt << endl;
      cout<<"Description: " << m_Descr << endl;
      cout<<"Power: " << m_Power << endl;
      cout<<"Case: " << m_Case << endl;
      cout<<"Qty: " << m_Qty << endl;
      cout<<"Digikey URL: " << m_Digikey << endl;
      cout<<"Datasheet URL: " << m_Datasheet << endl << endl;
    }



void Cap::print()
    {
      cout<< endl;
      cout<<"Type: " << m_Type << endl;
      cout<<"Volt: " << m_volt << endl;
      cout<<"Value: " << m_Value << endl;
      cout<<"Description: " << m_Descr << endl;
      cout<<"Case: " << m_Case << endl;
      cout<<"Qty: " << m_Qty << endl;
      cout<<"Digikey URL: " << m_Digikey << endl;
      cout<<"Datasheet URL: " << m_Datasheet << endl << endl;
    }


string Part:: get_value(){return m_Value;}
string Part:: get_type(){return m_Type;}
