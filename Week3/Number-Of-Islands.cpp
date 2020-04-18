//Que Link:https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3302/

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        
        
        
        
        
        int count=0;
        
        stack<pair<int,int>>trav;
        
        int xlim=grid.size();
        if(xlim==0)
            return 0;
        int ylim=grid[0].size();
        
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(),false));
        
        cout<<"Xlim is "<<xlim<<" Ylim is "<<ylim<<endl;
       
        for(int i=0;i<xlim;i++)
        {
            for(int j=0;j<ylim;j++)
            {
                if((grid[i][j]=='1')&&(vis[i][j]==false))
                {
                    count++;
               //     cout<<"Count increased for"<<i<<" "<<j<<endl;
                    trav.push(make_pair(i,j));
                
                
                        while(trav.size()!=0)
                        {
                            
                            int x=trav.top().first;
                            int y=trav.top().second;
                         //   cout<<"Curr stack "<<x<<" "<<y<<endl;
                            vis[trav.top().first][trav.top().second]=true;
                            
                            
                             trav.pop();
                            
                              if((x>0))
                              {    
                                  if((grid[x-1][y]=='1')&&(vis[x-1][y]==false))
                                  {trav.push(make_pair(x-1,y));
                                        vis[x-1][y]=true;
                                  }
                            }

                             if((y>0))
                             {        
                                 if((grid[x][y-1]=='1')&&(vis[x][y-1]==false))
                                 {trav.push(make_pair(x,y-1));
                              vis[x][y-1]=true;}
                        }
                            
                             if((x<xlim-1))
                             {     if((grid[x+1][y]=='1')&&(vis[x+1][y]==false))  
                             {trav.push(make_pair(x+1,y));
                              vis[x+1][y]=true;
                        }
                             }

                            
                            if((y<(ylim-1)))
                            {       
                                if((grid[x][y+1]=='1')&&(vis[x][y+1]==false))
                                {trav.push(make_pair(x,y+1));
                             vis[x][y+1]=true;}
                        }

                 //           cout<<"Stack size"<<trav.size()<<endl;
                            
                           
                        }
                }
            }
        }
        
        return count;
    }
};
