int main()
{
  const int m=4, n=6;

  int arr[4][7]={{3,6,2,2,3,1},{4,1,3,6,2,2},{1,0,4,6,2,8},
  {4,3,1,6,2,7}};

  for(int r=0; r<m; r++) 
  {    
    for(int c=0; c<n; c++)  
    {
      cout<<setw(4)<<arr[r][c];
    }
    cout<<"\n";    
  }  

  int sum=0;  
  for(int c=0; c<n; c++) 
  {
    sum=0;    
    for(int r=0; r<m; r++)  
    {
      sum=sum+arr[r][c];
    }
    cout<<"\nстовбець "<<c<<" сума "<<sum;    
  }

}