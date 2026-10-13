class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
         stack<double>st;
      int n = position.size();
      vector<pair<int,int>>cars(n);
      //create the pairs 
      for(int i = 0; i<n; i++)
      cars[i]={position[i],speed[i]};
     //sort according to its position in descending order
      sort(cars.begin(),cars.end(),greater<pair<int,int>>());

    //iterate through the pairs
      for(auto &[ps,spd]:cars){
        double time = (double)(target-ps)/spd;
       // if a car takes more time then it will create another fleet
        if(st.empty()||time>st.top())
        st.push(time);
      }
      //number of fleets
      return st.size();
    }
};
