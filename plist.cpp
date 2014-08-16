//vlist.cpp

#include <iostream>
#include <string>
#include "plist.h"
#include "part.h"

using namespace std;

Plist::Plist()
{
  m_head = NULL;
}


void Plist::insert(Part* vptr, string title, string value)
{
  if(m_head == NULL)
  {
          m_head = new Node(vptr,m_head);
  }

  if(value < m_head->m_vptr->get_value())
  {
          m_head = new Node(vptr,m_head);
  }

    Node* ptr = m_head;
/*
    while(ptr->m_next != NULL && ptr->m_next->m_vptr->get_value() < value)
    {
      ptr = ptr->m_next;
    }

    ptr->m_next = new Node(vptr, ptr->m_next);

   }
   */

}

void Plist::print()
{
 // cout<<"here" << endl;
   Node* ptr = m_head;
   while(ptr != NULL)
   {
    cout<<"here" << endl;
     ptr->m_vptr->print();
     cout<<endl;
     ptr = ptr->m_next;
   }
}




