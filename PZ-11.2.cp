int main()
{
  const int m=6, n=4;

  int arr[6][4]={{3,6,3,1},{4,1,7,2},{1,0,9,8},{4,3,7,7},{7,8,5,2},{14,13,0,25}};

  int counter;

  for(int c=0; c<n; c++) 
  {
    counter=0;
    for(int r=0; r<m; r++)
    {
      if(arr[r][c]%2==0)
      {
        counter++;
      }
    }
    cout<<"\nстовбець "<<c<<" к-то парних "<<counter;    
  }
}