#include <iostream>
#include<ctime>
using namespace std;
class Dog {
public:
    bool tail;
    int count_ears;
    int count_legs ;
    bool wool = true;
    int age = 5;
    double weight = 23.5;
    
    string name;
    string breed;
    string size = "big";
    bool is_happy;
    int hungry = 100;
    string comands[4] = { "sit", "lie", "stand", "voice" };
    string meals[6] = { "meat", "korm", "carrot", "fish", "zucchini", "porridge" };
    int smart = 0;
    int energy = 100;

    void SayGav()
    {
        cout << "Gav gav\n";
    }
    void Print()
    {
        cout << "\t:" << name << ":\n";
        cout << "Age:" << age << "\n";
        cout << "Breed: " << breed << "\n";
        cout << "Energy: " << energy << "\n";       
        cout << "Weight: " << weight << "\n";
        cout << "Smart: " << smart << "\n";       
        
        cout << "Is happy?: ";
        if (is_happy == 1)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    void GetUp()
    {
        cout << name << " gets up\n";
    }
    void Sleep()
    {
        cout << name << " is sleeping\n";
        if (energy != 100)
            energy += 20;
        else
            energy = 100;
    }

    void StudyComands(string comand)
    {
        if(energy > 30)
        {

            if (comands[0] == comand)
            {
                smart += 8;
                energy -= 10;
                
                cout << name << " trying study sit comand\n";
            }

            else if (comands[1] == comand)
            {
                smart += 10;
                energy -= 10;
                
                cout << name << " trying study lie comand\n";
            }
            else if (comands[2] == comand)
            {
                smart += 10;
                energy -= 20;
                
                cout << name << " trying study stand comand\n";
            }
            else if (comands[3] == comand)
            {
                smart += 20;
                energy -= 30;
                
                cout << name << " trying study voice comand\n";
            }
            else
            {
                cout << name << " don't know how to learn this comand\n";
            }
            is_happy = false;
        }
        
    }

    void Licking()
    {
        cout << name << " lick you\n";
        is_happy = true;
    }

    void Eat()
    {
        cout << "dog is eating\n";
        if (energy != 100)
            energy += 20;
        else
            energy = 100;
    }

    void Drink()
    {
        cout << "dog is drinking water\n";
        if (energy != 100)
            energy += 10;
        else
            energy = 100;
    }

    void Walking()
    {
        if(energy >= 30)
        {

            cout << "Gav gav go to outside\n";
            
            energy -= 20;
            is_happy = true;
        }
    }
};

class People {
public:
    bool mood;
    int age;
    string name;
    double weight = 80.5;
    string surname;
    int energy = 100;
    void Print()
    {
        cout << " :" << name << " " << surname << ":\n";
        cout << "Age:" << age << "\n";   
        cout << "Weight: " << weight << "\n";
        cout << "Mood: " ;
        if (mood == 1)
            cout << "good\n";
        else
            cout << "bad\n";
        
        
    }
    void GetUp()
    {
        cout << "Good morning to you\n";
    }
    void Sleep()
    {
        if (energy == 100)
            energy = 100;
        else
            energy += 40;
        cout << "You go to bed\n";
    }
    void Eat()
    {
        if (energy == 100)
            energy = 100;
        else
            energy += 20;
        cout << "You eating \n";
    }
    void Walk(Dog& d)
    {
        if(energy > 20)
        {

            cout << "You go walking with your friend " << d.name << "\n";
           
            energy -= 20;
        }
    }
    
    void Feed(string meal, Dog d)
    {
        if(energy > 10)
        {

            if (d.meals[0] == meal)
            {
                if (d.hungry == 100)
                    d.hungry = 100;
                else
                    d.hungry += 20;
                
                d.SayGav();
                d.SayGav();

                cout << d.name << " eating\n";
            }

            else if (d.meals[1] == meal )
            {
                if (d.hungry == 100)
                    d.hungry = 100;
                else
                    d.hungry += 10;
               
                d.SayGav();
                cout << d.name << " started eating\n";
            }
            else if (d.meals[2] == meal)
            {
                if (d.hungry == 100)
                    d.hungry = 100;
                else
                    d.hungry += 1;
                
                cout << d.name << " looked at you and ate you in disgust\n";
            }
            else if (d.meals[3] == meal)
            {
                if (d.hungry == 100)
                    d.hungry = 100;
                else
                    d.hungry += 8;
                
                cout << d.name << "started playing with it and ate it\n";
            }
            else if (d.meals[4] == meal)
            {
                if (d.hungry == 100)
                    d.hungry = 100;
                else
                    d.hungry += 3;
               
                cout << d.name << " ate the food\n";
            }
            else if (d.meals[5] == meal)
            {
                if (d.hungry == 100)
                    d.hungry == 100;
                else
                    d.hungry += 5;
                
                cout << d.name << " started beeping\n";
            }
            else
            {

                cout << d.name << " BBUUEEEE\n";
            }
            energy -= 10;
        }
    }
};

class Computer {
public:

    int version;
    double price;
    string model;
    string desktop;
    string keyboard;
    string color;

