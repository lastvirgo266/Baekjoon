#include <vector>
#include <map>
#include <math.h>

int answer=0;

int solve(int num, int star_count, int plus_count){ 

    for(int i= num; i>=1; i--){
        
        int must_left = pow(3, plus_count/2);
        
        if(i < must_left)
            return 0;
        
        if(i == 3){
            star_count++;
            if(star_count*2 == plus_count){
                answer++;
                return 0;
            }
            
            return 0;
        }
        

        
        if(i % 3 == 0){
            solve(i/3, star_count+1, plus_count);
        }
        
        plus_count++;
        
    }
    
    
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int n){
    int _answer = 0;
    
    
    solve(n, 0,0);
    
    _answer = answer;
    
    
    
    return _answer;
}