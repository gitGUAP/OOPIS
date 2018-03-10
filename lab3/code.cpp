
class AccountRecovery
{
    private:
        int id_user;
        object timeOut;

    public:
        void send ();
        void check ();

};


void AccountRecovery::send ()
{
                
}

void AccountRecovery::check ()
{
                
}



class Session
{
    private:
        int id;
        DateTime time;
        string device;
        string ip;

    public:
        void findByIP ();
        void block ();
        void getInfo ();

};


void Session::findByIP ()
{
                
}

void Session::block ()
{
                
}

void Session::getInfo ()
{
                
}



class Review
{
    private:
        int authorID;
        string createDate;
        float rating;
        string text;

    public:
        void get ();

};


void Review::get ()
{
                
}



class Comment
{
    private:
        string text;
        int authorID;
        float rating;

    public:
        void get ();
        void remove ();
        void edit ();

};


void Comment::get ()
{
                
}

void Comment::remove ()
{
                
}

void Comment::edit ()
{
                
}



class Poster
{
    private:
        Object img;

    public:
        void fullHD ();
        void HD ();
        void miniature ();

};


void Poster::fullHD ()
{
                
}

void Poster::HD ()
{
                
}

void Poster::miniature ()
{
                
}



class Film
{
    private:
        int idFilm;
        float rating;
        string country;

    public:
        void getInfo ();
        void getThumbnail ();
        void remove ();
        void getFullData ();

};


void Film::getInfo ()
{
                
}

void Film::getThumbnail ()
{
                
}

void Film::remove ()
{
                
}

void Film::getFullData ()
{
                
}



class Description
{
    private:
        string data;
        string ending;
        string facts;

    public:
        void getFull ();
        void getMin ();

};


void Description::getFull ()
{
                
}

void Description::getMin ()
{
                
}



class Authorization
{
    public:
        void logIn ();
        void logout ();
        void singUp ();

};


void Authorization::logIn ()
{
                
}

void Authorization::logout ()
{
                
}

void Authorization::singUp ()
{
                
}



class Subscription
{
    private:
        Object paymentMethod;
        DateTime time;

    public:
        void pay ();
        void check ();

};


void Subscription::pay ()
{
                
}

void Subscription::check ()
{
                
}



class Video
{
    private:
        Object video;

    public:
        void fullHD ();
        void HD ();
        void premium ();

};


void Video::fullHD ()
{
                
}

void Video::HD ()
{
                
}

void Video::premium ()
{
                
}



class Moderator :  public User
{
    public:
        void editFilm ();
        void editСategory ();
        void banUser ();

};


void Moderator::editFilm ()
{
                
}

void Moderator::editСategory ()
{
                
}

void Moderator::banUser ()
{
                
}



class Administrator :  public Moderator
{
    public:
        void addFilm ();
        void removeFilm ();
        void addСategory ();
        void removeСategory ();
        void removeBan ();

};


void Administrator::addFilm ()
{
                
}

void Administrator::removeFilm ()
{
                
}

void Administrator::addСategory ()
{
                
}

void Administrator::removeСategory ()
{
                
}

void Administrator::removeBan ()
{
                
}



class User
{
    private:
        int id;
        string nickname;
        string email;
        string password;
        bool subscription;

    public:
        void updateInfo ();

};


void User::updateInfo ()
{
                
}



class Category
{
    private:
        string description;
        Object cults;
        int idCat;

    public:
        void update ();
        void mostPopular ();
        void add ();
        void remove ();

};


void Category::update ()
{
                
}

void Category::mostPopular ()
{
                
}

void Category::add ()
{
                
}

void Category::remove ()
{
                
}



class PremiumAccess : 
{
    public:
        void getAnyQuality ();
        void writeComment ();

};


void PremiumAccess::getAnyQuality ()
{
                
}

void PremiumAccess::writeComment ()
{
                
}



class DemoInterface : 
{
    public:
        void getHD ();

};


void DemoInterface::getHD ()
{
                
}


