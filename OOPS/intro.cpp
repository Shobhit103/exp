#include<iostream>
#include<string>
//#include "Hero.cpp"
using namespace std;
class Demonlord{
    // properties, getters and setters
    // empty class takes 1 byte
    // by default mode is private
    private:
    string wife1;
    string wife1alias1;
    string wife1alias2;
    string wife2;
    string wife2alias1;
    string wife2alias2;

    public: 
    int mana;
    string title;
    string weapon;
    string name;
    string castle;

    // constructor to set initial values
     Demonlord() {
        wife1 = "Sasha necron";
        wife1alias1 = "Goddess of Destruction";
        wife1alias2 = "Abernyu";
        wife2 = "Misha necron";
        wife2alias1 = "Goddess of Creation";
        wife2alias2 = "Militia";
    }
    
    void print(){
        cout << "Demon king of tyranny" << endl;
    }
    string getWifeByAliases(string alias1, string alias2) {
        if (alias1 == wife1alias1 && alias2 == wife1alias2) {
            return wife1;
        } else if (alias1 == wife2alias1 && alias2 == wife2alias2) {
            return wife2;
        } else {
            return "Invalid aliases for wives";
        }
    }

    

};
int main(){
    Demonlord anos; // static allocation
    Demonlord *rimuru = new Demonlord; // Dynamic allocation, for rimuru we will use arrow operator instead of dot operator 
    anos.name = "Anos Voldigoad";
    anos.mana = 10000000;
    anos.title = "Demon lord";
    anos.weapon = "Venuzdonor";
    anos.castle = "Demon Castle Delsagede";
   
    cout << "Name : " << anos.name << endl;
    cout << "Title : " << anos.title << endl;
    cout << "Weapon : " << anos.weapon << endl ;
    cout << "Mana capacity : " << anos.mana << endl;
    cout << "Castle : " << anos.castle << endl;

    anos.print();
    cout << " wife1 : " << anos.getWifeByAliases("Goddess of Destruction", "Abernyu") << endl;
    cout << " wife2 : " << anos.getWifeByAliases("Goddess of Creation", "Militia") << endl;

    
}