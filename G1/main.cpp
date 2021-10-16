#include<graphics.h>
#include<iostream>
int main()
{
	//初始化图像界面640x480
	initgraph(600, 340);
	//加载图片
	loadimage(0, "1.jpg");
	//设置文本字体、颜色
	settextstyle(30, 0, "微软雅黑");
	settextcolor(RGB(255, 255, 0));
	//画一个空心矩形，左上角坐标(300,40),右上角坐标(550,80)
	rectangle(50, 60, 250, 100);
	//在矩形内打印文本
	outtextxy(60, 65, "1-网站404攻击");

	rectangle(50, 120, 250, 160);
	outtextxy(60, 125, "2-网站篡改攻击");

	rectangle(50, 180, 250, 220);
	outtextxy(60, 185, "3-网站攻击修复");

	rectangle(50, 240, 250, 280);
	outtextxy(60, 245, "4-查看攻击记录");
	
	rectangle(300, 60, 500, 100);
	outtextxy(310, 65, "5-DNS攻击");

	rectangle(300, 120, 500, 160);
	outtextxy(310, 125, "6-退出");

	system("pause");
	
	//关闭图形页面
	closegraph();

	return 0;

}