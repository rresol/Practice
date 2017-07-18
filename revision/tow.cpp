#include<bits/stdc++.h>
using namespace std;

int min_diff = INT_MAX;
bool curr_elements[100005]={false};
bool sol[100005]={false};
int size = 0;
int n;
int elements[100005];
int sum =0;

void tugofwarutil(int size, int curr_position, int curr_sum){
  if(curr_position==n)
    return;
  if((n/2 - size)>(n-curr_position))
  {
    return;
  }
  tugofwarutil(size, curr_position+1, curr_sum);
  size++;
  curr_sum = curr_sum + elements[curr_position];
  curr_elements[curr_position] = true;
  if(size==n/2)
  {
    if(abs(sum/2-curr_sum)<min_diff)
    {
      min_diff = abs(sum/2-curr_sum);
      for(int i=0;i<n;i++)
        sol[i] = curr_elements[i];
    }
  }
  else
  {
    tugofwarutil(size,curr_position+1,curr_sum);
  }
  curr_elements[curr_position] = false;
}


void tugofwar()
{
  for(int i=0;i<n;i++)
  {
    sum+=elements[i];
  }
  tugofwarutil(0,0,0);
  cout<<"The first subset"<<endl;
  for(int i=0;i<n;i++)
  {
    if(sol[i])
      cout<<elements[i]<<"  ";
  }
  cout<<endl<<"The second subset"<<endl;
  for(int i=0;i<n;i++)
  {
    if(!sol[i])
      cout<<elements[i]<<"  ";
  }
}


int main()
{
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>elements[i];
  }
  tugofwar();
}
