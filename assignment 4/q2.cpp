#include<iostream>
using namespace std;

class Employee{
  private:
    int id;
    float sal;

    public:
      Employee(){
        this->id=0;
        this->sal=0;
        cout<<"Inside Employee ctor"<<endl;
      }
      Employee(int id, float salary){
        this->id=id;
        this->sal=salary;
      }
      virtual ~Employee(){
        cout<<"Dtor Employee"<<endl;
      }
      int get_id(){
        return this->id;
      }
      void set_id(int id){
        this->id =id;
      }
      float get_sal(){
        return this->sal;
      }
      void set_sal(float sal){
        this->sal = sal;
      }
      virtual void display(){
        cout<<"ID :"<<this->id<<endl;
        cout<<"SALARY : "<<this->sal<<endl;
      }
      virtual void accept(){
        cout<<"Enter Data:"<<endl;
        cout<<"ID :";
        cin>>this->id;
        cout<<"Enter Salary : ";
        cin>>this->sal;
      }
};

class Manager:virtual public Employee{
    private:
      float bonus;
    public:
      Manager(){
        this->bonus =0;
        cout<<"Inside Manager Ctor"<<endl;
      }
      Manager(int id, int sal,float bonus)
      {
        Employee::set_id(id);
        Employee::set_sal(sal);
        this->bonus = bonus;
      }
      ~Manager(){
        cout<<"Dtor Manager"<<endl;
      }
      float get_bonus(){
        return this->bonus;
      }
      void set_bonus(float bonus){
        this->bonus = bonus;
      }
      void display(){
        Employee::display();
        cout<<"Bonus :"<<this->bonus;
      }
      void accept(){
        cout<<"Enter Bonus:";
        cin>>this->bonus;
      }
      void accept_manager()
    {
        cout << "Enter bonus = ";
        cin >> this->bonus;
    }

    void display_manager()
    {
        cout << "bonus = " << this->bonus << endl;
    }
};

class Salesman: virtual public Employee{
    private:
      float comm;
    public:
      Salesman()
    {
        this->comm = 0;
        cout << "Inside Salesman::ctor" << endl;
    }

    Salesman(int id , float sal , float comm)
    {
        this->comm = comm;
        Employee::set_id(id);
        Employee::set_sal(sal); 
    }
    ~Salesman(){
      cout<<"DTor salesman"<<endl;
    }
    float get_comm(){
        return this->comm;
    }
    void set_comm(float comm){
      cout<<"Enter COMMISSION : ";
      cin>>this->comm;
    }

    void accept()
    {
       Employee::accept();
       cout<<"Enter Commission: ";
       cin>>this->comm; 
    }

    void display()
    { 
      Employee::display();
      cout<<"commission : "<<this->comm<<endl;  
    }
    void display_salesman(){
      cout<<"Commission is :"<<this->comm;
    }
    void accept_salesman(){
      cout<<"Enter commission :";
      cin>>this->comm;
    }
};

class salesmanager : public Manager, Salesman{
    public:
      salesmanager(){
        cout<<"Inside salesmanger ctor"<<endl;
      }
      salesmanager(int id, float sal,float bonus, float comm){
        
        Employee::set_id(id);
        Employee::set_sal(sal); 
        Manager::set_bonus(bonus);
        Salesman::set_comm(comm);
      }
      ~salesmanager(){
        cout<<"Dtor salemanager"<<endl;
      }
      void display(){
        Employee::display();
        this->display_manager();
        this->display_salesman();   
        
      }
      void accept(){
        Employee::accept();
        this->accept_manager();
        this->accept_salesman();
      }
};

int main(){
      Employee *ptr = new salesmanager();
      ptr->accept();
      ptr->display();
      delete ptr;
    return 0;
}

