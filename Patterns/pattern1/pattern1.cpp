#include <iostream>
#include<cmath>
#include <string>
using namespace std;
/* 1
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

/* 2
* 
* * 
* * * 
* * * * 
* * * * *
*/

/* 3
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

/* 4
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5 
*/

/* 5
* * * * *
* * * * 
* * * 
* * 
* 
*/

/* 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/

/* 7
    *    
   ***   
  *****  
 ******* 
*********
*/

/* 8
*********
 ******* 
  *****  
   ***
    *   
*/

/* 9 
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *  
*/

/* 10
*
**
*** 
****
*****
******  
*****
****
***    
**
*
*/

/* 11
1
01
101
0101
10101
*/
/* 12
1        1
12      21
123    321
1234  4321
1234554321
*/
/* 13 
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
*/
/* 14
A
A B
A B C
A B C D
A B C D E
*/
/* 15
A B C D E 
A B C D
A B C 
A B
A
*/
/* 16
A 
B B
C C C
D D D D
E E E E E
*/
/* 17 
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA
*/
/* 18
E
D E
C D E
B C D E
A B C D E
*/
/* 19
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
/* 20
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
/* 21
*****
*   *
*   *
*   *
*****
*/

/* 22
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/
void print22(int n) {
  n=3;
  for(int i=1;i<2*n;i++) {
    for(int j=1;j<2*n;j++) {
      // if(i==n && j==n) cout<<1;
      // else if(i>=4 && i<=6 && j>=4 && j<=6) cout<<2;
      // else if(i>=3 && i<=7 && j>=3 && j<=7) cout<<3;
      // else if(i>=2 && i<=8 && j>=2 && j<=8) cout<<4;
      // else if(i>=1 && i<=9 && j>=1 && j<=9) cout<<5;


      if(i==n && j==n) cout<<1;
      else if(i>=n-1 && i<=n+1 && j>=n-1 && j<=n+1) cout<<2;
      else if(i>=n-2 && i<=n+2 && j>=n-2 && j<=n+2) cout<<3;
     // else if(i>=n-3 && i<=n+3 && j>=n-3 && j<=n+3) cout<<4;
     // else if(i>=n-4 && i<=n+4 && j>=n-4 && j<=n+4) cout<<5;
    }
    cout<<endl;
  }
}
void print21(int n) {
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if(i==0 || i==n-1) cout<<"*";
      else {
        if(j==0 || j==n-1) cout<<"*";
        else cout<<" ";
      }
    }
    cout<<endl;
  }
}
void print20(int n) {
  int start=2;
  int end=2*n-1;
  for(int i=1;i<2*n;i++) {
    for(int j=1;j<=2*n;j++) {
      if(j>=start && j<=end) cout<<" ";
      else cout<<"*";
    }
    cout<<endl;
    if(i<n) {
      start++;
      end--;
    }
    else {
      start--;
      end++;
    }
  }

}
void print19(int n) {
  int start=n+1;
  int end=n;
  for(int i=1;i<=2*n;i++){
    for(int j=1;j<=2*n;j++) {
      if(i==1 || i==2*n) cout<<"*";
      else {
        if(j>=start && j<=end) {
          cout<<" ";
        }
        else cout<<"*";
      }
    }
    cout<<endl;
    if(start==2 && i==n) {}
    else if(i>n) {
      start++; end--;
    }
    else if(i<n){
      start--; end++;
    }
  }

}
void print18(int n) { 
  char ch='A'+n-1;
  for(int i=0;i<n;i++) {
    for(int j=0;j<=i;j++) {
      cout<<ch--<<" ";
    }
    ch='A'+n-1;
    cout<<endl;
  }

}
void print17(int n) { 
  int flag=1;
  char ch='A';
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=2*n;j++) {
      if(j<=n-i)  {
        cout<<"  ";
      }
      else {
        for(int k=0;k<flag;k++) {
          if(j+k>=n) cout<<ch--<<" ";
          else cout<<ch++<<" ";
        }
        flag+=2;
        ch='A';
        break;
      }
    }
    cout<<endl;
  
  }
}

void print16(int n) {
  char ch='A';
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
      cout<<ch<<" ";
    }
    ch++;
    cout<<endl;
  }
}
void print15(int n) {
  char ch='A';
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=n-i+1;j++) {
      cout<<ch++<<" ";
    }
    ch='A';
    cout<<endl;
  }
}
void print14(int n) {
  for(int i=0;i<n;i++) {
    for(char ch='A';ch<='A'+i;ch++) {
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}
void print13(int n) {
    int count=1;
    for(int i=0;i<=n;i++) {
      for(int j=0;j<i;j++) {
        cout<<count++<<" ";
      }
      cout<<endl;
    }
}
void print12(int n) {
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=2*n;j++) {
      if(j<=i) cout<<j;
      else if(j>=(2*n -i)+1) {
        cout<<2*n-j+1;
      }
      else cout<<" ";
    }
    cout<<endl;
  }
}

void print11(int n) {
  bool innerFlag = true;
  bool outerFlag =true;
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
        cout<< innerFlag<<" ";
        innerFlag = !innerFlag;
    }
    cout<<endl;
    outerFlag=!outerFlag;
    innerFlag=outerFlag;
  }
}

/* 10
*
**
*** 
****
*****
******  
*****
****
***    
**
*
*/

