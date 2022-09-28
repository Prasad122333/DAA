#include<iostream>
using namespace std;

void sort(double ratio[],double profit[],double weight[],int n){
	
	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(ratio[i]<ratio[i+1]){
				int temp=ratio[i+1];
				ratio[i+1]=ratio[i];
				ratio[i]=temp;
				
				int temp2=profit[i+1];
				profit[i+1]=profit[i];
				profit[i]=temp2;
				
				int temp3=weight[i+1];
				weight[i+1]=weight[i];
				weight[i]=temp3;
			}
		}
		counter++;
	}
}

void ratiopw(double profit[],double weight[],double ratio[],int n)
{
	for (int i=0;i<n;i++){
		ratio[i]=(profit[i]/weight[i]);
	}
	
}



int main()
{
	int n;
	double tw=15;
	                           //take input of n from user
	n=7;
	
	double profit[n]={10,5,15,7,6,18,3};
	double weight[n]={2,3,5,7,1,4,1};
	double ratio[n]={0,0,0,0,0,0,0};
	int xi[n];
	ratiopw(profit,weight,ratio,n);
	sort(ratio,profit,weight,n);
	

	
	double profitf=0;
	
	for(int i=0;i<n;i++){
		if(weight[i]<tw){
			tw=tw-weight[i];
			xi[i]=1;
			profitf=profitf+profit[i];
		}
		else{
			
			xi[i]=tw/weight[i];
			profitf=profitf+ ((tw/weight[i])*profit[i]);
			tw=tw-(tw/weight[i]);
		}
	}
	
	cout<<profitf;

}















/*::::::Second Dynamic:::::::*/





#include<iostream>
#include<algorithm>
using namespace std;

void input(int *V[][8],int p[],int wi[],int n,int tw){
	
}

int main(){
	
	int n=4;
	int tw=8;
	
	int V[n][tw];
	
	
	int p[n]={1,2,5,6};
	int wi[n]={2,3,4,5};
	for(int w=0;w<tw+1;w++){
		for(int i=0;i<n+1;i++){
			
			if(i==0 ||w==0){
				V[w][i]=0;
			}
			
			else{
				V[i][w]= max(V[i-1][w],V[i-1][w-wi[i]+p[i]]);
			}
			
		}
	}
	
	for(int w=0;w<tw+1;w++){
		for(int i=0;i<n+1;i++){
			cout<<V[w][i]<<" ";
		}
	}
	
	
	
	
}