#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <dos.h>

const int Total = 150;
const int WIDTH = getmaxwidth();
const int HEIGHT = getmaxheight();

//ve tang 1 cua cay thong ben trai
void t1_1(){
	line(250, 440, 200, 500);
	line(250, 440, 300, 500);
	ellipse(250, 500, 180, 360, 50, 30);
	floodfill(250, 450, WHITE);
	
}

//ve tang 2 cua cay thong ben trai
void t1_2(){
	line(216, 520, 180, 550);
	line(283, 520, 318, 548);
	ellipse(249, 545, 189, 360, 68, 22);
	floodfill(216, 530, WHITE);
}

//ve tang 3 cua cay thong ben trai
void t1_3(){
	line(216, 563, 180, 596);
	line(283, 563, 318, 596);
	ellipse(249, 596, 180, 360, 69, 33);
	floodfill(216, 570, WHITE);
}

//ve than cua cay thong ben trai
void t1_4(){
	setfillstyle(SOLID_FILL, BROWN);
	line(230, 628, 230, 680);
	line(270, 627, 270, 680);
	line(230, 680, 270, 680);
	floodfill(240, 630, WHITE);
}

//ve tang 1 cua cay thong ben phai
void t2_1(){
	line(1050, 440, 1000, 500);
	line(1050, 440, 1100, 500);
	ellipse(1050, 500, 180, 360, 50, 30);
	floodfill(1050, 450, WHITE);
	
}

//ve tang 2 cua cay thong ben phai
void t2_2(){
	line(1016, 520, 980, 550);
	line(1083, 520, 1118, 548);
	ellipse(1049, 545, 189, 360, 68, 22);
	floodfill(1016, 530, WHITE);
}

//ve tang 3 cua cay thong ben phai
void t2_3(){
	line(1016, 563, 980, 596);
	line(1083, 563, 1118, 596);
	ellipse(1049, 596, 180, 360, 69, 33);
	floodfill(1016, 570, WHITE);
}

//ve than cua cay thong ben phai
void t2_4(){
	setfillstyle(SOLID_FILL, BROWN);
	line(1030, 628, 1030, 680);
	line(1070, 627, 1070, 680);
	line(1030, 680, 1070, 680);
	floodfill(1040, 630, WHITE);
}

//ve cay thong ben trai
void tree1(){
	setfillstyle(SOLID_FILL, GREEN);
	t1_1();
	setfillstyle(SOLID_FILL, GREEN);
	t1_2();
	setfillstyle(SOLID_FILL, GREEN);
	t1_3();
	setfillstyle(SOLID_FILL, BROWN);
	t1_4();
}

//ve cay thong ben phai
void tree2(){
	setfillstyle(SOLID_FILL, GREEN);
	t2_1();
	setfillstyle(SOLID_FILL, GREEN);
	t2_2();
	setfillstyle(SOLID_FILL, GREEN);
	t2_3();
	setfillstyle(SOLID_FILL, BROWN);
	t2_4();
}

//ham dem nguoc 5 4 3 2 1 0
void counting(){
	char a[5];
	settextstyle(4, HORIZ_DIR, 10);
	setcolor(RED);
	for(int i=5; i>=1; i--){
		sprintf(a, "%d", i);
		outtextxy(600, 300, a);
		delay(1000);
	}
}

//ve cau vong
void rainbow(){
	for(int j=0; j<=1050; j++){
		delay(10);
		setcolor(j/70);
		arc(680,680,0,180,j+20);
	}
}

//ve den nhap nhay
void lights(int &color)
{
	int color1=color+1, color2=color+2, color3=color+3, color4=color+4, color5=color+5;
	setcolor(15);
	line(250,90,250,300);
	if(color>=15) color-=6;
	setfillstyle(1,color);
	circle(250,320,20);
	floodfill(250,320,15);
	
	setcolor(15);
	line(380,90,380,180);
	if(color1>=15) color1-=6;
	setfillstyle(1,color1);
	circle(380,200,20);
	floodfill(380,200,15);
	
	setcolor(15);
	line(510,90,510,250);
	if(color2>=15) color2-=6;
	setfillstyle(1,color2);
	circle(510,270,20);
	floodfill(510,270,15);
	
	setcolor(15);
	line(650,90,650,150);
	if(color3>=15) color3-=6;
	setfillstyle(1,color3);
	circle(650,170,20);
	floodfill(650,170,15);
	
	setcolor(15);
	line(780,90,780,250);
	if(color4>=15) color4-=6;
	setfillstyle(1,color4);
	circle(780,270,20);
	floodfill(780,270,15);
	
	setcolor(15);
	line(910,90,910,180);
	if(color5>=15) color5-=6;
	setfillstyle(1,color5);
	circle(910,200,20);
	floodfill(910,200,15);
	
	setcolor(15);
	line(1050,90,1050,300);
	
	setfillstyle(1,color);
	circle(1050,320,20);
	floodfill(1050,320,15);
}

