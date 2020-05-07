#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

void gobliny(string namee);
int showEnemyHp(int enemyhp, int attack);
int showHp(int hp, int enemyattack);

int main()
{
    SetConsoleTitle( TEXT("RPG"));
    srand(time(NULL));
	string name;
	tryagain:
	system("cls");
	cout << "What is your name, warrior?" << endl;
	cin >> name;
	if (name.length() > 20) {
		cout << "Your name is too long!";
		Sleep(1000);
		goto tryagain;
	}
	else {
		cout << "Better move fast, " << name << ". Goblins are attacking the city." << endl;
		Sleep(1000);
		cout << "\nYou are running to the city..." << endl;
		Sleep(3000);
		system("cls");
		cout << "You arrived to the city.";
		Sleep(1000);
        int grupa;
        powtorzgobliny:
        system("cls");
        cout << "You've been attacked by the group of goblins, what will you do?";
        cout << "\n1. Fight";
        cout << "\n2. Try to escape\n";
        cin >> grupa;
        if (grupa == 1) {
            gobliny(name);
        }
        else if (grupa == 2) {
            int losuj;
            losuj = rand() % 2 + 1;
            if (losuj == 1) {
                cout << "In panic, you run away from the city.";
                Sleep(5000);
                system("cls");
                cout << "Escaping goblinsa are running in your direction.";
                Sleep(2000);
                cout << "One of them is giving you a fatal blow.";
                Sleep(2000);
                exit(0);
            }
            else {
                cout << "You can't escape ... One of the enemies is giving you a fatal blow.";
                Sleep(2000);
                exit(0);
            }
        }
        else {
            cout << "You are doing this wrong :(";
            Sleep(1000);
            goto powtorzgobliny;
        }
		system("pause");
	}
	return 0;
}

void ostatnia(string name) {
    system("cls");
    cout << "You look behind you.\n\n";
    Sleep(1000);
    cout << "It seems that the army of goblins has regrouped and want to storm the castle again, this time they even have a catapult.\n";
    Sleep(4000);
    cout << "You run to the mayor for all your strength.";
    Sleep(2000);
    system("cls");
    cout << "You reach the mayor, he opens the door for you and tells you to enter the interior of your residence.\n";
    Sleep(2000);
    cout << "Faster " << name << " come here!\n\n";
    Sleep(4000);
    cout << "You think you're safe here.";
    Sleep(2000);
    system("cls");
    cout << "1. Ask for reinforcements\n";
    cout << "2. Ask for evacuation\n";
    int wyborkonczancy;
    cin >> wyborkonczancy;
    if (wyborkonczancy == 1) {
        system("cls");
        cout << "You ask the mayor about fortifications in the city.\n\n";
        Sleep(4000);
        cout << "Badly, a boulder from a catapult smashing the roof of a mansion kills you both.\n\n\n";
        Sleep(5000);
        cout << "THE END";
        Sleep(2000);
        exit(0);
    }
    else if (wyborkonczancy == 2) {
        system("cls");
        cout << "You ask the mayor about the evacuation of the city.\n\n";
        Sleep(4000);
        cout << "Badly, a boulder from a catapult smashing the roof of a mansion kills you both.\n\n\n";
        Sleep(5000);
        cout << "THE END";
        Sleep(1000);
        exit(0);
    }
    else {
        system("cls");
        cout << "NOW IT IS ABOVE";
        Sleep(3000);
        exit(0);
    }
}

