class dynamicArray{
    vector<int> arr;
    public:
        dynamicArray(){
            arr = vector<int> ();
        }
        void insertNum(int n){
            arr.push_back(n);
        }
        void removeNum(){
            arr.pop_back();
        }
        void printArray(){
            for(int a: arr){
                cout<<a<<" ";
            }
        }
};
