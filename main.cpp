#include<graphics.h>
#include<conio.h>
#include<math.h>
class iron{
	void boundfill(int xc,int yc,int r,int b)
{
	int cur;
	cur=getpixel(xc,yc);
	if(cur!=b && cur!=r)
	{
	putpixel(xc,yc,r);

//	delay(1);

	boundfill(xc+1,yc,r,b);
	boundfill(xc-1,yc,r,b);
	boundfill(xc,yc+1,r,b);
	boundfill(xc,yc-1,r,b);
	 }

}

	
	
	public:
	iron(){
		
			
	setcolor(4);
	for(int i=0;i<639;i++)
	{
	  line(0+i,0,0+i,479);
	}
	//maxx=getmaxx();;;
	//maxy=getmaxy();delay(50);
	setcolor(14);
	//========PART 1===========//
	line(273,68,285,65);
	line(285,65,298,63);
	line(298,63,306,63);
	line(306,63,314,65);
	line(314,65,327,66);
	line(327,66,334,68);
	line(334,68,328,117);
	line(328,117,279,117);
	line(279,117,273,68);
	boundfill(306,92,14,14);


//========PART 2===========//
line(283,124,324,124);delay(20);
line(324,124,324,178);delay(20);
line(324,178,314,180);delay(20);
line(314,180,304,182);delay(20);
line(304,182,294,180);delay(20);
line(294,180,283,178);delay(20);
line(283,178,283,124);
boundfill(305,155,14,14);


//==============PART 3=======================//
line(335,100,339,68);delay(20);
line(339,68,347,71);delay(20);
line(347,71,352,73);delay(20);
line(352,73,357,75);delay(20);
line(357,75,360,77);delay(20);
line(360,77,363,79);delay(20);
line(363,79,368,82);delay(20);
line(368,82,371,85);delay(20);
line(371,85,375,89);delay(20);
line(375,89,378,93);delay(20);
line(378,93,382,97);delay(20);
line(382,97,385,100);delay(20);
line(385,100,386,112);delay(20);
line(386,112,388,122);delay(20);
line(388,122,389,135);delay(20);
line(389,135,389,146);delay(20);
line(389,146,389,159);delay(20);
line(389,159,392,162);delay(20);
line(392,162,395,165);delay(20);
line(395,165,397,170);delay(20);
line(397,170,398,173);delay(20);
line(398,173,399,182);delay(20);
line(399,182,399,191);delay(20);
line(399,191,400,197);delay(20);
line(400,197,398,207);delay(20);
line(398,207,396,215);delay(20);
line(396,215,393,222);delay(20);
line(393,222,391,229);delay(20);
line(391,229,390,231);delay(20);
line(390,231,388,240);delay(20);
line(388,240,385,251);delay(20);
line(385,251,383,260);delay(20);
line(383,260,381,267);delay(20);
line(381,267,379,274);delay(20);
line(379,274,378,287);delay(20);
line(378,287,378,301);delay(20);
line(378,301,377,306);delay(20);
line(377,306,376,311);delay(20);
line(376,311,374,318);delay(20);
line(374,318,371,325);delay(20);
line(371,325,367,332);delay(20);
line(367,332,363,336);delay(20);
line(363,336,360,341);delay(20);
line(360,341,346,363);delay(20);
line(346,363,339,370);delay(20);
line(339,370,321,359);delay(20);
line(321,359,284,359);delay(20);
line(284,359,263,370);delay(20);
line(263,370,258,363);delay(20);
line(258,363,247,347);delay(20);
line(247,347,240,336);delay(20);
line(240,336,232,324);delay(20);
line(232,324,227,311);delay(20);
line(227,311,226,292);delay(20);
line(226,292,223,255);delay(20);
line(223,255,218,245);delay(20);
line(218,245,217,231);delay(20);
line(217,231,211,217);delay(20);
line(211,217,208,204);delay(20);
line(208,204,207,184);delay(20);
line(207,184,208,174);delay(20);
line(208,174,211,165);delay(20);
line(211,165,217,157);delay(20);
line(217,157,220,100);delay(20);
line(220,100,228,92);delay(20);
line(228,92,233,86);delay(20);
line(233,86,239,81);delay(20);
line(239,81,245,77);delay(20);
line(245,77,254,73);delay(20);
line(254,73,267,67);delay(20);
line(267,67,271,100);delay(20);
line(271,100,250,105);delay(20);
line(250,105,246,90);delay(20);
line(246,90,246,106);delay(20);
line(246,106,237,111);delay(20);
line(237,111,231,114);delay(20);
line(231,114,225,120);delay(20);
line(225,120,226,136);delay(20);
line(226,136,227,148);delay(20);
line(227,148,227,164);delay(20);
line(227,164,227,206);delay(20);
line(227,206,225,215);delay(20);
line(225,215,221,231);delay(20);
line(221,231,222,244);delay(20);
line(222,244,223,249);delay(20);
line(223,249,254,310);delay(20);
line(254,310,253,318);delay(20);
line(253,318,252,325);delay(20);
line(252,325,251,331);delay(20);
line(251,331,263,355);delay(20);
line(263,355,272,354);delay(20);
line(272,354,280,351);delay(20);
line(280,351,294,352);delay(20);
line(294,352,296,351);delay(20);
line(296,351,298,350);delay(20);
line(298,350,299,349);delay(20);
line(299,349,307,349);delay(20);
line(307,349,312,352);delay(20);
line(312,352,327,352);delay(20);
line(327,352,334,355);delay(20);
line(334,355,341,355);delay(20);
line(341,355,355,329);delay(20);
line(355,329,353,321);delay(20);
line(353,321,353,316);delay(20);
line(353,316,357,306);delay(20);
line(357,306,365,291);delay(20);
line(365,291,371,281);delay(20);
line(371,281,375,275);delay(20);
line(375,275,378,266);delay(20);
line(378,266,382,254);delay(20);
line(382,254,384,242);delay(20);
line(384,242,386,233);delay(20);
line(386,233,385,227);delay(20);
line(385,227,383,218);delay(20);
line(383,218,381,212);delay(20);
line(381,212,380,209);delay(20);
line(380,209,381,120);delay(20);
line(381,120,376,116);delay(20);
line(376,116,373,114);delay(20);
line(373,114,367,111);delay(20);
line(367,111,359,108);delay(20);
line(359,108,358,92);delay(20);
line(358,92,353,104);delay(20);
line(353,104,335,100);delay(20);
line(375,89,367,111);delay(20);
line(396,215,381,212);delay(20);
line(367,332,355,329);delay(20);
line(228,92,231,114);delay(20);
line(211,217,227,206);delay(20);

boundfill(349,88,14,14);
boundfill(255,86,14,14);
boundfill(384,138,14,14);
boundfill(368,300,14,14);
boundfill(302,355,14,14);
boundfill(216,185,14,14);

//===PART 4====//
line(267,371,283,363);delay(20);
line(283,363,320,363);delay(20);
line(320,363,334,371);delay(20);
line(334,371,327,372);delay(20);
line(327,372,315,373);delay(20);
line(315,373,291,373);delay(20);
line(291,373,280,372);delay(20);
line(280,372,267,371);delay(20);
boundfill(299,368,14,14);


//=====PART 5====//
line(257,321,268,339);delay(20);
line(268,339,276,329);delay(20);
line(276,329,330,329);delay(20);
line(330,329,338,339);delay(20);
line(338,339,348,321);delay(20);
line(348,321,349,330);delay(20);
line(349,330,340,349);delay(20);
line(340,349,338,351);delay(20);
line(338,351,334,349);delay(20);
line(334,349,328,346);delay(20);
line(328,346,312,346);delay(20);
line(312,346,311,345);delay(20);
line(311,345,297,345);delay(20);
line(297,345,296,347);delay(20);
line(296,347,280,346);delay(20);
line(280,346,269,350);delay(20);
line(269,350,267,351);delay(20);
line(267,351,256,332);delay(20);
line(256,332,257,321);delay(20);
boundfill(301,337,14,14);

//========PART 6======//
line(229,123,237,117);delay(20);
line(237,117,242,115);delay(20);
line(242,115,245,114);delay(20);
line(245,114,251,112);delay(20);
line(251,112,260,110);delay(20);
line(260,110,266,107);delay(20);
line(266,107,272,106);delay(20);
line(272,106,279,182);delay(20);
line(279,182,303,189);delay(20);
line(303,189,326,182);delay(20);
line(326,182,334,104);delay(20);
line(334,104,346,109);delay(20);
line(346,109,355,112);delay(20);
line(355,112,361,115);delay(20);
line(361,115,367,118);delay(20);
line(367,118,373,121);delay(20);
line(373,121,377,124);delay(20);
line(377,124,375,133);delay(20);
line(375,133,374,139);delay(20);
line(374,139,373,145);delay(20);
line(373,145,372,151);delay(20);
line(372,151,371,159);delay(20);
line(371,159,370,167);delay(20);
line(370,167,369,185);delay(20);
line(369,185,369,186);delay(20);
line(369,186,368,207);delay(20);
line(368,207,369,214);delay(20);
line(369,214,370,220);delay(20);
line(370,220,329,236);delay(20);
line(329,236,323,238);delay(20);
line(323,238,319,241);delay(20);
line(319,241,313,242);delay(20);
line(313,242,306,243);delay(20);
line(306,243,295,243);delay(20);
line(295,243,284,243);delay(20);
line(284,243,277,236);delay(20);
line(277,236,272,235);delay(20);
line(272,235,236,221);delay(20);
line(236,221,237,212);delay(20);
line(237,212,238,204);delay(20);
line(238,204,239,205);delay(20);
line(239,205,240,196);delay(20);
line(240,196,239,183);delay(20);
line(239,183,238,174);delay(20);
line(238,174,237,165);delay(20);
line(237,165,236,161);delay(20);
line(236,161,235,153);delay(20);
line(235,153,233,146);delay(20);
line(233,146,232,136);delay(20);
line(232,136,230,128);delay(20);
line(230,128,229,123);delay(20);
line(279,182,236,221);delay(20);
line(326,182,370,220);delay(20);
boundfill(257,167,14,14);
boundfill(300,217,14,14);
boundfill(352,142,14,14);

//======PART 7=====//
line(235,225,277,242);delay(20);
line(277,242,280,244);delay(20);
line(280,244,278,248);delay(20);
line(278,248,264,248);delay(20);
line(264,248,248,242);delay(20);
line(248,242,235,225);delay(20);
boundfill(254,238,15,14);


//=====PART 8====//
line(370,223,324,245);delay(20);
line(324,245,326,248);delay(20);
line(326,248,337,247);delay(20);
line(337,247,349,245);delay(20);
line(349,245,355,243);delay(20);
line(355,243,370,231);delay(20);
line(370,231,370,223);delay(20);
boundfill(348,240,15,14);



//===PART 9====//
line(234,232,244,247);delay(20);
line(244,247,279,255);delay(20);
line(279,255,283,249);delay(20);
line(283,249,301,250);delay(20);
line(301,250,318,249);delay(20);
line(318,249,324,256);delay(20);
line(324,256,361,249);delay(20);
line(361,249,370,239);delay(20);
line(370,239,370,251);delay(20);
line(370,251,362,280);delay(20);
line(362,280,331,324);delay(20);
line(331,324,276,325);delay(20);
line(276,325,245,281);delay(20);
line(245,281,234,248);delay(20);
line(234,248,234,232);delay(20);
line(279,255,276,325);delay(20);
line(324,256,331,324);delay(20);
boundfill(299,290,14,14);
boundfill(261,276,14,14);
boundfill(344,276,14,14);
settextstyle(6,0,5);
outtextxy(500,500,"your favourite avenger");
getch();	
	
	
	}
};







