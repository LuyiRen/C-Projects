#include<iostream>
#include<stdlib.h>
using namespace std;

class Stats{
    private:
    int health, magic, damage;
    
    public:
    Stats();
    Stats(int h, int m, int d);
    int gethealth()const;
    int getmagic()const;
    int getdamage()const;
    void sethealth(int yes);
    void setmagic(int yes);
    void setdamage(int yes);
};

Stats::Stats(){health = 0; magic = 0; damage = 0;}
Stats::Stats(int h, int m, int d):health(h), magic(m), damage(d){}
int Stats::gethealth()const{return health;}
int Stats::getmagic()const{return magic;}
int Stats::getdamage()const{return damage;}
void Stats::sethealth(int yes){health = yes;}
void Stats::setmagic(int yes){magic = yes;}
void Stats::setdamage(int yes){damage = yes;}

class Being{
    private:
    Stats points;
    int level;
    
    public:
    Being();
    Being(Stats stuff, int lvl);
    Being(int h, int m, int d, int lvl);
    void set_health(int yes);
    void set_magic(int yes);
    void set_damage(int yes);
    int get_health();
    int get_magic();
    int get_damage();
    void set_level(int yes);
    int get_level();
    
};
Being::Being(){
    points = Stats(1,1,1);
    level = 1;
}
Being::Being(Stats stuff, int lvl):points(stuff),level(lvl){}
Being::Being(int h, int m, int d, int lvl){
    points = Stats(h, m, d);
    level = lvl;
}
void Being::set_health(int yes){points.sethealth(yes);}
void Being::set_magic(int yes){points.setmagic(yes);}
void Being::set_damage(int yes){points.setdamage(yes);}
void Being::set_level(int yes){level = yes;}

int Being::get_health(){return points.gethealth();}
int Being::get_magic(){return points.getmagic();}
int Being::get_damage(){return points.getdamage();}
int Being::get_level(){return level;}

void swapref(int& num1, int& num2);

