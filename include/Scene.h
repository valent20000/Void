#ifndef SCENE_H
#define SCENE_H


class Scene : public sf::Drawable
{
    public:
        Scene(sf::Texture& background,sf::Music& backgroundMusic );
        void addShot(Shot& shot);

        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
    private:
        sf::Sprite background_;
        sf::Music backgroundMusic_;
        std::vector<Plan> shots_;
};

#endif // SCENE_H
