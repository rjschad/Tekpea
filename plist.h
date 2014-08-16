//plist.h

#ifndef PLIST_H
#define PLIST_H

#include <iostream>
#include <string>
#include "part.h"

class Plist
{
  public:
    Plist();
//  ~ Plist();
   void insert(Part* vptr, string title,string value);
   void print();
    //bool find_part(string title);
    //void lookup(string title);
    //bool remove(string title);

  private:
    class Node
    {
      public:
        Node(Part* vptr, Node* next)
        {
          m_next = next;
          m_vptr = vptr;
        }

        Node* m_next;
        Part* m_vptr;

        /*
        ~Node()
        {
          delete m_vptr;
        }
        */
    };

        Node* m_head;
};

#endif


