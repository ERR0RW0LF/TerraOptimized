use std::io::{self, Write};
use std::io::Read;

fn main() {
    let mut to_do_list: Vec<String> = Vec::new();

    loop {
        println!("To-Do List:");
        for (index, item) in to_do_list.iter().enumerate() {
            println!("{}: {}", index + 1, item);
        }

        println!("\nOptions:");
        println!("1. Add a new item");
        println!("2. Remove an item");
        println!("3. Load a list");
        println!("4. Save the list");
        println!("5. Exit");

        print!("Enter your choice: ");
        io::stdout().flush().unwrap();

        let mut choice = String::new();
        io::stdin().read_line(&mut choice).unwrap();
        let choice: u32 = match choice.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        match choice {
            1 => {
                print!("Enter the new item: ");
                io::stdout().flush().unwrap();

                let mut new_item = String::new();
                io::stdin().read_line(&mut new_item).unwrap();
                to_do_list.push(new_item.trim().to_string());
            }
            2 => {
                print!("Enter the number of the item to remove: ");
                io::stdout().flush().unwrap();

                let mut item_number = String::new();
                io::stdin().read_line(&mut item_number).unwrap();
                let item_number: usize = match item_number.trim().parse() {
                    Ok(num) => num,
                    Err(_) => continue,
                };

                if item_number > 0 && item_number <= to_do_list.len() {
                    to_do_list.remove(item_number - 1);
                }
            }
            3 => {
                let mut file = std::fs::File::open("to_do_list.txt").unwrap();
                let mut contents = String::new();
                file.read_to_string(&mut contents).unwrap();
                to_do_list = contents.lines().map(|s| s.to_string()).collect();
            }
            4 => {
                let mut file = std::fs::File::create("to_do_list.txt").unwrap();
                for item in &to_do_list {
                    file.write_all(item.as_bytes()).unwrap();
                    file.write_all(b"\n").unwrap();
                }
            }
            5 => break,
            _ => continue,
        }
    }
}