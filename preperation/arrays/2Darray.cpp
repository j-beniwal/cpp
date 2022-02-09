#include <iostream>
#include <map>
using namespace std;

void findCommon(int mat[], int y, int x, int common[]){

}

int main(){
    int mat[4][5] = {{1, 2, 1, 4, 8},
             {3, 7, 8, 5, 1},
             {8, 7, 7, 3, 1},
             {8, 1, 2, 7, 9},
            };
    int common[5];

    map<int, int> mymap;

    // mymap[2] = 4;
    // mymap[2] += 1;

    // cout<<mymap[3]<<endl;
    // mymap.insert(pair<int,int>(1,1));
    // cout<<mymap[1]<<endl;
    // map<int,int>::iterator it;
    // it = mymap.begin();
    // while(it != mymap.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    //     it++;
    // }


    // cout<<mymap[2]<<endl;
	for (int j = 0; j < 5; j++)
		mymap[mat[0][j]] = 1;

    for(int i = 1; i < 4; i++){
        for(int j = 0; j < 5; j++){
            if(mymap[mat[i][j]]==i)
                mymap[mat[i][j]] += 1;
            else
                mymap[mat[i][j]] = 1;
        }
    }

    // cout<<"common elements are : ";
    // map<int,int>::iterator it;
    // it = mymap.begin();
    // for(auto &x : mymap){
    //     cout<<x.first<<" "<<x.second<<endl;
    //     //if(x.second == 4)
    //         // cout<<x.second<<" ";
    // }
    // cout<<endl;
    return 0;
}