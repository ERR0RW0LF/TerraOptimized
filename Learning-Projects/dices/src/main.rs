// small dice program
use rand::Rng;
use std::io;

fn main() {
    println!("How many dices do you want to roll?");
    let mut dices = String::new();
    io::stdin().read_line(&mut dices).expect("Failed to read line");
    let dices: u32 = dices.trim().parse().expect("Please type a number!");

    let mut rng = rand::thread_rng();
    for _ in 0..dices {
        let dice: u32 = rng.gen_range(1..7);
        println!("You rolled a {}", dice);
    }
}
