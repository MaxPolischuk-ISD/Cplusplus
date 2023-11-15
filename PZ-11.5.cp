int main()
{
  const int m=3, n=4;

  int arr[3][4]={{3,6,2,1},{4,1,3,6},{1,10,4,2} };

  for(int r=0; r<m; r++) 
  {    
    for(int c=0; c<n; c++)  
    {
      cout<<setw(4)<<arr[r][c];
    }
    cout<<"\n";    
  }  

  int max=arr[0][0];
  int row = 0;
  int col = 0;
  for(int c=0; c<n; c++) 
  {    
    for(int r=0; r<m; r++)  
    {  
      if(arr[r][c]>max){
        max=arr[r][c];
        row=r;
        col=c;
      }
    }

  }
  cout<<"\nmax =  "<<max;    
  cout<<"\nзнаходиться в "<<row+1<<" рядку "<<col+1<<" стовбці";    


}