class lovean{
	//animation foe hraet
	
	public:
		lovean(){
			for (int i=0;i<=858;i++){//for how animation goes to screen 
	
int	  x=rand()%getmaxx();
  int        y=rand()%getmaxy();
          putpixel(x,y,15);
	
	
setbkcolor(4);
setcolor(12);
	arc(300+i,250,67+i,294+i,150);
delay(1);
}
for(int j=0;j<=1;j++){
for(int k=0;k<=10;k++){

setcolor(k);
settextstyle(6,0,5);
outtextxy(400,150,"i love really you");
outtextxy(460,200,"h");
//outtextxy(500,190,"NEXT PART COMING SOON");
delay(100);
}}

		}
};

 

class name{// print randemoly anme in display
	
	
	public:
		name(){
			cleardevice();
			for(int a=0;a<150;a++)
 {
 for(int b=0;b<15;b++)
 {
 	settextstyle(5,0,4);
 	setcolor(4);
 int r=rand()%getmaxx();
int ry=rand()%getmaxy();
outtextxy(r,ry,"H");
delay(10);
//fflush(std);
 }
}

		}
};




class fir{
	public:
		fir(){
			
				int angle=0;
	double x,y;
	
	
 for(int i=0;i<50;i++){
 
		setcolor(12);
		settextstyle(7,0,6);
		outtextxy(350,400,"welcome to merquary project");
	
delay(100);
	cleardevice();
}
	
	
	 ///line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
 /* generate a sine wave */
 for(x = 0; x < getmaxx() ;x++) {

     /* calculate y value given x */
     y = 50*tan(angle*3.141/90);
     y = getmaxy()/2 - y;

     /* color a pixel at the given position */
     setcolor(x);
  putpixel(x, y, 11);
  delay(2);

  /* increment angle */
  angle+=190;
 }


		
		
			
		}
};




