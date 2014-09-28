#ifndef SHOT_H
#define SHOT_H

/**
Just a shot, it contains what it needs.
Note : Shots don't load their rsrcs.

**/

class Shot : public sf::Drawable // FR: Plan (cinématographique)
{
    public:
        Shot();
    private:
        std::vector<Animation> characters_;
        // Label (from SFGUI ?)
        std::vector<sf::Sound> sounds_;

};

#endif // SHOT_H
