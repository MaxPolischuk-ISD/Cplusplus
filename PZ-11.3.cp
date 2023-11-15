int main()
{
  const int m=5, n=7;

  int arr[5][7]={{3,6,2,6,2,3,1},{4,1,3,6,2,7,2},{1,0,4,6,2,9,8},
  {4,3,1,6,2,7,7},{7,8,5,6,2,3,2}};

  int sum=0;

  for(int r=0; r<m; r++)  
  {
    sum=0;
    for(int c=0; c<n; c++) 
    {
      sum=sum+arr[r][c];
    }
    cout<<"\nрядок "<<r<<" сума "<<sum;    
  }
}