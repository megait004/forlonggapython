#include<iostream>
using namespace std;
int main(){
	// Ma trận 
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			cout <<i << j << " ";
		}
		cout << endl;
	}
		cout << endl;




//1.vẽ chữ N.

     	for(int i=1;i<=7;i++){
			for(int j=1;j<=7;j++){
			if(j==1||j==7||i==j)
			cout <<"*" << " ";
			else
			cout << " " << " ";
		}
		cout << endl;
	}
		cout << endl;
	
	
	
	
// 2. Vẽ hình vuông rỗng	
	
	for(int i=1;i<=7;i++){
		for(int j =1;j<=7;j++){
			if(i==1||i==7||j==1||j==7){
				cout <<"*" << " ";
			}
			else 
			cout << " " << " ";
		}
		cout << endl;
	}
		cout << endl;
	


// 3. vẽ tam giác vuông không lõi góc 90 độ ở phía dưới bên trái	

		for(int i=1;i<=7;i++){
		for(int j =1;j<=7;j++){
			if(i==7||j==1||i==j){
				cout <<"*" << " ";
			}
			else 
			cout << " " << " ";
		}
		cout << endl;
	}
		cout << endl;
	
 
//  4. Tam giác vuông có lõi có góc 90 độ ở phía dưới bên trái
	for(int i=1;i<=7;i++){
	for(int j=1;j<=i;j++){
			cout <<i << j << " ";
	}
		cout << endl;
	}
		cout << endl;
	


//	 5.Hình vuông có lõi 
	 for(int i=1;i<=7;i++){
	 	for(int j=1;j<=7;j++){
	 		cout << "*" << " ";
		 }
		 cout << endl;
	 }	
	 	cout << endl;

//	6.tam giác vuông có lõi có góc 90 độ ở phía trên bên trái

	for(int i=1;i<=7;i++){
	for(int j=1;j<=7;j++){
		if(i==1||j==1){
				cout << "*" << " " ;
		}
		else if(i==2&&j<=6&&j>1){
			cout <<"*"<<" ";
			
		}
		else if(i==3&&j<=5&&j>1){
			cout <<"*"<<" ";
		}
		else if(i==4&&j<=4&&j>1){
			cout << "*"<<" ";
		}
		else if(i==5&&j<=3&&j>1){
			cout <<"*"<<" ";
		}
		else if(i==6&&j<=2&&j>1){
			cout << "*" << " ";
		}
	
	}
		cout << endl;
	}
		cout << endl;
	
//	 7.tam giác vuông không  lõi có góc 90 độ ở phía trên bên trái 
	 for(int i=1;i<=7;i++){
	 	for(int j =1 ;j<=7;j++){
	 		if(i==1||j==1){
	 			cout << "*"<<" ";
			 }
			else if(i==2&&j==6){
				cout << "*"<<" ";
			}
			else if(i==3&&j==5){
				cout << "*"<<" ";
			}
			else if(i==4&&j==4){
				cout <<"*"<<" ";
			}
			else if(i==5&&j==3){
				cout <<"*"<<" ";
			}
			else if(i==6&&j==2){
				cout <<"*"<<" ";
			}
			else
			cout <<"  ";
		 }
		 cout << endl;
	
}
	cout << endl;
// 8. Tam giác vuông có lõi góc 90 độ bên dưới bên phải
		
		for(int i =1;i<=7;i++){
			for(int j =1;j<=7;j++){
			if(i==7||j==7){
				cout <<"*"<<" ";
			}
			else if(i==2&&j==6){
				cout <<"*"<<" ";
			}
			else if(i==3&&j>4&&j<=6){
				cout <<"*"<<" ";
			}
			else if(i==4&&j>3&&j<=6){
				cout <<"*"<<" ";
			}
			else if(i==5&&j>2&&j<=6){
				cout <<"*"<<" ";
			}
			else if(i==6&&j>1&&j<=6){
				cout <<"*"<<" ";
			}
			else
			cout <<"  " ;
		}
		cout << endl;
		}
			cout << endl;

