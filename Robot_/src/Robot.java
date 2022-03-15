

public class Robot {
            int x;
            int y;
            int Matrix[][];
            boolean B_Matrix[][];
            int path[];
            public Robot() {
            	
            }
            public boolean Go(int step) {
            	switch(step) {
            	  case 0: x-=1; break;
            	  case 1: y+=1;break;
            	  case 2: x+=1;break;
            	  case 3: y-=1;break;
            	}
            	return true;
            	
            }
            public void SearchPath(int step) {
            	for(int i=0;i<4;i++) {
            		
            		if(Go(i))
            			SearchPath(step+1);
            	}
            }
            
}
