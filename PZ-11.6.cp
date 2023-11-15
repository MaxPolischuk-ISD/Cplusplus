int main()
{
  const int m=4, n=7;

  int arr[4][7]={{3,6,2,2,3,1},{1,0,4,6,2,8},
  {4,3,1,6,2,7},{3,6,3,2,1,0}};

  for(int r=0; r<m; r++) 
  {    
    for(int c=0; c<n; c++)  
    {
      cout<<setw(4)<<arr[r][c];
    }
    cout<<"\n";    
  }  

  int min=arr[0][0];
  int row = 0;
  int col = 0;
  for(int r=0; r<m; r++)    
  {    
    for(int c=0; c<n; c++) 
    {  
      if(arr[r][c]<min){
        min=arr[r][c];
        row=r;
        col=c;
      }
    }

  }
  cout<<"\nmin =  "<<min;    
  cout<<"\nзнаходиться в "<<row+1<<" рядку "<<col+1<<" стовбці";    


}