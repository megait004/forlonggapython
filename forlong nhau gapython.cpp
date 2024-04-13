#include<iostream>
using namespace std;
int main(){
	// Ma trận 
//	for(int i=1;i<=7;i++){
//		for(int j=1;j<=7;j++){
//			cout <<i << j << " ";
//		}
//		cout << endl;
//	}




//1.vẽ chữ N.

//     	for(int i=1;i<=7;i++){
//			for(int j=1;j<=7;j++){
//			if(j==1||j==7||i==j)
//			cout <<"*" << " ";
//			else
//			cout << " " << " ";
//		}
//		cout << endl;
//	}
	
	
	
	
// 2. Vẽ hình vuông 	
	
//	for(int i=1;i<=7;i++){
//		for(int j =1;j<=7;j++){
//			if(i==1||i==7||j==1||j==7){
//				cout <<"*" << " ";
//			}
//			else 
//			cout << " " << " ";
//		}
//		cout << endl;
//	}
//	


// 3. vẽ tam giác vuông không lõi	
//
//		for(int i=1;i<=7;i++){
//		for(int j =1;j<=7;j++){
//			if(i==7||j==1||i==j){
//				cout <<"*" << " ";
//			}
//			else 
//			cout << " " << " ";
//		}
//		cout << endl;
//	}
	
 
 // 4. Tam giác vuông có lõi.
	for(int i=1;i<=7;i++){
	for(int j=1;j<=i;j++){
			cout <<i << j << " ";
	}
		cout << endl;
	}
	
	
	
	
	
	
	
}