void miastopotem(string name, int portfel) {
    int wejscie;
    miasteczko:
    system("cls");
    cout << "Shouts of people can be heard in the distance.\n";
    Sleep(2000);
    cout << "Guard at the gate, gets an order not to let anyone in.\n";
    Sleep(1000);
    cout << "You know that something terrible will happen soon, you must somehow get into the city.\n\n";
    Sleep(2000);
    cout << "1. Bribe the guard\n";
    cout << "2. Try to find another entry\n";
    cin >> wejscie;
    if (wejscie == 1) {
        system("cls");
        cout << "The guard wants 2 pieces of silver for letting you pass.\n";
        Sleep(2000);
        if (portfel >= 2) {
            cout << "The guard agrees to let you pass.\n";
            portfel = portfel - 2;
            Sleep(2000);
            cout << "You enter the city.\n";
            Sleep(2000);
            ostatnia(name);
        }
        else {
            cout << "The guard refuses.";
            Sleep(1000);
            system("cls");
            Sleep(2000);
            cout << "You find a breach in the wall, but it is separated by a moat. You know you have to take a chance and jump.\n\n";
            Sleep(2000);
            cout << "During the jump you stumble, fall into a moat, nobody can help you. You start drowning.";
            Sleep(2000);
            exit(0);
        }
    }
    else if (wejscie == 2) {
        system("cls");
        Sleep(2000);
        cout << "You find a breach in the wall, but it is separated by a moat. You know you have to take a chance and jump.\n\n";
        Sleep(2000);
        cout << "During the jump you stumble, fall into a moat, nobody can help you. You start drowning.";
        Sleep(2000);
        exit(0);
    }
    else {
        cout << "AGAIN?!";
        Sleep(1000);
        goto miasteczko;
    }
}

void droga(string name, int portfel) {
    int bandyci;
    bandycii:
    system("cls");
    cout << "Oh no! A bandits raids you along the way!\n";
    cout << "1. Fight\n";
    cout << "2. Talk to them\n";
    cin >> bandyci;
    if (bandyci == 1) {
        system("cls");
        cout << "Without a moment's hesitation, the bandit gives you a fatal blow.";
        Sleep(2000);
        exit(0);
    }
    else if (bandyci == 2) {
        system("cls");
        cout << " - My name is " << name << ". What do you want from me?\n";
        Sleep(2000);
        cout << " - What from everybody, give us 7 pieces of silver\n\n";
        Sleep(2000);
        cout << "Checking the purse...\n";
        Sleep(1000);
        if (portfel < 7) {
            system("cls");
            cout << "You don't have so many silver pieces.\n";
            Sleep(2000);
            cout << "The bandit is dealing a fatal blow to you.\n";
            Sleep(2000);
            exit(0);
        }
        else {
            system("cls");
            cout << "You give 7 silver pieces to bandits.\n";
            portfel = portfel - 7;
            Sleep(2000);
            cout << "You have left " << portfel << " pieces of silver.\n\n";
            Sleep(2000);
            cout << "Disgusted, you go on...";
            Sleep(3000);
            system("cls");
            cout << "You reach the city.";
            miastopotem(name, portfel);
        }
    }
    else {
        cout << "WRONG";
        Sleep(1000);
        goto bandycii;
    }
}

void wygrana(string name, int portfel, int gaza) {
    system("cls");
    cout << "You go back to your employer to collect your payment...\n";
    Sleep(1000);
    cout << "Wait a minute, I'll go for the money.\n";
    Sleep(4000);
    if (gaza == 1) {
        cout << "Here are your 6 silver pieces.\n";
        portfel = portfel + 6;
        Sleep(2000);
        system("cls");
        cout << "You come back to the city...";
        Sleep(5000);
        droga(name, portfel);
    }
    else if (gaza == 2) {
        cout << "Here are your 3 silver pieces.\n";
        portfel = portfel + 3;
        Sleep(2000);
        system("cls");
        cout << "You come back to the city...";
        Sleep(5000);
        droga(name, portfel);
    }
    else if (gaza == 3) {
        cout << "Here are your 4 silver pieces.\n";
        portfel = portfel + 4;
        Sleep(2000);
        system("cls");
        cout << "You come back to the city...";
        Sleep(5000);
        droga(name, portfel);
    }
}

