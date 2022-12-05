#include <iostream>
using namespace std;

// Class without constructors
class book
{
  // properties
public:
  int pages;
  string color;
  string title;
  string pageSize = "Letter";
};

// Class **with** constructors
class newBook
{
  // properties
public:
  int pages;
  string color;
  string title;
  string pageSize;

  newBook(int pages, string color, string title, string pageSize = "Letter")
  {
    this->pages = pages; // value
    this->color = color;
    this->title = title;
    this->pageSize = pageSize;
  }
};

int main()
{
  // Creating objects using classes
  // Syntax: class objName
  book book0;
  book0.pages = 200;
  book0.color = "violet";
  book0.title = "Lord of the Rings";
  book0.pageSize = "Letter";

  // Constructors are easier ways to create objects
  newBook book2(200, "violet", "Lord of the Rings");
  book2.pages = 50;

  // Accessing classes
  cout << book0.pages << endl;
  cout << book2.pages << endl;
  return 0;
}
