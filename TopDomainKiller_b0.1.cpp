#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"欢迎使用TopDomainKiller_b0.1  by XDFZ@Unknown"<<endl;
	cout<<"请输入h查看使用方法"<<endl; 
	char cd;
	for(;;){
		cin>>cd;
		if(cd=='h'){
			cout<<"输入1杀死极域"<<endl;
			cout<<"输入2解除软件限制"<<endl;
			cout<<"输入3解除网络限制"<<endl;
			cout<<"输入4退出程序"<<endl;
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

