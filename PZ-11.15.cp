int main()
{
  const int n=3;
  
  int arr[3][3]={
  {3,6,2},
  {1,0,4},
  {4,3,7}};    
    
  for(int r=0; r<n; r++) 
  {    
    for(int c=0; c<n; c++)  
    {
      cout<<setw(4)<<arr[r][c];
    }
    cout<<"\n";    
  }  
  int sum=0;
  for(int r=0; r<n; r++)    
  {    
    for(int c=0; c<n; c++) 
    {  
      if(r==c || r==n-1-c)
      {
        sum+=arr[r][c];
      }      
    }    
  }
  
  cout<<"\nsum diag =  "<<sum;    
}
