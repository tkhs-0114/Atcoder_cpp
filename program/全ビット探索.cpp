int N=3;
int A[N] = {1,2,3}

for(int bit =0; bit<(1<<N); bit++){
  for(int i=0; i<N; i++){
    if(bit & (1<<i)){
      cout << A[i];
    }else{
      cout << "*";
    }
    cout << endl;
    //1つの組み合わせ
  }
}

//OUTPUT
000
100
010
110
001
101
011
111