use std::env;
use std::io::Read;

fn main() {
    let args = env::args();
    for arg in args {
        println!("{}", arg);
    }

    // wait for user input before closing the window
    println!("Press any key to exit...");
    let _ = std::io::stdin().read(&mut [0u8]).unwrap();
}