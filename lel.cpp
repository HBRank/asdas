#include<iostream>

using namespace std;

int deter(int matrix[3][3])
{
int mat[3][3];
   int det1=1,det2=0;

for (int i=0;i<=2;i++)
{for (int j=0;j<=2;j++)
	{
		mat[i][j]=matrix[i][j];
	}
}

for(int i=0;i<=2;i++){
det1=det1*mat[i][i];
}
det1=det1+(mat[0][1]*mat[1][2]*mat[2][0]);
det1=det1+(mat[0][2]*mat[1][0]*mat[2][1]);
det2=-(mat[2][0]*mat[1][1]*mat[0][2]);
det2=det2-(mat[2][1]*mat[1][2]*mat[0][0]);
det2=det2-(mat[2][2]*mat[1][0]*mat[0][1]);
int det=det1+det2;


return det;
}



int main(){

int matriz[4][4]{{1,0,2,-1},{1,1,2,1},{4,2,2,-3},{0,2,1,4}};
int matriz1[3][3]{{0,0,0},{0,0,0},{0,0,0}};
int z=0,b=0;
for(int i=1;i<4;i++){
	for(int j=1;j<4;j++){
	matriz1[z][b]=matriz[i][j];
	b++;
	}b=0;z++;
}

int determin=deter(matriz1);
for (int i=0;i<=2;i++)
{for (int j=0;j<=2;j++)
	{
		cout<<matriz1[i][j];
	}cout<<endl;
}
z=0;b=0;
for (int i=1;i<4;i++)
{for (int j=0;j<4;j++)
	{
		if(j==1){
		j++;
		}
		matriz1[z][b]=matriz[i][j];
		b++;
	}b=0;z++;}

int determin2=deter(matriz1);
cout<<endl;
for (int i=0;i<=2;i++)
{for (int j=0;j<=2;j++)
	{
		cout<<matriz1[i][j];
	}cout<<endl;
}

z=0;b=0;
for (int i=1;i<4;i++)
{for (int j=0;j<4;j++)
	{
		if(j==2){
		j++;
		}
		matriz1[z][b]=matriz[i][j];
		b++;
	}b=0;z++;}
  int determin3=deter(matriz1);
  z=0;b=0;
for(int i=1;i<4;i++){
	for(int j=0;j<3;j++){
	matriz1[z][b]=matriz[i][j];
	b++;
	}b=0;z++;
}
int determin4=deter(matriz1);
int det4x4=((determin*matriz[0][0])-(determin2*matriz[0][1])+(determin3*matriz[0][2])-(determin4*matriz[0][3]));

cout<<determin<<endl;
cout<<determin2<<endl;
cout<<determin3<<endl;
cout<<determin4<<endl;
cout<<det4x4<<endl;
return 0;
}




