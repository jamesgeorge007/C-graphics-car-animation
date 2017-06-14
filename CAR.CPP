#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
void main()
{
int gd=DETECT,gm,i,color;
initgraph(&gd,&gm,"..//bgi");
for(i=0,color=10;i<=getmaxx();i++,color++)
{
setcolor(WHITE);
line(0,400,639,400);//Road
setcolor(RED);
if(i<=270)
{
rectangle(90+i,330,190+i,380);//Car body
setcolor(LIGHTBLUE);
arc(140+i,330,0,180,30);//Cabin
setcolor(BLUE);
circle(110+i,390,10);//Wheels
circle(170+i,390,10);
}
else
{
 rectangle(360,330,460,380);//Car body
setcolor(LIGHTBLUE);
arc(410,330,0,180,30);//Cabin
setcolor(BLUE);
circle(380,390,10);//Wheels
circle(440,390,10);
}
setcolor(YELLOW);
circle(150+i,50,50);//Sun
setcolor(GREEN);
rectangle(120+i*5,180,180+i*5,200);//Flying buses
setcolor(LIGHTGREEN);
rectangle(80+i*5,110,140+i*5,130);
setcolor(BLUE);
rectangle(-70+i*5,140,-10+i*5,160);
setcolor(9);
rectangle(-90+i*5,200,-30+i*5,220);
setcolor(RED);
rectangle(485,250,495,400);//Warning board
rectangle(430,220,550,250);
setcolor(BLUE);
settextstyle(1,HORIZ_DIR,2);
outtextxy(440,225,"Stop Here!");//Message
if(color>15)
color=0;
setcolor(color);

/*Aeroplane
line(600-i,100,500-i,100);//Tail
line(600-i,85,500-i,85);
line(600-i,100,608-i,95);//Tail curve
line(600-i,85,608-i,93);
line(500-i,85,500-i,30);//Upper wing
line(480-i,85,480-i,30);
line(500-i,30,490-i,25);//Upper curve
line(480-i,30,490-i,25);
line(500-i,100,500-i,155);//Lower wing
line(480-i,100,480-i,155);
line(500-i,155,490-i,160);//Lower curve
line(480-i,155,490-i,160);
line(500-i,85,440-i,85);//Front end
line(500-i,100,440-i,100);
line(440-i,85,420-i,90);//Front curve
line(440-i,100,420-i,95);
line(420-i,90,416-i,92);
line(420-i,95,416-i,94);
line(500-i,100,500-i,85);//Joining upper and lower wings!
line(480-i,100,480-i,85);*/





//Alternative aeroplane
line(600-i,100,500-i,100);//Tail
line(600-i,85,500-i,85);
line(600-i,100,600-i,85);//Joining tail
/*line(600-i,100,608-i,95);//Tail curve
line(600-i,85,608-i,93);*/
line(500-i,85,440-i,85);//Front end
line(500-i,100,440-i,100);
line(440-i,85,420-i,90);//Front curve
line(440-i,100,420-i,95);
line(420-i,90,416-i,92);
line(420-i,95,416-i,94);
line(500-i,100,500-i,85);//Joining upper and lower wings!
line(480-i,100,480-i,85);
line(480-i,85,500-i,50);//Upper and Lower wings
line(500-i,85,500-i,50);
line(480-i,100,500-i,130);
line(500-i,100,500-i,130);
line(570-i,85,590-i,65);//Tail end upper and lower wings
line(590-i,85,590-i,65);
line(570-i,100,590-i,118);
line(590-i,100,590-i,118);




if(i==0)
{
outtextxy(120,420,"Press any key to start the animation!");
getch();
}
delay(15);
cleardevice();
}
settextstyle(9,HORIZ_DIR,3);
outtextxy(10,120,"Developed by James George");
getch();

}