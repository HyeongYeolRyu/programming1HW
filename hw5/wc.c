#include<stdio.h>

int main( )
{
	int cc = 0, ll = 1, ww = 0; // 기본적으로 첫 줄에 아무거나 입력한다면 라인의 개수는 1임
	char c;
	char wordOn = 0;

	printf("=원하는 말을 입력하세요=\n");

	while ( (c=getchar()) != EOF ){
		cc++;
		//문자일 경우
		if ( !(c=='\n' || c == '\t' || c == ' ') )
			wordOn = 1;		
		//문자 이외에 띄어쓰기, 개행, 탭인 경우
		else{
			if (c == '\n')
				ll++;

			if (wordOn){
				wordOn = 0;
				ww++;
			}
		}
	}
	
	// 단어가 마지막에 온 상태에서 바로 EOF가 올 경우 하나 더 추가해 줌
	if (wordOn)
		ww++;

	// 아무것도 입력하지 않은 경우 라인의 개수를 0으로 해줌
	if (cc == 0)
		ll = 0;
	printf("\n문자의 개수 : %d,  라인의 개수 : %d,  단어의 개수 : %d\n", cc, ll, ww);

	return 0;
}
