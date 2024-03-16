#include<iostream>
#include<string>
using namespace std;
class hero1{
    public:
    int health;
    char level;
    hero1(){
        cout << "Constructor called" << endl;
    }
    hero1(int health){
      // parameterised constructor
      cout << this << endl; // this stores address of current object
      this->health = health;
    }
    hero1(int health, char level){
      cout << this << endl; // this stores address of current object
      this->health = health;
      this->level = level;
    }
    // copy constructor
    hero1(hero1& temp){
      cout << "copy constructor called " << endl;
      this->health = temp.health;
      this->level = temp.level;
    }
    void print(){
      cout << "health " << this->health << endl;
      cout << "level " << this->level << endl;
    }
     int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
    
};
int main(){
    hero1 *ramesh = new hero1(10);
    cout << ramesh << endl;
    hero1 temp(50,'B');
    cout << &temp << endl ;
    temp.print();
    hero1 suresh(temp);
    suresh.print();
  //  b->health = 100;
  // b->level = 'A';
  //  cout << "Health : " << b->health << endl;
  //  cout << "Level : " << b->level << endl;
  // default copy constructor -> shallow copy
 
}