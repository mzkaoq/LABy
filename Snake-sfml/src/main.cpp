#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace sf;

int N=40,M=40;
int size=16;
int w = size*N;
int h = size*M;
int key=1;
int game=-1;
std::string ss;

int dir,num=4,score=0;

struct Snake 
{ 
    int x,y;
}  s[100];

struct Fruit
{ 
    int x,y;
} f;

void Tick()
{
    for (int i=num;i>0;--i)
    {
         s[i].x=s[i-1].x; 
         s[i].y=s[i-1].y;
    }

    if (dir==0) s[0].y+=1;      
    if (dir==1) s[0].x-=1;        
    if (dir==2) s[0].x+=1;         
    if (dir==3) s[0].y-=1;  

    if ((s[0].x==f.x) && (s[0].y==f.y)) 
    {
         num++; 
         f.x=(rand()%(N-2))+1; 
         f.y=(rand()%(M-2))+1;
    }

    if (s[0].x==N-1) 
    {
        s[0].x=1;
        game=1;
    }  
    if (s[0].x==0) 
    {
        s[0].x=N-1;
        game=1;
    }
    if (s[0].y==M-1) 
    {
        s[0].y=1;
        game=1;
    }  
    if (s[0].y==0)
    {
        s[0].y=M-1;
        game=1;
    } 
 
    for (int i=1;i<num;i++)
    {
        if (s[0].x==s[i].x && s[0].y==s[i].y)
        {
            //num=i;
            game=1;
        }
    }
}

