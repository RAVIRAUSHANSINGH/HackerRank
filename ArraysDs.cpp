iterative solution:----------
 |       vector<int> reverseArray(vector<int> a) {
 |         int j = a.size()-1;
 |          for(int i=0; i<j; i++,j--){
 |           int temp= a[i];
 |           a[i]   = a[j];
 |           a[j]   = temp;                           
 |         }
 |          return a;                                   
 |       }                                            
 |_____________________________________________________


Simple Solution Using | STL  |  --------->

|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|
|  vector<int> reverseArray(vector<int> a) {   |
|   return {a.rbegin(), a.rend()};             |
|    }                                         |
|______________________________________________|



|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|
|  vector<int> reverseArray(vector<int> a) {   |
|   reverse(a.begin(),a.end());                |
|   return a;                                  |
|   }                                          |
|______________________________________________|
