#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"��ӭʹ��TopDomainKiller_b0.1  by XDFZ@Unknown"<<endl;
	cout<<"������h�鿴ʹ�÷���"<<endl; 
	char cd;
	for(;;){
		cin>>cd;
		if(cd=='h'){
			cout<<"����1ɱ������"<<endl;
			cout<<"����2����������"<<endl;
			cout<<"����3�����������"<<endl;
			cout<<"����4�˳�����"<<endl;
		}else if(cd=='1'){
			system("taskkill /F /IM StudentMain.exe");
		}else if(cd=='2'){
			system("pnputil /delete-driver TDFileFilter.inf /force");
		}else if(cd=='3'){
			system("pnputil /delete-driver TDNetFilter.inf /force");
		}else if(cd=='4'){
			system("pause");
			return 0;
		}
	}
	return 0;
}
//"C:\Path\to\uninstaller.exe" /S