// 9. Tam giác vuông không lõi có góc 90 độ ở bên dưới bên phải 

		for(int i=1;i<=7;i++){
			for(int j =1;j<=7;j++){
				if(i==7||j==7){
					cout <<"*"<<" ";
					
				}
				else if(i==2&&j==6){
					cout << "*"<<" ";
				}
				else if(i==3&&j==5){
					cout <<"*"<<" ";
				}
				else if(i==4&&j==4){
					cout <<"*"<<" ";
				}
				else if(i==5&&j==3){
					cout <<"*"<<" ";
				}
				else if(i==6&&j==2){
					cout <<"*"<<" ";
				}
				else 
				cout <<"  ";
			}
			cout << endl;
		}
			cout << endl; 
			
			
		//10.Tam giác cân có lõi
			for(int i=1;i<=7;i++){
				for(int j=1;j<=7;j++){
					if(i==5){
						cout <<"*"<<" ";
					}
					else if(i==4&&j>1&&j<7){
						cout <<"*"<<" ";
					}
					else if(i==3&&j>2&&j<6){
						cout <<"*"<<" ";
					}
					else if(i==2&&j==4){
						cout <<"*"<<" ";
						
					}
					else
					cout <<"  ";
				}
				cout <<endl;
			}
			cout << endl;
		
// 11. HÌNh tam giác điều không có lõi 
		for(int i=1;i<=7;i++){
				for(int j=1;j<=7;j++){
					if(i==5){
						cout <<"*"<<" ";
					}
					else if(i==4&&j==2){
						cout<<"*"<<" ";
					}
					else if(i==3&&j==3){
						cout <<"*"<<" ";
					}
					else if(i==2&&j==4){
						cout <<"*"<<" ";	
					}
					else if(i==3&&j==5){
						cout <<"*"<<" ";
					}
					else if(i==4&&j==6){
						cout <<"*"<<" ";
					}
					else 
					cout <<"  ";
				}
				cout << endl;
	}
			cout << endl;
	
	// 12.Hình bình hành có lõi 
		for(int i=1;i<=7;i++){
			for(int j=1;j<=7;j++){
				if(j==4&&i<5){
					cout <<"*"<<" ";
				}
				else if(j==5&&i>1&&i<6){
					cout <<"*"<<" ";
					
				}
				else if(j==6&&i>2&&i<7){
					cout <<"*"<<" ";
				}
				else if(j==7&&i>3&&i<=7){
					cout <<"*"<<" ";
				}
				else 
				cout <<"  ";
				
			}
			cout <<endl;
		}	
			cout << endl;
		
	//13. Hình bình hành không lõi	
			for(int i=1;i<=7;i++){
			for(int j=1;j<=7;j++){
				if(j==4&&i<5){
					cout <<"*"<<" ";
				}
				else if(j==7&&i>3&&i<=7){
					cout << "*"<<" ";
				}
				else if(i==5&&j==5){
					cout << "*"<<" ";
				}
				else if(i==6&&j==6){
					cout <<"*"<<" ";
				}
				else if(i==2&&j==5){
					cout << "*"<<" ";
				}
				else if(i==3&&j==6){
					cout <<"*"<<" ";
				}
				else 
				cout << "  ";
				}
				cout << endl;
			}
			cout <<endl;
		
		// 14.Hình cái nơ có lõi
			for(int i=1;i<=7;i++){
				for(int j=1;j<=7;j++){
					if(i==4){
						cout <<"*"<<" ";
					}
					else if(j==1&&i<4){
						cout <<"*"<<" ";
					}
					else if(j==2&&i>1&&i<4){
						cout <<"*"<<" ";
					}
					else if(i==3&&j==3){
						cout << "*"<<" ";
					}
					else if(i==5&&j==5){
						cout << "*"<<" ";
					}
					else if(j==6&&i>4&&i<7){
						cout << "*"<<" ";
					}
					else if(j==7&&i>4&&i<=7){
						cout <<"*"<<" ";
					}
					else 
					cout <<"  ";
				
				}
				cout << endl;
			}
		// 15.Hình cái nơ không lõi 
			for(int i=1;i<=7;i++){
				for(int j=1;j<=7;j++){
					if(i==4){
						cout <<"*"<<" ";
					}
					else if(i==j){
						cout <<"*"<<" ";
					}
					else if(i==2&&j==1||i==3&&j==1){
						cout <<"*"<<" ";
					}
					else if(i==5&&j==7||i==6&&j==7){
						cout<<"*"<<" ";
					}
					else 
					cout <<"  ";
					
				}
					cout << endl;
			}
		
		
		
}
