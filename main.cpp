#include <iostream>
#include <string>
#include <vector>
using namespace  std;
std::string range_extraction(const std::vector<int> & ) ;
int main() {
    vector<int> v = {-6,-3,-2,-1,0,1,3,4,5,7,8,9,10,11,14,15,17,18,19,20};
    string res = range_extraction(v);
    cout<<res;
    return 0;
}
    std::string range_extraction(const std::vector<int> &args)
    {string res,temp;
    int k=0;
    for(int i=1;i<args.size()+1;i++)
    {
        temp=to_string(args[i-1]);
        if(args[i-1]==args[i]-1)
        {

            while(args[i-1]==args[i]-1 && i <args.size())
            {
                i++;
                k++;
            }
            if(k==1)
                temp+=','+to_string(args[i-1]);
            else
                temp+='-'+to_string(args[i-1]);
            k=0;
        }
        res+=temp+',';
    }
    res.erase(res.size()-1,1);
    return res;
    }