int main(void){
    Being player = Being(150, 30, 50, 10);;
    Being troll = Being(500, 30, 70, 20);
    Being snail = Being(300, 10, 20, 1);
    string attacking, attackings;
    int choice = 0;
    int temp, temp2, temp3, temp4, potions;
    int count = 0;
    
    int random_dmg_player, new_enemy_health, random_dmg_snail, new_player_health, random_dmg_troll;
    
    
    while(player.get_health() > 0){
        int potions;
        cout<<"Hello Player! You are on an adventure to kill the boss, King Troll!"<<endl;
        cout<<"Select your choices!:"<<endl;
        cout<<"1: Train on the snail people: "<<endl;
        cout<<"2: Face the troll king!"<<endl;
        cout<<"3:Go to the shop!"<<endl;
        temp2 = player.get_health();
        swapref(temp, temp2);
        
        cin>>choice;
        
        switch(choice){
            case 1:
            cout<<"You enter a dark cave! A snail person attacks you! what do you do?"<<endl;
            while(snail.get_health() > 0){
                cout<<"type in fight for melee or magic for a spell(all lower case)!"<<endl;
                cout<<"fight!"<<endl;
                cout<<"magic!"<<endl;
                cin>>attacking;
                if(attacking == "fight"){
                    random_dmg_player = rand()%player.get_damage();
                    cout<<"You hit the snail for: "<<random_dmg_player<<endl;
                    new_enemy_health = snail.get_health() - random_dmg_player;
                    snail.set_health(new_enemy_health);
                    cout<<"The snails health is now: "<<snail.get_health()<<endl;
                    if(snail.get_health()< 0 ){break;}
                }
                else if(attacking == "magic"){
                    random_dmg_player = rand()%player.get_magic();
                    cout<<"You hit the snail for: "<<random_dmg_player<<endl;
                    new_enemy_health = snail.get_health() - random_dmg_player;
                    snail.set_health(new_enemy_health);
                    cout<<"The snails health is now: "<<snail.get_health()<<endl<<endl;
                    if(snail.get_health()< 0 ){break;}
                }
                else{
                    cout<<"answer not valid! try again!"<<endl;
                }
                cout<<"The snail attacks you now!"<<endl;
                random_dmg_snail = rand()%snail.get_damage();
                cout<<"The snail hits you for: "<<random_dmg_snail<<endl;
                new_player_health = player.get_health() - random_dmg_snail;
                player.set_health(new_player_health);
                cout<<"Your health is now: "<<player.get_health()<<endl<<endl;
                
            }
            player.set_health(temp);
            cout<<"Congrats! You beat the snail! Your level has risen by one!"<<endl;
            cout<<"Your level was: "<<player.get_level()<<endl;
            player.set_level(player.get_level()+ 1);
            player.set_damage(player.get_damage()+ 5);
            player.set_magic(player.get_magic()+ 5);
            player.set_health(player.get_health() + 10);
            cout<<"Your stats are now: "<<endl;
            cout<<"Level "<<player.get_level()<<endl;
            cout<<"health "<<player.get_health()<<endl;
            cout<<"magic "<<player.get_magic()<<endl;
            cout<<"damage "<<player.get_damage()<<endl;
            break;
            
            case 2:
            cout<<"Are you ready to face the boss?!"<<endl;
            while(troll.get_health() >0){
                cout<<"type in fight for melee or magic for a spell(all lower case)!"<<endl;
                cout<<"fight!"<<endl;
                cout<<"magic!"<<endl;

                cin>>attackings;
                cin.ignore();
                if(attackings == "fight"){
                     random_dmg_player = rand()%player.get_damage();
                    cout<<"You hit the troll for: "<<random_dmg_player<<endl;
                    new_enemy_health = troll.get_health() - random_dmg_player;
                    troll.set_health(new_enemy_health);
                    cout<<"The trolls health is now: "<<troll.get_health()<<endl;
                    if(troll.get_health() < 0 ){break;}
                }
                else if(attackings == "magic"){
                    random_dmg_player = rand()%player.get_magic();
                    cout<<"You hit the troll for: "<<random_dmg_player<<endl;
                    new_enemy_health = troll.get_health() - random_dmg_player;
                    troll.set_health(new_enemy_health);
                    cout<<"The trolls health is now: "<<troll.get_health()<<endl<<endl;
                    if(troll.get_health() < 0 ){break;}
                }
                else{cout<<"answer not valid! try again!"<<endl;}
                cout<<"The troll attacks you now!"<<endl;
                random_dmg_troll = rand()%troll.get_damage();
                cout<<"The troll hits you for: "<<random_dmg_troll<<endl;
                new_player_health = player.get_health() - random_dmg_troll;
                player.set_health(new_player_health);
                cout<<"Your health is now: "<<player.get_health()<<endl<<endl;
                if(player.get_health()<0){break;}
                
                }
                if(player.get_health()>0){
                player.set_health(temp);
                cout<<"Congrats! You beat the troll!!"<<endl;
                cout<<"Your level was: "<<player.get_level()<<endl;}
                break;
            case 3:
            if(count > 3){
                cout<<"Get out of my shop! Youve been here enough!"<<endl;
                break;}
            cout<<"Shoopkeeper: 'Welcome to the shop! What would you like to buy'"<<endl;
            cout<<"1: potion of strength"<<endl;
            cout<<"2: potion of mana"<<endl;
            cin>>potions;
            if(potions == 1){player.set_damage(player.get_damage()+ 20);}
            else if(potions == 2){player.set_magic(player.get_magic()+ 40);}
            else{cout<<"answer is invalid, try again!"<<endl;}
            count = count + 1;
            if(count > 2){
                cout<<"Get out of my shop! Youve been here enough!"<<endl;
                break;
            }
            break;
        }
        if(troll.get_health() < 0){break;}
        snail.set_health(300);
    }
    if(troll.get_health() < 0){cout<<"you did it!"<<endl;}
    else{cout<<"You lose!!"<<endl;}
}

void swapref(int& num1, int& num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
