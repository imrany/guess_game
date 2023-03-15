use std::io;

fn main(){
    println!("Guess the number!");
    println!("Please input your guess.");

    /*create a mutable variableto store the user input 
    "created a mutable variable that is currently bound to a new, empty instance of a String"*/
    let mut guess= String::new();

    // call the stdin function from the io module, which will allow us to handle user input
    //calls the read_line method on the standard input handle to get input. We’re also passing &mut guess as the argument to read_line to tell it what string to store the user input in from the user.The & indicates that this argument is a reference, which gives you a way to let multiple parts of your code access one piece of data without needing to copy that data into memory multiple times.
    //Handling Potential Failure with Result
    io::stdin().read_line(&mut guess).expect("Failed to read line");

    println!("You guessed: {guess}");
}