#include <iostream>
#include <list>
using namespace std;

class Gourab{
    private:
        string Name;
        string Address;
        int Age;
        int subs;
        list<string> Loves;
    public:
        Gourab(string name, string address, int age){
            Name = name;
            Address = address;
            Age = age;
            subs = 0;
        }

        void subscribe(){
            subs++;
        }

        void unsubscribe(){
            if(subs > 0)
                subs--;
        }

        void addLove(string thing){
            Loves.push_back(thing);
        }

        void display(){
            cout << "Name: " << Name << endl;
            cout << "Address: " << Address << endl;
            cout << "Age: " << Age << endl;
            cout << "Subscribers: " << subs << endl;
            cout << "Loves to do: \n";
            for(string love: Loves){
                cout << love << endl;
            }
        }
};

int main(){

    Gourab g("Gourab", "Ghatigachha, Baidypur, Ranaghat, Nadia", 19);

    // g.name = "Gourab Das";
    // g.address = "Ghatigachha, Baidypur, Ranaghat, Nadia";
    // g.age = 19;
    // g.Something = {1,2,3,4,5};
    // g.stuff = {"Rubix Cubes", "Laptop", "Valorant"};

    // cout << "Name: " << g.name << endl;
    // cout << "Address: " << g.address << endl;
    // cout << "Age: " << g.age << endl;
    // cout << "Name: " << g.name << endl;
    // cout << "Stuff " << g.name << " loves: \n";
    // for(string love: g.stuff){
    //     cout << love << endl;
    // }

    g.subscribe();
    g.subscribe();
    g.subscribe();
    g.subscribe();


    g.unsubscribe();
    g.unsubscribe();

    g.addLove("Valorant");
    g.addLove("CSGO");
    g.addLove("Studying");

    g.display();


    // Gourab g1("Arijit Paul", "Payradanga", 20);

    // g1.display();

    return 0;
}