void szczury(string name, int portfel, int gaza, int decyzjam) {
    system("cls");
    cout << "An exuberant rat appears to your eyes.\n";
    Sleep(1000);
    system("cls");

    szczurki:
    srand(time(NULL));
    int hp = 25, enemyhp = 20;
    int uderzszcura;

    do
    {
        if (decyzjam == 1) {
            int attack = (rand() % 9 + 2), enemyattack = (rand() % 9 + 1);
            enemyhp = showEnemyHp(enemyhp, attack);
            hp = showHp(hp, enemyattack);
            cout << "\nHit the rat?\n Yes = 1\n No = 2\n";
            cin >> uderzszcura;
            if (uderzszcura == 1)
            {
                cout << "\nYou deal a blow to the rat.\n";
                if (enemyhp <= 0)
                {
                    cout << "The blow was fatal.\n\n";
                    cout << "You won " << name << "!\n";
                    Sleep(3000);
                    wygrana(name, portfel, gaza);
                }
                else if (enemyhp > 0)
                {
                    cout << "The enemy has " << enemyhp << "HP left.\n\n";
                    cout << "The rat strikes back.\n";
                    cout << "You have " << hp << "HP left.\n\n";
                    Sleep(2000);
                    system("cls");
                }
                if (hp <= 0) {
                    system("cls");
                    cout << "You died!\n";
                    Sleep(1000);
                    exit(0);
                }
            }
            else if (uderzszcura == 2)
            {
                if (hp <= 0) {
                    system("cls");
                    cout << "You died!\n";
                    Sleep(1000);
                    exit(0);
                }
                else {
                    cout << "The rat hits you.\n";
                    cout << "You have " << hp << "HP left.\n\n";
                    Sleep(2000);
                    system("cls");
                }
            }
            else
            {
                cout << "Bad choice :( You pay for mistakes.\n\n";
                Sleep(1000);
                goto szczurki;
            }
        }

        else if (decyzjam == 2) {
            int attack = (rand() % 8 + 1), enemyattack = (rand() % 9 + 1);
            enemyhp = showEnemyHp(enemyhp, attack);
            hp = showHp(hp, enemyattack);
            cout << "\nHit the rat?\n Yes = 1\n No = 2\n";
            cin >> uderzszcura;
            if (uderzszcura == 1)
            {
                cout << "\nYou deal a blow to the rat.\n";
                if (enemyhp <= 0)
                {
                    cout << "The blow was fatal.\n\n";
                    cout << "You won " << name << "!\n";
                    Sleep(3000);
                    wygrana(name, portfel, gaza);
                }
                else if (enemyhp > 0)
                {
                    cout << "The enemy has " << enemyhp << "HP left.\n\n";
                    cout << "The rat strikes back.\n";
                    cout << "You have " << hp << "HP left.\n\n";
                    Sleep(2000);
                    system("cls");
                }
                if (hp <= 0) {
                    system("cls");
                    cout << "You died!\n";
                    Sleep(1000);
                    exit(0);
                }
            }
            else if (uderzszcura == 2)
            {
                if (hp <= 0) {
                    system("cls");
                    cout << "You died!\n";
                    Sleep(1000);
                    exit(0);
                }
                else {
                    cout << "The rat hits you.\n";
                    cout << "You have " << hp << "HP left.\n\n";
                    Sleep(2000);
                    system("cls");
                }
            }
            else
            {
                cout << "Bad choice :( You pay for mistakes.\n\n";
                Sleep(1000);
                goto szczurki;
            }
        }

    } while (hp > 0 && enemyhp > 0);
}

