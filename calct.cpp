#include <iostream>
using namespace std;
int main(){
int a,b,c,d,e,f,g,h;
cout<<"Warning: If You Input Invaild Operator, Then default is plus."<<endl;
cout<<"Don't Press Enter too fast."<<endl;
cout<<"Input Any Operator:"<<endl;
cin>>a;
cout<<"Input Frist Number:"<<endl;
cin>>b;
cout<<"Input Second Number:"<<endl;
cin>>c;
if(a='+'){
	cout<<b+c;
}
else{
	if(a='-'){
		cout<<b-c;
	}
	else{
		if(a='*'){
		    cout<<b*c;
	    }
	    else{
	    	if(a='/'){
	    		if(c==0){
	    			cout<<"Division by zero"<<endl;
	    	    }
	    		else{
	    			cout<<b/c;
				}
				}
				else{
				cout<<"Error"<<endl;
			    }
			}
		}
}
return 0;
}
