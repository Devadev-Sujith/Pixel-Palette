Q1) Staircase 

This is a staircase of size :

   #
  ##
 ###
####
Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .


Solution:


void staircase(int n) {
    for(int k=1;k<=n;k++){
        for(int i=(n-k);i>=1;i--)
            cout<<" ";
        for(int j=1;j<=k;j++)
            cout<<"#";
        cout<<endl;
    }
}

