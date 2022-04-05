#include <stdio.h>

float add(float x, float y); //申明加法函数

float sub(float x, float y); //申明减法函数

float mul(float x, float y); //申明乘法函数

float div(float x, float y); //申明      除法函数

int main(void){
	float a, b, res;
LOOP:
	printf("请输入两个整数：\n"); //输入要计算的两个数
	scanf("%f %f", &a, &b);
	printf("请选择功能：\n");
	printf("1: + \t 2: - \t 3: * \t 4: /\t 0:Exit \n");//功能面板
	int i;
	scanf("%d", &i);
	switch(i){ //switch case来控制
	case 0: //当输入0时，直接跳转到LOOP处重新开始
		break;	
	case 1: //当输入1时,调用加法函数，执行加法运算
		res = add(a, b);
		printf("%1f+%1f=%.2f\n", a, b, res);
		goto LOOP;		
	case 2: //当输入2时,调用减法函数，执行减法运算
		res = sub(a, b);
		printf("%.1f-%.1f=%.2f\n", a, b, res);
		goto LOOP;
	case 3: //当输入3时,调用乘法函数，执行乘法法运算
		res = mul(a, b);
		printf("%1f*%1f=%.2f\n", a, b, res);
		goto LOOP;
	case 4: //当输入4时,调用除法函数，执行除法运算
		res = div(a, b);
		printf("%1f/%1f=%.2f\n", a, b, res);
		goto LOOP;
	default: //如果输入的数不在0-4之间，则输入错误，跳转至LOOP处重新开始
		printf("Eroor!\n");
		goto LOOP;
	}		
	return 0;
}

float add(float x, float y){	//定义加法函数
	return x+y;
}

float sub(float x, float y){	//定义减法函数
	return x-y;
}

float mul(float x, float y){	//定义乘法函数
	return x*y;
}

float div(float x, float y){	//定义除法函数
	return x/y;
}
