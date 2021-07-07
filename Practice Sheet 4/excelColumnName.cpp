class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
        string colName ="";
        int i=0;
        while(columnNumber>0)
        {
            int rem = columnNumber %26;
            if(rem == 0){
                colName+= "Z";
                columnNumber = (columnNumber/26) -1;
            }
            else{
                colName+=(rem - 1)+ 'A';
                columnNumber = (columnNumber/26);
            }
        }
            
        reverse(colName.begin(), colName.end());
        return colName;
    }
};