class love 
{// purpose to a girl
		
	
	public:
		love(){
			
			
		int a,	d,i,c=200, s=190,f=210,t,r,v=180,b=210,m,n,speed=8;
int arr[]={400,300,410,330,410,330,390,330,390,330,400,300};
setbkcolor(11);
for(a=1;a<=17&&!kbhit();a++)
{
   t=s,r=f;
   m=v,n=b;
   for(i=300;i<=315&&!kbhit();i++)
   {
  settextstyle(5,0,2);
  setcolor(5);
  
  
 // gotoxy(29,2);printf("HALF BAKED KODERZ");
  outtextxy(29,10,"shivanshu");
 
  setcolor(4);
  //gotoxy(32,4);printf("MAKE");
  settextstyle(3,0,3);
   outtextxy(390,200,"H");
 // settextstyle(6,0,6);
  //gotoxy(32,5);printf("PROPOSAL");
   outtextxy(250,110,"purposal");
  
  //gotoxy(32,6);printf("To");
  outtextxy(300,170,"to");
  
 // gotoxy(32,7);printf("QUEEN OF CODES");
  outtextxy(32,7,"shivanshu");
  
  line(1,350,630,350);
  ellipse(400,273,-10,200,15,20);  ellipse(401,273,-10,200,15,20);
  ellipse(405,268,0,360,2,3);      ellipse(395,268,0,360,2,3);
  putpixel(395,269,15);        putpixel(405,269,15);
  line(398,274,403,274);         line(399,274,404,274);
  line(414,279,407,279);           line(415,279,408,279);
  line(386,279,394,279);           line(387,279,395,279);
  circle(400,270,10);         circle(401,270,10);
  line(400,300,400,280);       line(401,300,401,280);
  line(400,280,410,290);       line(401,280,411,290);
  line(410,290,400,300);       line(411,290,401,300);
  line(400,280,390,290);       line(401,280,391,290);
  line(390,290,400,300);       line(391,290,401,300);
  fillpoly(6,arr);
  line(395,330,395,350);       line(396,330,396,350);
  line(405,330,405,350);       line(406,330,406,350);
  line(1,351,630,351);
  circle(c,270,10); circle(c+1,270,10);
  ellipse(c+5,269,0,360,2,3); putpixel(c+5,269,15);
  line(c+3,276,c+8,276);
  line(c,280,c,320); line(c+1,280,c+1,320);
  line(c,280,n,298); line(c+1,280,n+1,298);
  line(n,298,(b+10),292); line(n+1,298,(b+11),292);
  circle(n+10,281,2); circle(n+11,281,2);
  circle(n+10,278,2);   circle(n+11,278,2);
  circle(n+15,280,2); circle(n+16,280,2);
  circle(n+5,280,2); circle(n+6,280,2);
  line(n+10,292,n+10,285); line(n+11,292,n+11,285);
  line(c+1,320,r-=1,350);
  line(c,320,t+=1,350);
  delay(100);
  if(a==17)
  goto zx;
  cleardevice();
   }
   c+=speed;
   s+=speed,f+=speed,v+=speed,b+=speed;
}
zx:
{
ellipse(375,231,0,360,60,20); 
 ellipse(376,231,0,360,60,20);
line(360,245,335,260);
   line(361,245,336,260);

setcolor(13);
//gotoxy(337,227);printf("I LOVE U");
outtextxy(337,227,"i rellay love you");

fflush(stdout);
//gotoxy(45,17);
// gotoxy(46,17);printf("%c",3);fflush(stdout);
 
//outtextxy(47,17,"3");
}
getch();
			
					}
	
	
	
	
	
	
	
};










