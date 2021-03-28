/********
    毫米与英寸的相互转换程序

    修改公式即可改成其他转换程序
*********/

#include <stdio.h>


float mm, inch;                                                     //声明mm与inch为浮点数
main()                                                              //主函数
{
	int y;
    	printf("输入1打开英寸转毫米，输入2打开毫米转英寸\n");
        printf("输入相关指令：");
	 cx:scanf("%d",&y);                                             //“cx：”为goto函数标记
    if (y == 1)                                                     //条件判断 为1则运行inch转换mm
	{
        int m;
        printf("英寸转换成毫米\n");
    while (m >= 0, ++m) {                                           //可以一直循环输入要转换的数字
        printf("输入长度（单位：英寸）\n");
    float n;                                                        //以浮点数输入到scanf
	    scanf("%f",&n);
	    printf("英寸     毫米\n");
        inch = n;
        mm = inch * 25.4;                                           //转换公式：inch change mm
	    printf("%3.3f   %6.3f\n", inch, mm);                        //%x.xf 前面的x为显示的宽度（一般不起作用），后面的x为显示输出的小数位
	    }
	}
    if (y == 2)                                                     //条件判断 为2则运行mm转换inch
	{
        int m;
        printf("毫米转换成英寸\n");
    while (m >= 0, ++m) {
        printf("输入长度（单位：毫米）\n");
    float n;
	    scanf("%f",&n);
	    printf("毫米     英寸\n");
        mm = n;
	    inch = mm / 25.4;                                            //转换公式：mm change inch
		printf("%3.3f   %6.3f\n", mm, inch);
	    }
	}
    if (y > 2)                                                      //条件判断 大于2则重新输入指令
    {
        printf("错误指令，重新输入:\n");
        goto cx;                                                    //跳转到cx
    }
    return 0;
}
