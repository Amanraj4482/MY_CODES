#include<bits/stdc++.h>
using namespace std;

int main(){}


  //STL VECTORS  
  //DYNAMIC IN NATURE
    vector<int> v;

    //this both are same but emplace_back is better in than push_back
    v.push_back(1);
    v.emplace_back(2);


    vector<pairs<int,int>vec;

    v.emplace_back{1,2};

    vector<int> v(5,100);
    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);

    //v.begin is directly pointing to 
    //the memory in an cetain vector
      
    // *(v.begin())--> access of element 
    // v.begin()-->access of memory of the element stored
    // {20,10,15,6,7}
    vector<int> ::itrator it = v.begin();
    it++; //moving to the next memory location
    cout<<*(it)<" "; //it prints the value 10

    it = it +2; 
    cout<<*(it)<<" "; //prints 6 shifted location uptwo


    vector<int>::iterator it =v.end(); //it points right after comes to 7
    it--; //then it moves to 7

    // reverse iterator
    vector<int> :: iterator it = v.rend(); //this points before 20 location 
    // and after {it++;} it moves to 20

    vector<int>:: iterator it v.rbegin(); //it points to directly to 7 ;
    it++ //**it points to 6;

    cout<<v.back()<<" "; // the element is 7
    

    // loops printing iterator 
    for(vector<int> ::iterator it = v.begin(); it != v.end(); it++){
      cout<<*(it)<<" "; //prints the value of vector
    }//printing of entire vector [v.begin()] from the first elements 
    //until it not equal to the last element 

    //SHORTCUT to define iterator
    //{vector<int>::iterator}---> auto
    for(auto it = v.begin(); it != v.end(); it++){
      cout<<*(it)<<" ";}

      for(auto it:v){
        cout<<it<<" ";
      }// iteration on the datatypes..
    
    //{10,20,12,23}
    v.erase(v.begin()+1);//{10,12,23}

    //{10,20,12,23,35} 
    v.erase((v.begin()+2), v.begin()+4); //{10,20,35}  {start, end)  ***imp***   end is not included.
      

     //Insert function
     vector<int> v(2,100); //{100, 100}
     v.insert(v.begin(), 300); //{300,100,100}
     v.insert(v,begin()+1/*right after 300*/ ,2/*two two occurances of 10*/,10); //{300,10,10,100,100}

     vector<int> copy {2,50}; //{50,50};
     v.insert(v.begin(), copy.begin(), copy.end()); //{50.50,300,10,10,100,100};


      //{10,20}
      cout<<v.size();//-->(2)   will give the size of vector
      
      v.pop_back(); // {10} 

      //v1--> {10,20}   v2--> {30,40}
      v1.swap(v2); //v1--> {30,40}   v2--> {10,20}


      v.clear(); //erases the entire vector

      cout<<v.empty(); //if element presents then -->false
                      //if element not present -->true


      //LIST it gives front operations as well

      void explainList()
      list<int> ls;
      ls.push_back(2); //{2}
      ls.emplace_back(4); //{2,4}
      ls.push_front(5);//{5,2,4}
      ls.emplace_front(); //{2,4}

      //rest functions same as vector
      //begin , end rbegin , rend clear insert ,size, swap

       void explainDeque() 
       dq.push_back(1); // {1}
       dq.emplace_back(2); // {1, 2}
       dq.push_front(4); // {4, 1, 2}
       dq.emplace_front(3); // {3, 4, 1, 2}
       dq.pop_back();//{3,4,1}
       dq.pop_front(); //{4,1}
       dq.back();
       dq.front();

       //rest functions same as vector
       //begin , end ,rbegin , rend ,clear ,insert ,size , swap
      

        //STACKING --> no indexing are there in stack
        //TOP PUSH POP
        //Last in firt out

        void explainStack()

        stack<int> st;
        st.push(1); //{1}
        st.push(2); //{2,1}
        st.push(4); //{4,2,1 }
        st.push(4); //{4,4,2,1}
        st.emplace(5); //{5,4,4,2,1}
        //last is 5 and the first is the 1
        cout<<st.top(); //prits 5 
        st.pop(); //st looks like{4,4,2,1} it deletes the last element
        cout<< st.top(); //4
        cout<< st.size(); //4
        stack<int>st1;st2;
        st1.swap(st2);
        //0(1) constant 



        //QUEUE
        //FIFO First In First Out
        void explainQueue()
          queue<int> q;
          q.push(1); //{1}
          q.push(2); //{1,2}
          q.emplace(4);  //{1,2,4} 

          q.back()+= 5;  //{1,2,9}
          cout<<q.back(); //prints 9
          //Q is {1,2,9}
          cout<<q.front(); //prints 1
          q.pop();// {2,9}
          cout<<q.front(); // prints 2
          //size swap empty same as stack
          //constant time O(1)





          //PRIORITY QUEUE -->the element has the highest value stay at the top
        // tree is maintained in inside

          void explain PQ()
          pq.push(5); //{5}
          pq.push(2); //{5,2}
          pq.push(8); //{8.5.2}
          pq.emplace(10); //{10,8,5,2}

          cout<<pq.top(); //prints 8
          //size swap sempty function same as others


          //Maximum heap
          priority queue <int> , vector <int> , greater<int> pq;
          pq.push(5);//{5}
          pq.push(2);//{2,5}
          pq.push(8); //{2,5,8}
          pq.emplace(10); //{2,5,8,10}
          cout<< pq.top(); //prints 2



        //SET stores everything in sorted order and unique
        // tree is maintained in inside
        st.insert(1); //{1}
        st.emplace(2); //{1,2}
        st.insert(2); //{1,2} it doesn't stores 2 because it mot unique value
        st.insert(3); // {1,2,3}
        st.insert(4); //{1,2,3,4}

        //Functionality of insert in vector
        //can be used also that only increase
        //efficiency

        //begin(), end (), rbegin , rend (), size(),
        //empty ()and swap ()are same those of above

        //{1,2,3,4,5}
        auto st= st.find(3); // it returns an iterator wich points to the 3

        //{1,2,3,4,5}
        auto it =st.find(6); // it returns s.end();
         
        //{1,4,5}
        st.erase (5); //erases 5 // takes logarithimic time

         int cnt = st.count(1); // for true counting returns 1 and vice verse then 0
         auto it = st.find(3);
         st.erase(it); //it takes constant time








