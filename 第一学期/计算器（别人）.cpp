#include <stdio.h>

float add(float x, float y); //�����ӷ�����

float sub(float x, float y); //������������

float mul(float x, float y); //�����˷�����

float div(float x, float y); //����      ��������

int main(void){
	float a, b, res;
LOOP:
	printf("����������������\n"); //����Ҫ�����������
	scanf("%f %f", &a, &b);
	printf("��ѡ���ܣ�\n");
	printf("1: + \t 2: - \t 3: * \t 4: /\t 0:Exit \n");//�������
	int i;
	scanf("%d", &i);
	switch(i){ //switch case������
	case 0: //������0ʱ��ֱ����ת��LOOP�����¿�ʼ
		break;	
	case 1: //������1ʱ,���üӷ�������ִ�мӷ�����
		res = add(a, b);
		printf("%1f+%1f=%.2f\n", a, b, res);
		goto LOOP;		
	case 2: //������2ʱ,���ü���������ִ�м�������
		res = sub(a, b);
		printf("%.1f-%.1f=%.2f\n", a, b, res);
		goto LOOP;
	case 3: //������3ʱ,���ó˷�������ִ�г˷�������
		res = mul(a, b);
		printf("%1f*%1f=%.2f\n", a, b, res);
		goto LOOP;
	case 4: //������4ʱ,���ó���������ִ�г�������
		res = div(a, b);
		printf("%1f/%1f=%.2f\n", a, b, res);
		goto LOOP;
	default: //��������������0-4֮�䣬�����������ת��LOOP�����¿�ʼ
		printf("Eroor!\n");
		goto LOOP;
	}		
	return 0;
}

float add(float x, float y){	//����ӷ�����
	return x+y;
}

float sub(float x, float y){	//�����������
	return x-y;
}

float mul(float x, float y){	//����˷�����
	return x*y;
}

float div(float x, float y){	//�����������
	return x/y;
}
