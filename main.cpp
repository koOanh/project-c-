#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <dos.h>

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
	for(int i=5; i>=0; i--){
		sprintf(a, "%d", i);
		outtextxy(600, 300, a);
		delay(1000);
	}
}

//ve cau vong
void rainbow(){
	for(int j=0; j<=650; j++){
		delay(10);
		setcolor(j/50);
		arc(680,680,0,180,j+20);
	}
}

void merry_text(){
	setcolor(WHITE);
	settextstyle(10, HORIZ_DIR, 10);
	outtextxy(550,300,"HI!");
	delay(600);
	graphdefaults();
	cleardevice();
	
	setcolor(RED);
	settextstyle(10, HORIZ_DIR, 10);
	outtextxy(550,300,"WE");
	delay(600);
	graphdefaults();
	cleardevice();
	
	setcolor(CYAN);
	settextstyle(10, HORIZ_DIR, 10);
	outtextxy(550,300,"WISH");
	delay(600);
	graphdefaults();
	cleardevice();
	
	setcolor(MAGENTA);
	settextstyle(10, HORIZ_DIR, 10);
	outtextxy(550,300,"YOU");
	delay(600);
	graphdefaults();
	cleardevice();
	
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
	
	rainbow();
	delay(1000);
	graphdefaults();
	cleardevice();
	
	counting();
	graphdefaults();
	cleardevice();
	
	merry_text();
	
	for(int i=100; i<100000; i++){
		tree1();
		tree2();
		//tao hieu ung chuyen mau
		setfillstyle(SOLID_FILL, i%15);
		t1_1();
		setfillstyle(SOLID_FILL, i%11);
		t1_2();
		setfillstyle(SOLID_FILL, i%15);
		t1_3();
		setfillstyle(SOLID_FILL, BROWN);
		t1_4();
		setfillstyle(SOLID_FILL, i%15);
		t2_1();
		setfillstyle(SOLID_FILL, i%11);
		t2_2();
		setfillstyle(SOLID_FILL, i%15);
		t2_3();
		setfillstyle(SOLID_FILL, BROWN);
		t2_4();
		
		//viet chu "merry"
		setcolor((i+1)%10);
		settextstyle(10, HORIZ_DIR, 8);
		outtextxy(520,480,"MERRY");
	
		//viet chu "christmast"
		setcolor((i+1)%10);
		settextstyle(10, HORIZ_DIR, 9);
		outtextxy(400,570,"CHIRSTMAS");
		
		//ve duong thang duoi cung
		for(int j=0; j<10; j+=2){
			line(140,690+j,1170,690+j);
		}
		
		delay(800);
		graphdefaults();
		cleardevice();
	}
	getch();
	closegraph;
} 



        