//tao chuyen dong tuyet roi
void snowfall(int flakesx[], int flakesy[])
{
		
	for(int i=0; i<Total; i++)
	{
	
		int color=15;
		setcolor(color);
		settextstyle(5,0,5);
		outtextxy(flakesx[i],flakesy[i],".");
		
		flakesy[i]+=50;
		if(flakesy[i]>HEIGHT)
		{
			flakesx[i] = rand()%WIDTH;
			flakesy[i] = 0;
		}
	}	
}

int flakesx[150];
int flakesy[150];

void merry_text(){
	snowfall(flakesx,flakesy);
	setcolor(WHITE);
	settextstyle(10, HORIZ_DIR, 10);
	outtextxy(550,300,"HI!");
	delay(600);
	graphdefaults();
	cleardevice();
	
	snowfall(flakesx,flakesy);
	setcolor(RED);
	settextstyle(10, HORIZ_DIR, 10);
	outtextxy(550,300,"WE");
	delay(600);
	graphdefaults();
	cleardevice();
	
	snowfall(flakesx,flakesy);
	setcolor(CYAN);
	settextstyle(10, HORIZ_DIR, 10);
	outtextxy(550,300,"WISH");
	delay(600);
	graphdefaults();
	cleardevice();
	
	snowfall(flakesx,flakesy);
	setcolor(MAGENTA);
	settextstyle(10, HORIZ_DIR, 10);
	outtextxy(550,300,"YOU");
	delay(600);
	graphdefaults();
	cleardevice();
	
	snowfall(flakesx,flakesy);
	setcolor(LIGHTRED);
	settextstyle(10, HORIZ_DIR, 10);
	outtextxy(650,300,"A");
	delay(600);
	graphdefaults();
	cleardevice();
}

main(){
	int gd=0, gm;
	initgraph(&gd, &gm, "");
	initwindow(getmaxwidth( ), getmaxheight( ));        
	
	for(int i=0; i<Total; i++)
	{
		flakesx[i] = rand()%WIDTH;
		flakesy[i] = rand()%HEIGHT;
	}
       
	rainbow();
	delay(10);
	graphdefaults();
	cleardevice();
	
	
	setcolor(WHITE);
	settextstyle(10, HORIZ_DIR, 9);
	outtextxy(250,300,"LET'S COUNTING !");
	delay(1000);
	graphdefaults();
	cleardevice();
	
	counting();
	graphdefaults();
	cleardevice();
	
	merry_text(); 
	
	int i=15;
	int color=9;
	while(1){
		lights(color);
		
		tree1();
		tree2();
		//tao hieu ung chuyen mau
		setfillstyle(SOLID_FILL, i%15);
		t1_1();
		setfillstyle(SOLID_FILL, i%12);
		t1_2();
		setfillstyle(SOLID_FILL, i%15);
		t1_3();
		setfillstyle(SOLID_FILL, BROWN);
		t1_4();
		setfillstyle(SOLID_FILL, i%15);
		t2_1();
		setfillstyle(SOLID_FILL, i%12);
		t2_2();
		setfillstyle(SOLID_FILL, i%15);
		t2_3();
		setfillstyle(SOLID_FILL, BROWN);
		t2_4();
		
		//viet chu "merry"
		setcolor((i+1)%15);
		settextstyle(10, HORIZ_DIR, 8);
		outtextxy(520,480,"MERRY");
	
		//viet chu "christmas"
		setcolor((i+1)%15);
		settextstyle(10, HORIZ_DIR, 9);
		outtextxy(400,570,"CHRISTMAS");
		
		//ve duong thang duoi cung
		for(int j=0; j<10; j+=2){
			line(140,690+j,1170,690+j);
		}
		
		//ve duong thang tren cung
		for(int j=0; j<6; j+=2){
			line(140,90+j,1170,90+j);
		}
		i++; color++;
		delay(500);
		graphdefaults();
		cleardevice();
	}
	getch();
	closegraph;
} 



        