class count{
	char a[5];
	public:
		count(){
			settextjustify(CENTER_TEXT, CENTER_TEXT);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   setcolor(12);
 
   for (int i = 30; i >=0; i--)
   {
   	setbkcolor(3);
   	settextstyle(8,0,10);
      sprintf(a, "%d", i);
      outtextxy(getmaxx()/2, getmaxy()/2, a);
      delay(200);
 
      if (i == 0)
         break;
      cleardevice();
   }
 
		}
};


class reject{
	public:
		
		reject(){
			for(int g=0;g<15;g++){
			
			setcolor(4);
			settextstyle(5,0,5);
			outtextxy(500,500,"she reject him for some reason");
		delay(100);
		}
			
		}
	
	
};










class load{
	
	public:
		load(){
			
			setcolor(WHITE);
			
			for(int i=35;i<555;i++)
			line(250+i,170,250+i,200);
			for(int i=35;i<555;i++){
				setcolor(GREEN);
				line(250+i,170,250+i,200);
				//delay(1);
				setcolor(WHITE);
				settextstyle(6,0,6);
				outtextxy(200,200,"loading feeling for you");
				delay(1);
			
			//setcolor(rand()%16);
			//settextstyle(3,0,3);
//			outtextxy(390,220,"""");
			//delay(10);
			}
			
			}
			
			cleardevice();	
};






main()
{
	initwindow(1920,800);
	


	
	
	fir f;
 iron man;
	
	cleardevice();

	
	
load obj;

	cleardevice();
	
	for(int y=0;y<17;y++){
		setcolor(y);
		settextstyle(6,0,5);
		//outtexxtxy(10,150,"ERROR 404");
		outtextxy(20,200," 'please wait feeling is to big can't be load so sorry' ");
		delay(100);
		cleardevice();


	}
	cleardevice();
setfillstyle(2,8);
setbkcolor(RED);

lovean lo;
count obj4;
love i;
cleardevice();
reject obj3;

name e;


//	arc(420,250,113,246,150);


//floodfill(250,250,8);
//
//setfillstyle(2,8);
	getch();
	closegraph();
}
//project by shivanshu tiwari