void print10(int n) {
  int count=1;
  for(int i=1;i<2*n;i++) {
    for(int j=1;j<=n;j++) {
      if(i<=n) {
        if(j<=i) cout<<"*";
        else cout<<" ";
      }
      else {
        if(i-j<=count+1) cout<<" ";
        else cout<<"*";
      }
    }
    cout<<endl;
  }
}

void print10_way2(int n) { // check again
  int count = 1;
  for(int i=1;i<=2*n;i++) {
    if(i<=n) {
      cout << string(count, '*') << endl;
      count++;
    }
    else {
      count--;
      cout << string(count, '*') << endl;
    }
  }
}

void print9(int n) {
  int count = 1;
  for(int i =1;i<=2*n;i++) {
    if(i<=n) {
      for(int j=1;j<2*n;j++) {
        if(i+j<=n) cout<<" ";
        else {
          for(int k =0;k<count;k++) {
            cout<<"*";
          }
          cout<<endl;
          count +=2;
          break;
        }
      }
    }
    else {
      count -=2;
      for(int j=1;j<2*n;j++) {
        if(i-j>n) cout<<" ";
        else {
          for(int k =0; k<count;k++) {
            cout<<"*";
          }
          cout<<endl;
          break;
        }
      }
    }
  }
}

void print8(int n) {
  for(int i=1;i<=n;i++) {
    for(int j=1;j<2*n;j++) {
      if(j<i) cout<<" ";
      else if(i+j<=2*n) cout<< "*";
    }
    cout<<endl;
  }
}

void print7(int n) {
  int count = 1;
  for(int i =1;i<=n;i++) {
    for(int j=1;j<2*n;j++) {
      if(i+j<n+1) cout<<" ";
      else {
        for(int k=1; k<=count;k++) {
          cout<<"*";
        }
        count +=2;
        cout<<endl;
        break;
      }
    }
  }
}

void print6(int n) {
  for(int i=0; i<n;i++) {
    for(int j = 0; j<n-i;j++) {
      cout<<j+1;
    }
    cout<<endl;
  }
}

void print5(int n) {
  for(int i=0; i<n;i++) {
    for(int j = 0; j<n-i;j++) {
      cout<<"*";
    }
    cout<<endl;
  }
}

void print4(int n) {
  for(int i =0;i<n;i++) {
    for(int j=0; j<=i;j++) {
      cout<< i+1 << " ";
    }
    cout<<endl;
  }
}

void print3(int n) {
  for(int i =0;i<n;i++) {
    for(int j=0; j<=i;j++) {
      cout<< j+1 << " ";
    }
    cout<<endl;
  }
}

void print2(int n) {
  for(int i = 0; i<n; i++) {
    for(int j =0; j<=i;j++) {
      cout<<"*";
    }
    cout<<endl;
  }
}

void print1(int n) {
  for(int i = 0;i<n;i++) {
    for(int j = 0; j<n;j++) {
      cout<<"* ";
    }
    cout<<"\n";
  }
}

int main() {
  print22(5);
  return 0;
}