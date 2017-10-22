/***********************************************************************
 * Header:
 *    LIST
 * Summary:
 *    A linked list abstract data type
 * Author
 *    Devin Cenatiempo
 ************************************************************************/

#ifndef LIST_H
#define LIST_H

using namespace std;

// custom namespace
namespace custom
{

  /******************************************************************
   * list class
   * encapsulates a linked list
   ******************************************************************/
  template <class T>
  class list
  {
  private:
    class Node
    {
    public:
      T data;                   // a single piece of data
      Node * pNext;             // a pointer to the next node
      Node * pPrev;             // a pointer to the previous node
      
      // constructors
      Node();                   // default constructor
      Node(const T & data);     // non-default constructor
      Node(const Node * node);  // copy constructor
      
      // operators
      Node & operator = (const Node & rhs) // Assignment
      {
        data  = rhs->data;
        pNext = rhs->pNext;
        pPrev = rhs->pPrev;
        return *this;
      }
    };
    
    Node *pHead;
    Node *pTail;
    int numElements;
  public:
    // constructors
    list();                   // default constructor
    list(list<T> const &rhs); // copy constructor
    ~list();                  // destructor
    // assignment
    
    // getters
    int  size()  const;
    bool empty() const;
    T & back()  throw       (const char *);
    T & front() throw       (const char *);
    T   back()  const throw (const char *);
    T   front() const throw (const char *);
    // setters
    void clear();
    void push_back (const T & t) throw (const char *);
    void push_front(const T & t) throw (const char *);
    void pop_back ();
    void pop_front();
    
    // iterators
    class iterator;
    class const_iterator;
    class reverse_iterator;
    class const_reverse_iterator;
    
    iterator begin();
    const_iterator begin() const;
    const_iterator cbegin() const;
    reverse_iterator rbegin();
    const_reverse_iterator rbegin() const;
    const_reverse_iterator crbegin() const;
    
    iterator find(const T & t);
    iterator erase(iterator it);
    iterator insert(iterator & it, const T & t) throw (const char *);
  };
  
  /****************************************
   * Node : Default Constructor
   * Create a new node which holds nothing.
   * ***************************************/
  template <class T>
  list <T> :: Node :: Node()
  {
    pNext = NULL;
    pPrev = NULL;
  }
  
  /****************************************
   * Node : Non-Default Constructor
   * Create a new node which holds a given value.
   * ***************************************/
  template <class T>
  list <T> :: Node :: Node(const T & data)
  {
    this->data = data;
    pNext = NULL;
    pPrev = NULL;
  }
  
  /****************************************
   * Node : Copy Constructor
   * Create a new node which holds
   * the same values as a given node.
   * ***************************************/
  template <class T>
  list <T> :: Node :: Node(const Node * node)
  {
    this->data = node->data;
    pNext = node->pNext;
    pPrev = node->pPrev;
  }
  /****************************************
   * list : Default Constructor
   * Create a new list which holds nothing.
   * ***************************************/
  template <class T>
  list <T> :: list()
  {
    /*
     pHead <- pTail <- NULL
     numElements 0
     */
  }
  
  /****************************************
   * list : Copy Constructor
   * Create a new list from an existing list.
   * ***************************************/
  template <class T>
  list <T> :: list(list<T> const &rhs)
  {
    
  }
  /****************************************
   * list : assignment operator
   * Create a new list from an existing list.
   * ***************************************/
  
  
  
  template <class T>
  T & list <T> :: back()
  throw (const char *)
  {
    
  }
  
  template <class T>
  T & list <T> :: front()
  throw (const char *)
  {
    
  }
  
  template <class T>
  T list <T> :: back() const
  throw (const char *)
  {
    
  }
  
  template <class T>
  T list <T> :: front() const
  throw (const char *)
  {
    
  }
  
  template <class T>
  void list <T> :: push_back (const T & t)
  throw (const char *)
  {
    
  }
  
  template <class T>
  void list <T> :: push_front(const T & t)
  throw (const char *)
  {
  
  }
  
  template <class T>
  void list <T> :: pop_back ()
  {
    
  }
  
  template <class T>
  void list <T> :: pop_front()
  {
    
  }
  
  /****************************************
   * list : size
   * iterate through and returns # of items
   * ***************************************/
  template <class T>
  int  list <T> :: size()  const
  {
    
  }
  
  template <class T>
  bool list <T> :: empty() const
  {
    
  }
  
  template <class T>
  void list <T> :: clear()
  {
    
  }
  
  // iterators
  template <class T>
  class list <T> :: iterator
  {
    
  };
  
  template <class T>
  class list <T> :: const_iterator
  {
    
  };
  
  template <class T>
  class list <T> :: reverse_iterator
  {
    
  };
  
  template <class T>
  class list <T> :: const_reverse_iterator
  {
    
  };
  
  template <class T>
  typename list <T> :: iterator list <T> :: begin()
  {
    
  }
  
  template <class T>
  typename list <T> :: const_iterator list <T> :: begin() const
  {
    
  }
  
  template <class T>
  typename list <T> :: const_iterator list <T> :: cbegin() const
  {
    
  }
  
  template <class T>
  typename list <T> :: reverse_iterator list <T> :: rbegin()
  {
    
  }
  
  template <class T>
  typename list <T> :: const_reverse_iterator list <T> :: rbegin() const
  {
    
  }
  
  template <class T>
  typename list <T> :: const_reverse_iterator list <T> :: crbegin() const
  {
    
  }
  
  template <class T>
  typename list <T> :: iterator list <T> :: find(const T & t)
  {
    
  }
  
  template <class T>
  typename list <T> :: iterator list <T> :: erase(list <T> :: iterator it)
  {
    
  }
  
  template <class T>
  typename list <T> :: iterator list <T> ::
    insert(list <T> :: iterator & it, const T & t)
  throw (const char *)
  {
    
  }
  
} // end custom namespace


#endif // LIST_H
