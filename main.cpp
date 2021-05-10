#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
    class matrix
	   {
        int r1, c1, r2, c2,r3,c3, i, j, k,n;
        char c;
        double a[10][10], b[10][10],temp[10][10],scalar;
        public:
		 void read_matA(){
		     cout<<"|Insert matrix A elements|\n";
             for( i=0;i<r1;i++)
                for( j=0;j<c1;j++){
                    cout<<"A:enter element ["<<i+1<<"]["<<j+1<<"]: ";
                        cin>>a[i][j];
                }
		 }
		 void read_matB(){
		     cout<<"\n|Insert matrix B elements|\n";
             for( i=0;i<r1;i++)
                for( j=0;j<c1;j++){
                    cout<<"B:enter element ["<<i+1<<"]["<<j+1<<"]: ";
                        cin>>b[i][j];
                }
		 }

        void disp_mat(){
            cout<<"\nResult: \n";
            for( i=0;i<r1;i++){
                for( j=0;j<c1;j++)
                    cout<<temp[i][j]<<"  ";
                        cout<<endl;
            }
        }
        void mul_mat(){
            cout << "|Multiply two matrices:-|"<<'\n';
            cout << "Enter rows then columns for first matrix: ";
                cin >> r1 >> c1;
            cout << "Enter rows then columns for second matrix: ";
                cin >> r2 >> c2;
                while (c1!=r2){
                    cout << "Error! column of first matrix not equal to row of second.";
                    cout << "\nEnter rows then columns for first matrix again: ";
                        cin >> r1 >> c1;
                    cout << "\nEnter rows then columns for second matrix again: ";
                        cin >> r2 >> c2;
                }
                read_matA();
                read_matB();
                for(i = 0; i < r1; ++i)
                    for(j = 0; j < c2; ++j)
                        for(k = 0; k < c1; ++k){
                            temp[i][j] += a[i][k] * b[k][j];
                        }
                disp_mat();

        }
        void add_mat(){
            cout << "|Adding two matrices:-|"<<'\n';
            cout << "Enter rows then columns for first matrix: ";
                cin >> r1 >> c1;
            cout << "Enter rows then columns for second matrix: ";
                cin >> r2 >> c2;
            while (c1!=c2&&r1!=r2){
                    cout << "Error! These matrices cannot added.";
                    cout << "\nEnter rows then columns for first matrix again: ";
                        cin >> r1 >> c1;
                    cout << "\nEnter rows then columns for second matrix again: ";
                        cin >> r2 >> c2;
                }
                read_matA();
                read_matB();
                for(i = 0; i < r1; ++i)
                    for(j = 0; j < c2; ++j)
                        for(k = 0; k < c1; ++k){
                            temp[i][j] = a[i][k] + b[k][j];
                        }
                disp_mat();
        }
        void sub_mat(){
            cout << "|Subtract two matrices:-|"<<'\n';
            cout << "Enter rows then columns for first matrix: ";
                cin >> r1 >> c1;
            cout << "Enter rows then columns for second matrix: ";
                cin >> r2 >> c2;
            while (c1!=c2&&r1!=r2){
                    cout << "Error! These matrices cannot Subtract.";
                    cout << "\nEnter rows then columns for first matrix again: ";
                        cin >> r1 >> c1;
                    cout << "\nEnter rows then columns for second matrix again: ";
                        cin >> r2 >> c2;
                }
                read_matA();
                read_matB();
                for(i = 0; i < r1; ++i)
                    for(j = 0; j < c2; ++j)
                        for(k = 0; k < c1; ++k){
                            temp[i][j] = a[i][k] - b[k][j];
                        }
                disp_mat();
        }
        void divide_mat(){
            cout << "|Divide two matrices:-|"<<'\n';
            cout << "Enter rows then columns for first matrix: ";
                cin >> r1 >> c1;
            cout << "Enter rows then columns for second matrix: ";
                cin >> r2 >> c2;
            while (c1!=c2&&r1!=r2){
                    cout << "Error! These matrices cannot divide.";
                    cout << "\nEnter rows then columns for first matrix again: ";
                        cin >> r1 >> c1;
                    cout << "\nEnter rows then columns for second matrix again: ";
                        cin >> r2 >> c2;
                }
                read_matA();
                read_matB();
                for(i = 0; i < r1; ++i)
                    for(j = 0; j < c2; ++j)
                        for(k = 0; k < c1; ++k){
                            temp[i][j] = a[i][k] / b[k][j];
                        }
                disp_mat();
        }
        void tra_mat(){
            read_matA();
            cout << "Transpose of Matrix : \n ";
            for (i = 0; i < r1; i++){
                for (j = 0; j < c1; j++)
                    cout << a[j][i] << " ";
                    cout << "\n ";
            }

        }
        void det_mat(){};
        void inverse_mat(){};
        void n_mat(){
            cout << "Enter rows then columns for first matrix: ";
                cin >> r1 >> c1;
            while (r1==0 || c1==0){
                    cout << "Error! These matrices cannot divide.";
                    cout << "\nEnter rows then columns for first matrix again: ";
                        cin >> r1 >> c1;
                }
            read_matA();
            cout << "\n Enter the power you want: ";
            cin>>n;
            for(i = 0; i < n; ++i)
                    for(j = 0; j < r1; ++j)
                        for(k = 0; k < c1; ++k){
                            temp[j][k] = a[j][k] * a[j][k];
                        }
                disp_mat();

        }
        void scalar_mat(){
            cout << "Enter rows then columns for first matrix: ";
                cin >> r1 >> c1;
            while (c1==0&&r1==0){
                    cout << "Error! scalar multiplication cannot be done on this matrix.";
                    cout << "\nEnter rows then columns for first matrix again: ";
                        cin >> r1 >> c1;
                }
            read_matA();
            cout << "\nScalar Product Matrix is: ";
            cin>>scalar;
                    for(j = 0; j < r1; ++j)
                        for(k = 0; k < c1; ++k){
                            temp[j][k] += a[j][k] * scalar;
                        }
            disp_mat();
        }

        void menu(){
           system("Color 5F");
            cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"{~ Welcome in matrix Calculator ~}"<<'\n';
            cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"   ____________________________   "<<'\n';
            cout<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"1- Addition"<<'\t'<<'\t'<<"2- Subtraction"<<'\t'<<'\n'
                <<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"3- Division"<<'\t'<<'\t'<<"4- Multiplycation"<<'\n'
                <<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"5- Transpose"<<'\t'<<'\t'<<"6- Det(mat)"<<'\t'<<'\n'
                <<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"7- Inverse"<<'\t'<<'\t'<<"8- (Matrix)^n"<<'\n'
                <<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"9- Scalar product"<<'\n';
        }
	  void choosing(){
        int opt = 0;
            menu();
            cout<<'\n'<<'\t'<<'\t'<<'\t'<<'\t'<<'\t'<<"Choose your operation option: ";
            cin>>opt;
            switch(opt){
            case 1:
                add_mat();
                break;
            case 2:
                sub_mat();
                break;
            case 3:
                divide_mat();
                break;
            case 4:
                mul_mat();
                break;
            case 5:
                tra_mat();
            case 6:
                det_mat();
            case 7:
                inverse_mat();
            case 8:
                n_mat();
            case 9:
                scalar_mat();
            default:
                cout<<"Invalid Choice";
                break;
            }
	  }
	  void startMatrix() {
        do {
            choosing();
        cout << " \n Do you want to continue? Y/N: ";
        cin >>c;
        system("CLS");
        }
        while(c == 'Y' || c == 'y');
    }
    };

int main(){
matrix a;
a.startMatrix();
}