void tablica(string name, int portfel, int decyzjam) {
    ogloszeniaagain:
    cout << "######################## ANNOUNCEMENTS #######################\n";
    cout << "#                         1. The rat                         #\n";
    cout << "#                       2. Lady Midday                       #\n";
    cout << "#                          3. Leave                          #\n";
    cout << "##############################################################\n";
    int ogloszenia, targuj, szansa;
    cin >> ogloszenia;
    if (ogloszenia == 1) {
        pracodawcaagain:
        cout << "\nSo decided, I have to take care of a rat.\n";
        Sleep(2000);
        cout << "You go to the employer...\n";
        Sleep(2000);
        system("cls");
        cout << "After a short chat, it turns out that the employer wants to pay 4 silver coins for finished work.\n";
        cout << "1. Bargain\n";
        cout << "2. Accept the price\n";
        cin >> targuj;
        if (targuj == 1) {
            system("cls");
            cout << "1. Increase the price by 2 pieces of silver\n";
            cout << "2. Increase the price by 4 pieces of silver\n";
            cin >> szansa;
            if (szansa == 1) {
                system("cls");
                cout << "The employer accepts the price of 6 pieces of silver.\n";
                Sleep(1500);
                cout << "You leave, do the work...";
                Sleep(4000);
                szczury(name, portfel, szansa, decyzjam);
            }
            else if (szansa == 2) {
                system("cls");
                cout << "An angry employer stated that he would give no more than 3 pieces of silver.\n";
                Sleep(1500);
                cout << "You leave, do the work...";
                Sleep(4000);
                szczury(name, portfel, szansa, decyzjam);
            }
            else {
                cout << "WRONG";
                Sleep(1000);
                goto pracodawcaagain;
            }
        }
        else if (targuj == 2) {
            szansa = 3;
            system("cls");
            cout << "You leave, do the work...";
            Sleep(4000);
            szczury(name, portfel, szansa, decyzjam);
        }
        else {
            cout << "WRONG";
            Sleep(1000);
            goto pracodawcaagain;
        }
    }
    else if (ogloszenia == 2) {
        cout << "I think I'm crazy, I'm not a witcher.\n";
        Sleep(2000);
        system("cls");
        goto ogloszeniaagain;
    }
    else if (ogloszenia == 3) {
        cout << "I need this money...\n";
        Sleep(2000);
        system("cls");
        goto ogloszeniaagain;
    }
    else {
        cout << "WRONG";
        Sleep(1000);
        system("cls");
        goto ogloszeniaagain;
    }
}

void karczma(string name, int sprawa, int decyzjam) {
    int piwo;
    karczmarazjeszcze:
    int portfel = 3;
    system("cls");
    cout << "After a moment of walking, an inn appears to your eyes\n";
    Sleep(1500);
    system("cls");
    if (sprawa == 1) {
        cout << "You go to the notice board.\n";
        tablica(name, portfel, decyzjam);
    }
    else if (sprawa == 2) {
        cout << "You head towards the innkeepers and ask her about the price of alcoholic beverages.\n";
        Sleep(3000);
        system("cls");
        cout << "The innkeeper gives you the price.\n\n";
        cout << "1. Buy beer [2 silver pieces]\n";
        cout << "2. Depart\n\n";
        cout << "There are " << portfel << " silver pieces in your purse\n";
        cin >> piwo;
        if (piwo == 1) {
            portfel = (portfel - 2);
            cout << "After one beer, you felt like the second, after the second for the third...";
            Sleep(2000);
            system("cls");
            cout << "You wake up somewhere in the woods, without your belongings, it looks like your adventure is over.";
            Sleep(3000);
            exit(0);
        }
        else if (piwo == 2) {
            cout << "The people at the inn are starting to laugh at you.";
            Sleep(2000);
            system("cls");
            cout << "You noticed notice boards.";
            tablica(name, portfel, decyzjam);
        }
        else {
            cout << "WRONG!!!";
            Sleep(1000);
            goto karczmarazjeszcze;
        }
    }
}

