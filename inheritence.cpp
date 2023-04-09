#include<iostream>
#include <list>
using namespace std;


class GourabChannel{
private:
    string name;
    int subscribers;
    list<string> videos;

protected:
    string ownerName;
public:
    GourabChannel(string Name, string OwnerName){
        name = Name;
        ownerName = OwnerName;
        subscribers = 0;
    }

    void subsribe(){
        subscribers++;
    }

    void unsubscribe(){
        if(subscribers > 0)
            subscribers--;
    }

    void addVideo(string title){
        videos.push_back(title);
    }

    void print(){
        cout << "Name: " << name << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Subscribers: " << subscribers << endl;
        cout << "Videos: \n";
        for(string titles: videos){
            cout << titles << endl;
        }
    }
};

class gaming:public GourabChannel{
    public:
        gaming(string Name, string OwnerName):GourabChannel(Name, OwnerName){}

        void liveStreaming(){
            cout << ownerName << " is livestreaming." << endl;
        }
};

class cooking: public GourabChannel{
    public:
        cooking(string Name, string OwnerName):GourabChannel(Name, OwnerName){}
    
        void practice(){
            cout << ownerName << " is practising cooking and experimenting with spices." << endl;
        }
};

int main(){
    // GourabChannel g("Commander Zack", "Gourab Das");

    gaming game("GourabPLayz", "Gourab");

    gaming john("Johny" , "John");

    cooking cooks("AmyCooks", "Amy Farah Fowler");

    game.liveStreaming();

    john.liveStreaming();

    GourabChannel *pt1 = &game;
    GourabChannel *pt2 = &cooks;

    pt1->print();
    pt2->print();

    

    return 0;
}