    void Calculate(People& h)
    {
        h.energy -= 20;
        cout << "Calculate math equation\n";
    }

    void SaveFiles()
    {
        cout << "Files saves\n";
    }
    void DownloadGame()
    {
        cout << "Computer almost download your game\n";
    }
    void MakeNoise(People& h)
    {
        h.mood = false;
        cout << "sssshhhhhhh\n";
    }

    void BreakDown(People& h)
    {
        h.mood = false;
        cout << "ops, computer kaput\n";
    }

    void SwitchIllumination(string color, People& h)
    {
        if (h.energy == 100)
            h.energy = 100;
        else
            h.energy += 5;
        cout << "Illumination on keyboard\n";
        if (color == "pink")
            cout << "pink illumination\n";
        else if (color == "red")
            cout << "red illumination\n";
        else if (color == "white")
            cout << "white illumination\n";
        h.mood = true;
       
    }
};

class Juice {
public:
    int line;
    double price;
    string title;
    string taste;
    string ingredients;
    bool fresh_made;

    void Overstay(People& h)
    {
        h.mood = true;
        cout << "this bad idea\n";
    }

    void BeTasty(People& h)
    {
        if (h.energy == 100)
        {
            h.energy = 100;
        }
        else
        {

            h.mood = true;
            cout << "delicious\n";
            h.energy += 15;

        }
    }

    void Evaporate(People& h)
    {
        h.mood = false;
        h.energy -= 5;
        cout << "juice is gone\n";
    }

    void MakeBubbles(People& h)
    {
        h.mood = true;
        cout << "the juice looks delicious\n";
    }

    void BitSpilled(People& h)
    {
        h.mood = false;
        h.energy -= 5;
        cout << "I am handyman(\n";
    }
};

class Lamp {
public:
    int model;
    int line;
    int count_lights;
    double price;
    string color;
    string brand;

    void TurnOn()
    {
        cout << "light\n";
    }

    void TurnOf()
    {
        cout << "dark\n";
    }

    
    void SelectLightColor(string color, People& h)
    {
        h.energy += 5;
        h.mood = true;
        if (color == "pink")
            cout << "pink illumination\n";
        else if (color == "red")
            cout << "red illumination\n";
        else if (color == "white")
            cout << "white illumination\n";              
    }
    void BurnOut(People& h)
    {
        h.mood = false;
        cout << "lamp burn out\n";
    }

    void BlowUp(People& h)
    {
        h.mood = false;
        h.energy -= 5;
        cout << "ops, bad lamp blew up\n";
    }
};

class Kino {
public:
    double score;
    int count_coments;
    string appellation;
    string genre;
    string topic;
    string director;

    void MovieEntrance(People& h)
    {
        h.mood = true;
        cout << "date when we can see movie\n";
    }

    void RackBrain(People& h)
    {
        if (h.energy != 100)
        {
            
            cout << "Film is difficult to brain\n";
            h.energy -= 15;
        }
        else
            h.energy = 100;
        
    }

    void TellAdvertisement()
    {
        cout << "Intresting film\n";
    }

    void EducatePeople(People& h)
    {
        if (h.energy != 100)
        {

            cout << "Films about history\n";
            h.energy -= 10;
        }
        else
            h.energy = 100;
        
    }

    void UpliftMood(People& mood)
    {
        mood.mood = true;
        cout << "Up lift your mood\n";
    }
};

int main()
{
    srand(time(0));
    People h;
    Dog d;
    Computer c;
    Kino k;
    Lamp l;
    Juice j;
    k.genre = "Detective\n";
    string comand;
    string meal;
    h.age = 19;
    h.name = "Oleg\n";
    h.surname = "Rasel\n";
    l.color = "white";
    d.count_ears = 2;
    d.count_legs = 4;
    d.tail = true;
    cout << "Nick your dog - ";
    cin >> d.name;
    cout << "Breed your dog - ";
    cin >> d.breed;
    
    
    
    
    h.GetUp();
    d.GetUp();
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Drink();
    h.Walk(d);
    d.SayGav();
    cout << "What comand you want to study your dog?\n";
    cin >> comand;
    d.StudyComands(comand);
    l.TurnOn();
    l.SelectLightColor("pink", h);
    c.Calculate(h);
    c.DownloadGame();    
    l.BurnOut(h);
    d.SayGav();
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();   
    d.Drink();
    cout << "What comand you want to study your dog?\n";
    cin >> comand;
    d.StudyComands(comand);
    d.Sleep();
    k.MovieEntrance(h);
    j.BeTasty(h);
    d.GetUp();
    d.Walking();
    k.TellAdvertisement();
    k.EducatePeople(h);
    d.SayGav();
    k.RackBrain(h);
    k.UpliftMood(h);
    d.SayGav();
    j.BitSpilled(h);
    c.MakeNoise(h);
    c.BreakDown(h);
    cout << "Meal to your dog - ";
    cin >> meal;
    h.Feed(meal, d);
    h.Eat();
    d.Sleep();
    h.Sleep();
    d.Print();
    h.Print();
}
