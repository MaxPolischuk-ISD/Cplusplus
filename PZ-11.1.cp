int main()
{
  const int m=4, n=3;

  int arr[4][3]={{3,6,1},{4,7,2},{0,9,8},{4,3,7}};

  int counter;
  for(int r=0; r<m; r++)
  {
    counter=0;
    for(int c=0; c<n; c++)
    {
      if(arr[r][c]%2==0)
      {
        counter++;
      }
    }
    cout<<"\nряд "<<r<<" к-то парних "<<counter;    
  }

}