int random_number_splash;
char * splash() {
    random_number_splash=rand()%11;
    char * msgs[10] = {
        "Whoops, what a fine mess you're in!",
        "Time past hourmin:54? Reboot :)",
        "42. 42. 42. (if you don't get this, type Alt+2 then quit)",
        "Wow, compilation successful! Didn't expect that!",
        "Ach, an environment with no Python, no clang, no Go. I love it already!",
        "StackOverflow was useless in this project.",
        "Shouldn't have called it nerdos",
        "That beautiful feeling when your code compiles, yet that scary feeling when your code compiles first time",
        "Favourite gcc flag? Mine is -w.",
        "Life! Don't talk to me about life! - Marvin TPA"
    };
    return msgs[random_number_splash-1];
}