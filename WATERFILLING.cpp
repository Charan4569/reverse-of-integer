#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3];
	    for(int i=0;i<3;i++){
	        cin>>a[i];
	        
	    }
	    
	    int up=0,down=0;
	    
	    for(int i=0;i<3;i++){
	        if(a[i==1]){
	            up++;
	            
	        }
	         
	         else{
	             down++;
	             
	         }
	    }
	    if(up>=2){
	        cout<<"not now"<<endl;
	        
	    }
	    else{
	        cout<<"water filling time"<<endl;
	        
	    }
	}
	return 0;
}
