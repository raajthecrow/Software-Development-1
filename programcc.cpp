#include<iostream>
#include<conio.h>
#include<cstring>
#include<fstream>
#include<stdlib.h>
using namespace std;

void dis()
{
    string getcontent;
    ifstream openfile;
    openfile.open("file.txt");
    if(openfile.is_open())
    {
        while(! openfile.eof())
        {
            getline(openfile, getcontent);
            cout << getcontent << endl;
        }
    }
}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");}


int main()
{
    char ques[50][500]={
        " When a body moves with a constant speed in a circle?",
        " Large angle produces?",
        " The path followed by a projectile is called its?",
        " Which word is the determiner in the sentence -Will it take much time?",
        " Who among the following writers is not a Nobel Laureate?",
        " Othello is a Shakespeare's play about - ",
        " 1^2+2^2+3^2+..........+x^2 =? ",
        " In what unit is electric power measured? ",
        " How many times a piece of paper can be folded at the most? ",
        " Which is the third highest mountain in the world? ",
        " What is a baby frog called? ",
        " What is Zumba? ",
        " Which planet is the smallest?",
        " What type of whale is the biggest animal in the world?",
        " How many players are there in an ice hockey team?",
        " How many straight edges does a cube have?",
        " Garampani sanctuary is located at?",
        " Track and field star Carl Lewis won how many gold medals at the 1984 Olympic games?",
        " Ricky Ponting is also known as what?",
        " The nickname of Glenn McGrath is what?",
        " A fruit seller had some apples. He sells 40% apples and still has 420 apples. Originally, he ha?",
        " cientists have developed a new camera which might be the world's fastest camera. It is called?",
        " The World Environment Day is celebrated on?",
        " The United Nations declared 1993 as a year of the?",
        " Which of the following is a non metal that remains liquid at room temperature?",
    };
    char opt[50][4][500]=
    {
            ///opt for ques 1
        ". its acceleration is increasing",
        ". its velocity is uniform",
        ". its velocity is changing",
        ". its acceleration is zero",
            ///opt for ques 2
        ". curve trajectory",
        ". high trajectory",
        ". flat trajectory",
        ". straight trajectory",
            ///opt for ques 3
        ". Trajectory",
        ". Treasury",
        ". Tractor",
        ". Territory",
        ///opt for ques 4
        ". will",
        ". much",
        ". take",
        ". time",
        ///opt for ques 5
        ". T.S. Elliot",
        ". Toni Morrison",
        ". William Faulkner",
        ". Toni Morrison",
        ///opt for ques 6
        ". A Jewt",
        ". A Moor",
        ". A Turk",
        ". A Roman",
          ///opt for ques 7
        ". { x(x+1)(2x+1)}/6",
        ". x(x+1)/2",
        ". x",
        ". {x(x+1)/2}^2",
          ///opt for ques 8
        ". Coulomb",
        ". Power",
        ". Watts",
        ". Units",
          ///opt for ques 9
        ". 6",
        ". 7",
        ". 8",
        ". Depends on the size of paper",
        ///opt for ques 10
        ". Mt. K2",
        ". Mt. Makalu",
        ". Mt. Kanchanjungha",
        ". Mt. Kilimanjaro",
        ///opt for ques 11
        ". Saddleback Toads",
        ". Tadpole",
        ". Squeakers",
        ". Fire-belly Toads",
         ///opt for ques 12
        ". A dance workout",
        ". Burpees",
        ". Jumping Jacks",
        ". Push-ups",
         ///opt for ques 13
        ". Earth",
        ". Neptune",
        ". Mercury",
        ". Mars",
        ///opt for ques 14
        ". Dolphin",
        ". Goliath Beetle",
        ". Saltwater Crocodile",
        ". Blue Whale",
        ///opt for ques 15
        ". 6",
        ". 7",
        ". 5",
        ". 9",
        ///opt for ques 16
        ". 6",
        ". 7",
        ". 5",
        ". 9",
        ///opt for ques 17
        ". Junagarh, Gujarat",
        ". Diphu, Assam",
        ". Kohima, Nagaland",
        ". Gangtok, Sikkim",
        ///opt for ques 18
        ". 2",
        ". 3",
        ". 4",
        ". 8",
        ///opt for ques 19
        ". The Rickster",
        ". Ponts",
        ". Ponter",
        ". Punter",
        ///opt for ques 20
        ". Ooh Ahh",
        ". Penguin",
        ". Big Bird",
        ". Pigeon",
         ///opt for ques 21
        ". 700 apples",
        ". 600 apples",
        ". 670 apples",
        ". 900 apples",
        ///opt for ques 22
        ". Moskva",
        ". T-CUP",
        ". STAMP",
        ". Rioch",
        ///opt for ques 23
        ". April 7",
        ". June 5",
        ". August 6",
        ". June 16",
        ///opt for ques 24
        ". disabled",
        ". forests",
        ". girl child",
        ". indigenous people",
        ///opt for ques 25
        ". Phosphorous",
        ". Bromine",
        ". Chlorine",
        ". Helium",
    };

    int ans[50]={3,2,1,2,2,2,4,2,2,3,2, 1, 3,4,1,1,2,2,4,4,1,2,2,4,2};
    int i,j,correct=0,wrong=0,u_ans[100][100],o,player[100], players, choice, countr, r1;
    float score;
    char name[100][100],error[10];

    mainhome:
    system("cls");
     cout<<"\n\t\t_____________________________________________________";
     cout<<"\n\t\t_____________________________________________________";
     cout<<"\n\t\t\t                                                   ";
     cout<<"\n\t\t\t        W  E  L  C  O  M  E";
     cout<<"\n\t\t_____________________________________________________";
     cout<<"\n\t\t_____________________________________________________";
     cout<<"\n\t\t\t                                                   ";
     cout<<"\n\t\t\t         >>QUICK QUIZZER  \n";
     cout<<"\n\t\t\t               OF  \n";
     cout<<"\n\t\t\t           BANGLADESH<<";
     cout<<"\n\t\t_____________________________________________________";
     cout<<"\n\t\t_____________________________________________________\n";
     cout<<"\n\t\t-----------------------------------------------------\n";
     cout<<"\n\t\t*          1. Press S to start the game            *";
     cout<<"\n\t\t*          2. Press V to view the score            *";
     cout<<"\n\t\t*          3. Press R to reset score               *";
     cout<<"\n\t\t*          4. press H for help                     *";
     cout<<"\n\t\t*          5. press Q to quit                      *";
     cout<<"\n\t\t-----------------------------------------------------\n";
     choice=toupper(getch());
     if (choice=='V')
	{
    system("cls");
	dis();
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{//reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

     cout<<"\n\t\t_____________________________________________________";
     cout<<"\n\t\t\t                                                   ";
     cout<<"\n\t\t\t  How many players are willing to play? ";
     cout<<"\n\t\t_____________________________________________________";
    cin>>players;
    gets(error);
    system("cls");
    for(i=0;i<players;i++)
    {
        system("cls");
     cout<<"\n\t\t_____________________________________________________";
     cout<<"\n\t\t\t                                                   ";
     cout<<"\n\t\t\t Enter the name of "<< i+1 <<" player: ";
            gets(name[i]);
     cout<<"\n\t\t_____________________________________________________";

    }



game:
    for(i=0;i<12;i++)
    {
        system("cls");
        cout<<i+1;
        puts(ques[i]);
        cout<<"\n";
        for(j=0;j<4;j++) /// The loop will show all the given options of a question
        {
            cout<<"\t";
            cout<<j+1;
            puts(opt[i][j]);
        }
        for(o=0;o<players;o++) /// The loop will ask for an answer to all player for a single question
        {
            cout<<"\nEnter your answer("<<name[o]<<")";
            cin>>u_ans[o][i];
            if(u_ans[o][i]==ans[i])
            {
                player[o]++;    ///If the answer is correct the player will get one point
            }
        }

        cout<<"\n\n";
    }
    system("cls");
    cout<<"\t======================================\n";
    cout<<"\t==>Complete All Task.\n";
    cout<<"\n\n\t\t**************** CONGRATULATION *****************\n";
    ofstream os;
    os.open("file.txt", ios::ate);
    os<<endl<<"Number of players: "<<players<<endl;
    os<<"Name\t\tScore"<<endl;
    os<<"---------------------------"<<endl;
    for(i=0;i<players;i++) ///The loop will show the number of corrected answer given by an individual player
    {
        cout<<"\t# "<<name[i]<<endl;
        cout<<"\t==>Your total score is: "<<player[i]<<endl<<"\n";
        cout<<"\t==>Your total earn: "<<player[i]*100000<<"$"<<endl;
       os<<name[i]<<":\t\t"<<player[i]<<endl;
       os<<name[i]<<":\t\t"<<player[i]*100000<<"$ Earn\n\n"<<endl;
    }
    int high=0,pos;
    for(i=0;i<players;i++)    ///The loop will check the player of highest given corrected answer
    {
        if(player[i]>high)
        {
            high=player[i];
            pos=i;
        }
    }

    cout<<"\t======================================\n"<<endl;
    cout<<("\n\n\n \t\t**************** CONGRATULATION ****************\n");
    cout<<"\t\t"<<name[pos]<<", You have won the million dollar.$"<<endl;
    os<<"==> The winner is: "<<name[pos]<<endl<<endl;
    os.close();



}    return 0;
    }

