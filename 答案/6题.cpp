# include <stdio.h> 
# include <malloc.h> 

typedef struct worker 
{ 
	int gonghaowu;	//���� 
	char name[100]; //���� 
	int old; //���� 
	float BasicWage; //�������� 
	float LevelCoefficient; //����ϵ�� 
	float ResultsForehead; //ҵ���� 

}WORKER, *PWORKER; 

int main(void) 
{ 
	int i; 
	float sum[3];
	WORKER *pArr; 

	pArr = (PWORKER)malloc(6 * sizeof(WORKER)); 
	printf("���룺\n\n");
	for(i=0; i<3; ++i) 
	{ 
		printf("�������%d�����˵ı�ţ�", i+1); 
		scanf("%d", &pArr[i].gonghaowu); 

		printf("�������%d�����˵�������", i+1); 
		scanf("%s", pArr[i].name); 

		printf("�������%d�����˵����䣺", i+1); 
		scanf("%d", &pArr[i].old); 

		printf("�������%d�����˵Ļ������ʣ�", i+1); 
		scanf("%f", &pArr[i].BasicWage); 

		printf("�������%d�����˵ļ���ϵ����", i+1); 
		scanf("%f", &pArr[i].LevelCoefficient); 

		printf("�������%d�����˵�ҵ���", i+1); 
		scanf("%f", &pArr[i].ResultsForehead); 

		printf("\n"); 
	} 
	printf("�����\n\n");
	for(i=0; i<3; ++i) 
	{ 
		printf("��%d�����˵ı�ţ�%d\n", i+1, pArr[i].gonghaowu); 
	
		printf("��%d�����˵�������%s\n", i+1, pArr[i].name); 
		
		printf("��%d�����˵����䣺%d\n", i+1, pArr[i].old); 
		sum[i]=pArr[i].BasicWage+pArr[i].ResultsForehead*pArr[i].LevelCoefficient/100;
		printf("��%d�����˵Ĺ����ܶ%.3f\n", i+1, sum[i]); 
		
		printf("\n\n"); 
	} 
	printf("ƽ������Ϊ��%d\n",(pArr[0].old+pArr[1].old+pArr[2].old)/3);
	printf("ƽ������Ϊ��%.4f",(sum[0]+sum[1]+sum[2])/3);


	return 0; 
}
