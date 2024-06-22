/* Sort a stack */

void sortInsert(stack<int>&s , int num){
    
    //base case
    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return ;
    }
    
    int n = s.top();
    s.pop() ;
    
    //recursive call to sort
    
    sortInsert(s, num);
    
    s.push(n);
}
void SortedStack :: sort()
{
   //base case
   if(s.empty()){
       return ;
   }
   
   int num = s.top();
   s.pop();
   
   //Recursive call 
   sort();
   
   sortInsert(s, num);
   
}