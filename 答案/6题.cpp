# include <stdio.h> 
# include <malloc.h> 

typedef struct worker 
{ 
	int gonghaowu;	//工号 
	char name[100]; //姓名 
	int old; //年龄 
	float BasicWage; //基本工资 
	float LevelCoefficient; //级别系数 
	float ResultsForehead; //业绩额 

}WORKER, *PWORKER; 

int main(void) 
{ 
	int i; 
	float sum[3];
	WORKER *pArr; 

	pArr = (PWORKER)malloc(6 * sizeof(WORKER)); 
	printf("输入：\n\n");
	for(i=0; i<3; ++i) 
	{ 
		printf("请输入第%d个工人的编号：", i+1); 
		scanf("%d", &pArr[i].gonghaowu); 

		printf("请输入第%d个工人的姓名：", i+1); 
		scanf("%s", pArr[i].name); 

		printf("请输入第%d个工人的年龄：", i+1); 
		scanf("%d", &pArr[i].old); 

		printf("请输入第%d个工人的基本工资：", i+1); 
		scanf("%f", &pArr[i].BasicWage); 

		printf("请输入第%d个工人的级别系数：", i+1); 
		scanf("%f", &pArr[i].LevelCoefficient); 

		printf("请输入第%d个工人的业绩额：", i+1); 
		scanf("%f", &pArr[i].ResultsForehead); 

		printf("\n"); 
	} 
	printf("输出：\n\n");
	for(i=0; i<3; ++i) 
	{ 
		printf("第%d个工人的编号：%d\n", i+1, pArr[i].gonghaowu); 
	
		printf("第%d个工人的姓名：%s\n", i+1, pArr[i].name); 
		
		printf("第%d个工人的年龄：%d\n", i+1, pArr[i].old); 
		sum[i]=pArr[i].BasicWage+pArr[i].ResultsForehead*pArr[i].LevelCoefficient/100;
		printf("第%d个工人的工资总额：%.3f\n", i+1, sum[i]); 
		
		printf("\n\n"); 
	} 
	printf("平均年龄为：%d\n",(pArr[0].old+pArr[1].old+pArr[2].old)/3);
	printf("平均工资为：%.4f",(sum[0]+sum[1]+sum[2])/3);


	return 0; 
}