void spotkanie(string name, int decyzjam) {
    again:
    system("cls");
    cout << "On your way you meet the city's mayor.\n";
    cout << "1. Have a talk\n";
    cout << "2. Leave alone\n";
    int podejdz;
    int sprawa;
    cin >> podejdz;
    if (podejdz == 1) {
        system("cls");
        cout << "You decide to talk to the city's mayor.\n\n";
        Sleep(1000);
        cout << " - Hello, stranger, what's your name?\n";
        Sleep(1000);
        cout << " - " << name << "\n";
        Sleep(1000);
        cout << " - In that case, " << name << " what brings you to the me?\n";
        Sleep(1000);

        cout << "\n1. I want to earn\n";
        cout << "2. I am looking for entertainment\n";
        cin >> sprawa;
        if (sprawa == 1) {
            Sleep(1000);
            system("cls");
            cout << "\n - It seems to me that there is a notice board in the inn. You should look there " << name << ".\n";
            Sleep(1000);
            cout << "You go to the inn...";
            Sleep(3000);
            karczma(name, sprawa, decyzjam);
        }
        else if (sprawa == 2) {
            Sleep(1000);
            system("cls");
            cout << "\n - I think there's a pretty tavern just around the corner. You should look there " << name << ".\n";
            Sleep(1000);
            cout << "You go to the inn...";
            Sleep(3000);
            karczma(name, sprawa, decyzjam);
        }
        else {
            cout << "NIE TAK!!!";
            Sleep(1000);
            goto again;
        }

        cout << "\n";
    }
    else if (podejdz == 2) {
        system("cls");
        cout << "You decide to leave the mayor alone when you wonder one of the escaping goblins stabs you in the back.";
        Sleep(4000);
        exit(0);
    }
    else {
        cout << "WRONG!!!";
        Sleep(1000);
        goto again;
    }
    system("pause");
}

void miecz(string name){
    int decyzjam;
    jeszczeraz:
    system("cls");
    cout << "The battle is won, the goblins are fleeing the city!\n";
    Sleep(1000);
    cout << "One of the opponents dropped the sword!\n";
    cout << "1. Take the sword\n";
    cout << "2. Leave the sword\n";
    cin >> decyzjam;
    if (decyzjam == 1) {
        system("cls");
        cout << "You take the sword! [+2 to attack]\n";
        Sleep(1000);
        cout << "You go on...";
        Sleep(3000);
        spotkanie(name, decyzjam);
    }
    else if (decyzjam == 2) {
        system("cls");
        cout << "You leave the sword alone and go further into the city...";
        Sleep(3000);
        spotkanie(name, decyzjam);
    }
    else {
        cout << "WRONG!!!";
        Sleep(1000);
        goto jeszczeraz;
    }
}

void gobliny(string namee)
{
    plac:
    srand(time(NULL));
    int hp = 25, enemyhp = 15;
    int hitGoblin;
   
    do
    {
        int attack = (rand() % 8 + 1), enemyattack = (rand() % 6 + 1);
        enemyhp = showEnemyHp(enemyhp, attack);
        hp = showHp(hp, enemyattack);
        cout << "\nHit the goblin?\n Yes = 1\n No = 2\n";
        cin >> hitGoblin;
        if (hitGoblin == 1)
        {
            cout << "\nYou deal a blow to the goblin.\n";
            if (enemyhp <= 0)
            {
                cout << "The blow was fatal.\n\n";
                cout << "You won" << namee << "!\n";
                Sleep(3000);
                miecz(namee);
            }
            else if (enemyhp > 0)
            {
                cout << "The enemy has " << enemyhp << "HP left.\n\n";
                cout << "The goblin strikes back.\n";
                cout << "You have " << hp << "HP left.\n\n";
                Sleep(2000);
                system("cls");
            }
            if (hp <= 0) {
                system("cls");
                cout << "You died!\n";
                Sleep(1000);
                exit(0);
            }
        }
        else if (hitGoblin == 2)
        {
            if (hp <= 0) {
                system("cls");
                cout << "You died!\n";
                Sleep(1000);
                exit(0);
            }
            else {
                cout << "The goblin is attacking you.\n";
                cout << "You have " << hp << "HP left.\n\n";
                Sleep(2000);
                system("cls");
            }
        }
        else
        {
            cout << "Bad choice :( You pay for mistakes.\n\n";
            Sleep(1000);
            goto plac;
        }

    } while (hp > 0 && enemyhp > 0);
}

int showEnemyHp(int enemyhp, int attack)
{
    enemyhp = enemyhp - attack;
    return enemyhp;
}
int showHp(int hp, int enemyattack)
{
    hp = hp - enemyattack;
    return hp;
}