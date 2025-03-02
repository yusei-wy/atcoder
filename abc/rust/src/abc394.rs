fn main() {
    let mut s = String::new();
    std::io::stdin().read_line(&mut s).unwrap();

    println!("{}", s.chars().filter(|&c| c == '2').collect::<String>());
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_a() {
        assert_eq!(a("20250222"), "22222");
        assert_eq!(a("2"), "2");
        assert_eq!(a("22222000111222222"), "22222222222")
    }
}
