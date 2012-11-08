#include <stdio.h>
#include <signal.h>
#include <unistd.h>

// catch the alarm signal from kernel async
struct sigaction act;

//hanlder goes here
void sig_handler(int signo, siginfo_t *si, void* ucontext){
	printf("Got the alarm %d\n", signo);
}

int main(){
	act.sa_sigaction = sig_handler;
	act.sa_flags = SA_SIGINFO;

	/*register hanlder here*/
	sigaction(SIGALRM, &act, NULL);
	alarm(2);
	pause();
	printf("back to main\n");
	return 0;
}