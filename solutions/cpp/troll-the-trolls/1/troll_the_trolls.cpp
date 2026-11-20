namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus{
        troll  = 0,
        guest = 1,
        user = 2,
        mod = 3
    };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
    enum class Action{
        read,
        write,
        remove
    };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer){
        if(poster == AccountStatus::troll){
            if(viewer != AccountStatus::troll){
                return false;
            }
        }
        return true;
    }

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action a, AccountStatus s){
        if(s == AccountStatus::mod){
            return true;
        }
        else if(s == AccountStatus::user || s == AccountStatus::troll){
            if(a == Action::remove){
                return false;
            }
            else{
                return true;
            }
        }
        else{
            if(a != Action::read){
                return false;
            }
            return true;
        }
        return false;
    }

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus player1, AccountStatus player2){
        //guests are denied access
        if(player1 == AccountStatus::guest || player2 == AccountStatus::guest){
            return false;
        }
        //trolls can only play with other trolls
        if(player1 == AccountStatus::troll || player2 == AccountStatus::troll){
            return player1 == AccountStatus::troll && player2 == AccountStatus::troll;
        }

        return true;
    }

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus player1, AccountStatus player2){
        int p1_priority = static_cast<int>(player1);
        int p2_priority = static_cast<int>(player2);
        return p1_priority > p2_priority;
    }
}  // namespace hellmath