int main()
{  
    srand(time(0));

    RenderWindow window(VideoMode(w, h), "Snake Game!");

    Texture t1,t2,t3,t4,t5;
    t1.loadFromFile("C:/Users/THINK/Desktop/C++/LABy/Snake-sfml/images/white.png");
    t2.loadFromFile("C:/Users/THINK/Desktop/C++/LABy/Snake-sfml/images/red.png");
    t3.loadFromFile("C:/Users/THINK/Desktop/C++/LABy/Snake-sfml/images/orange.png");
    t4.loadFromFile("C:/Users/THINK/Desktop/C++/LABy/Snake-sfml/images/green.png");
    t5.loadFromFile("C:/Users/THINK/Desktop/C++/LABy/Snake-sfml/images/black.png");

    Font myfont;
    myfont.loadFromFile("C:/Users/THINK/Desktop/C++/LABy/Snake-sfml/fonts/font1.ttf");
    
    Sprite sprite1(t1);
    Sprite sprite2(t2);
    Sprite sprite3(t3);
    Sprite sprite4(t4);
    Sprite sprite5(t5);

    Text text,text2,text3,text4,text5,text6,text7,text8,text9;
    text.setFont(myfont);
    text2.setFont(myfont);
    text3.setFont(myfont);
    text4.setFont(myfont);
    text5.setFont(myfont);
    text6.setFont(myfont);
    text7.setFont(myfont);
    text8.setFont(myfont);
    text9.setFont(myfont);

    Clock clock;
    float timer=0, delay=0.05;

    f.x=10;
    f.y=10; 
    
    s[0].x=20;
    s[0].y=20;
    while (window.isOpen())
    {
       // std::cout<<s[0].y<<" "<<s[0].x<<std::endl;
        std::cout<<game<<std::endl;
        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer+=time; 

        score = num-4;

        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
            {      
                window.close();
            }
        }
        if (Keyboard::isKeyPressed(Keyboard::Left) && dir!=2) dir=1;   
        else if (Keyboard::isKeyPressed(Keyboard::Right) && dir!=1) dir=2;    
        else if (Keyboard::isKeyPressed(Keyboard::Up) && dir!=0) dir=3;
        else if (Keyboard::isKeyPressed(Keyboard::Down) && dir!=3) dir=0;

        if (Keyboard::isKeyPressed(Keyboard::P) && key==0) key=1;
        if (Keyboard::isKeyPressed(Keyboard::B) && key==1) key=0;
        if (Keyboard::isKeyPressed(Keyboard::Enter)&&game==-1) 
        {
            game=0;
            key=0;
        }
        if (Keyboard::isKeyPressed(Keyboard::N) && game==1) 
            {
                game=0;
                num=4;
            }
        if (Keyboard::isKeyPressed(Keyboard::Q) && game==1) 
        {
            window.close();
        }
        
        

        if (timer>delay && key==0) 
        {
            timer=0; 
            Tick();
        }

        ////// rysowanie ///////
        if(key==1 && game==0)
        {
             text9.setString("PAUSE - press B");
            text9.setCharacterSize(50);
            text9.setFillColor(Color::Black);
            text9.setOrigin(-((N*size)/2-8*16),-200 );
            window.draw(text9);   

            window.display();
        }
        if(game==0 && key==0)
        {
            window.clear();

            for (int i=0; i<N; i++) 
            {
                for (int j=0; j<M; j++) 
                { 
                    sprite1.setPosition(i*size, j*size);  
                    window.draw(sprite1); 
                }
            }
            for (int i=0;i<num;i++)
            {
                sprite2.setPosition(s[i].x*size, s[i].y*size);  
                window.draw(sprite2); 
            }
            for (int i=0; i<N; i++) 
            {
                int j=0;
                sprite3.setPosition(i*size, j*size);
                window.draw(sprite3);
            }
            for (int i=0; i<N; i++) 
            {
                int j=M-1;
                sprite3.setPosition(i*size, j*size);   
                window.draw(sprite3);
            }
            for (int i=0; i<M; i++) 
            {
                int j=0;
                sprite3.setPosition(j*size, i*size);
                window.draw(sprite3);
            }
            for (int i=0; i<M; i++) 
            {
                int j=N-1;
                sprite3.setPosition(j*size, i*size);   
                window.draw(sprite3);
            }
        
            sprite4.setPosition(f.x*size, f.y*size);  
            window.draw(sprite4); 

            text.setString("Score:");
            text.setCharacterSize(12);
            text.setFillColor(Color::Blue);
            window.draw(text);   
            std::string ss = std::to_string(score);
            text2.setString(ss);
            text2.setCharacterSize(12);
            text2.setFillColor(Color::Blue);
            text2.setOrigin(-40,0);
            window.draw(text2);

            window.display();
        }
        else if(game==1)
        {
            window.clear();
            for (int i=0; i<N; i++) 
            {
                for (int j=0; j<M; j++) 
                { 
                    sprite5.setPosition(i*size, j*size);  
                    window.draw(sprite5); 
                }
            }
            std::string ss = std::to_string(score);
            text3.setString(" GAME OVER ");
            text3.setCharacterSize(50);
            text3.setFillColor(Color::White);
            text3.setOrigin(-(N*size)/2+180,-(M*size)/4);
            window.draw(text3);
             text5.setString(" score: ");
            text5.setCharacterSize(50);
            text5.setFillColor(Color::White);
            text5.setOrigin(-(N*size)/2+150,-(M*size)/4-75 );
            window.draw(text5);
            text4.setString(ss);
            text4.setCharacterSize(50);
            text4.setOrigin(-(N*size)/2,((-(M*size)/4)-80));
            window.draw(text4);

            text6.setString(" PRESS N TO PLAY NEXT | PRESS Q TO EXIT ");
            text6.setCharacterSize(25);
            text6.setFillColor(Color::White);
            text6.setOrigin(-40,-(M*size)/2-40);
            window.draw(text6);
        
            window.display();
        }
        else if(game==-1)
        {
            window.clear();
            for (int i=0; i<N; i++) 
            {
                for (int j=0; j<M; j++) 
                { 
                    sprite5.setPosition(i*size, j*size);  
                    window.draw(sprite5); 
                }
            }
            text7.setString(" PRESS ENTER TO PLAY");
            text7.setCharacterSize(40);
            text7.setFillColor(Color::White);
            text7.setOrigin(-(N*size)/2+180,-(M*size)/4);
            window.draw(text7);
            text8.setString(" P - PAUSE | B - RESUME ");
            text8.setCharacterSize(25);
            text8.setFillColor(Color::White);
            text8.setOrigin(-(N*size)/2+300,-(M*size)/2-160);
            window.draw(text8);
        
            window.display();
        }
    }
   return 0;
}
