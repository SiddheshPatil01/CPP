#include <iostream>
using namespace std;

class product
{
private:
  int id;
  string title;

public:
  product()
  {
    this->id = 0;
    this->title = " ";
  }
  product(int id, string title)
  {
    this->id = id;
    this->title = title;
  }
  virtual void acceptdata()
  {
    cout << "enter id : " << endl;
    cin >> this->id;

    cout << "enter title : " << endl;
    cin >> this->title;
  }

  virtual int getvalue() = 0;

  virtual void printdata()
  {
    cout << "id  :" << this->id << endl;
    cout << "title  :<<" << this->title << endl;
  }
};

class book : public product
{
private:
  string author;
  int price;

public:
  int total = 0;
  book()
  {
    this->author = " ";
    this->price = 0;
  }
  book(string author, int price)
  {

    this->author = author;
    this->price = price;
  }
  void acceptdata()
  {
    product ::acceptdata();
    cout << "enter author : " << endl;
    cin >> this->author;

    cout << "enter price : " << endl;
    cin >> this->price;
  }

  void printdata()
  {
    product ::printdata();
    cout << "author : " << this->author << endl;
    cout << "price : " << this->price << endl;
  }
  int getvalue()
  {
    return ((this->price) - (this->price / 5));
  }
};
class tape : public product
{
private:
  string artist;
  int price;

public:
  tape()
  {
    this->artist = " ";
    this->price = 0;
  }
  void acceptdata()
  {
    product ::acceptdata();
    cout << "enter artist : " << endl;
    cin >> this->artist;

    cout << "enter price : " << endl;
    cin >> this->price;
  }

  void printdata()
  {
    product ::printdata();
    cout << "artist : " << this->artist << endl;
    cout << "price : " << this->price << endl;
  }
  int getvalue()
  {
    return ((this->price) - (this->price / 10));
  }

  
};

int menu()
{
  int choice;
  cout << "------------------------" << endl;
  cout << "0.Exit......" << endl;
  cout << "1.accept book" << endl;
  cout << "2.accept tape" << endl;
  cout << "3 print data" << endl;
  cout << "4 total bill " << endl;
  cin >> choice;
  cout << "------------------------" << endl;
  return choice;
}

int main()
{

  product *ptr[3];
  int choice;
  int index = 0;
  int max = 3;
  int total;

  while ((choice = menu()) != 0)
  {
    switch (choice)
    {
    case 1:
      if (index < max)
      {
        ptr[index] = new book();
        ptr[index]->acceptdata();
        index++;
      }
      else
      {
        cout << "Stack is a full" << endl;
      }
      break;

    case 2:
      if (index < max)
      {
        ptr[index] = new tape();
        ptr[index]->acceptdata();
        index++;
      }
      else
      {
        cout << "it is a full" << endl;
      }
      break;

    case 3:
      for (int i = 0; i < max; i++)
      {
        ptr[i]->printdata();
      }
      break;

    case 4:
      int totalbill = 0;
      for (int i = 0; i < max; i++)
      {
        totalbill += ptr[i]->getvalue();
      }
      cout << " total bill" << totalbill << endl;
    }
  }
};