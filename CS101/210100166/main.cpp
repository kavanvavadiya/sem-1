#include <simplecpp>
#include "shooter.h"
#include "bubble.h"

/* Simulation Vars */
const double STEP_TIME = 0.02;

/* Game Vars */
const int PLAY_Y_HEIGHT = WINDOW_Y - 50;
const int LEFT_MARGIN = 70;
const int TOP_MARGIN = 20;
const int BOTTOM_MARGIN = (PLAY_Y_HEIGHT + TOP_MARGIN);

/* Globle Vriable and string */
int levels = 1;
int loose_time = 0;
float looss = 0.2;
double total_time = 50;
float time = 0.00;
int red, green, blue;
string msg_level("Level: 1/3");
string msg_score("Score: 00");
string msg_bullet("Bullets :- 50");
string msg_time("Time: 00/50");
string life("Lives :- 3/3");

// movement of bullets
void move_bullets(vector<Bullet> &bullets)
{
    // move all bullets
    for (unsigned int i = 0; i < bullets.size(); i++)
    {
        if (!bullets[i].nextStep(STEP_TIME))
        {
            bullets.erase(bullets.begin() + i);
        }
    }
}

// movement of bubbles
void move_bubbles(vector<Bubble> &bubbles)
{
    // move all bubbles
    for (unsigned int i = 0; i < bubbles.size(); i++)
    {
        bubbles[i].nextStep(STEP_TIME * levels * 2);
    }
}

vector<Bubble> create_bubbles()
{
    // create initial bubbles in the game
    vector<Bubble> bubbles;
    bubbles.push_back(Bubble(WINDOW_X / 2.0, BUBBLE_START_Y, BUBBLE_DEFAULT_RADIUS, -BUBBLE_DEFAULT_VX, BUBBLE_DEFAULT_VY, COLOR(255, 105, 180)));
    bubbles.push_back(Bubble(WINDOW_X / 4.0, BUBBLE_START_Y, BUBBLE_DEFAULT_RADIUS, BUBBLE_DEFAULT_VX, BUBBLE_DEFAULT_VY, COLOR(255, 105, 180)));
    return bubbles;
}

void recreate_bubbles(int levell, int r, int g, int b, vector<Bubble> &bubbles)
{
    // create  bubbles in each level in the game
    bubbles.push_back(Bubble(WINDOW_X / 2.0, BUBBLE_START_Y, BUBBLE_DEFAULT_RADIUS * levell, -BUBBLE_DEFAULT_VX, 15, COLOR(r, g, b)));
    bubbles.push_back(Bubble(WINDOW_X / 4.0, BUBBLE_START_Y, BUBBLE_DEFAULT_RADIUS * levell, BUBBLE_DEFAULT_VX, 15, COLOR(r, g, b)));
    bubbles.push_back(Bubble(WINDOW_X * 3 / 4.0, BUBBLE_START_Y, BUBBLE_DEFAULT_RADIUS * levell, -BUBBLE_DEFAULT_VX,15, COLOR(r, g, b)));
}
void create_subbubbles(double x, double y, double radius, int r, int g, int b, vector<Bubble> &bubbles)
{
    // create  sub bubble
    bubbles.push_back(Bubble(x, y, radius / 2, -BUBBLE_DEFAULT_VX, 5, COLOR(r, g, b)));
    bubbles.push_back(Bubble(x, y, radius / 2, BUBBLE_DEFAULT_VX, 5, COLOR(r, g, b)));
}

// for win the game (when bullet touch the bubbles
bool winner(vector<Bullet> &bullets, vector<Bubble> &bubbles)
{

    for (unsigned int i = 0; i < bullets.size(); i++)
    {
        for (unsigned int j = 0; j < bubbles.size(); j++)
        {
            // difining horizontal and vertical confitions for bullets touch on bubbles
            bool xcord = (bubbles[j].get_center_x() + bubbles[j].get_radius()) > (bullets[i].get_center_x() - (bullets[i].get_width()) / 2) && ((bubbles[j].get_center_x() - bubbles[j].get_radius()) < (bullets[i].get_center_x() + (bullets[i].get_width()) / 2));
            bool ycord = (bubbles[j].get_center_y() + bubbles[j].get_radius()) > (bullets[i].get_center_y() - (bullets[i].get_height()) / 2) && ((bubbles[j].get_center_y() - bubbles[j].get_radius()) < (bullets[i].get_center_y() + (bullets[i].get_height()) / 2));

            if (xcord && ycord)
            {

                // store the radius and cordinates of the bubble which is touched by bullet
                int recent_radius = bubbles[j].get_radius();
                int recent_x = bubbles[j].get_center_x();
                int recent_y = bubbles[j].get_center_y();

                if (recent_radius == BUBBLE_DEFAULT_RADIUS || recent_radius == 3 * BUBBLE_DEFAULT_RADIUS / 4)
                {
                    bubbles.erase(bubbles.begin() + j);

                    // update the score
                    if (msg_score[8] < '9')
                    {
                        msg_score[8]++;
                    }
                    else
                    {
                        msg_score[7]++;
                        msg_score[8] = '0';
                    }
                }
                else
                {
                    bubbles.erase(bubbles.begin() + j);
                    create_subbubbles(recent_x, recent_y, recent_radius, red, green, blue, bubbles);

                    // update the score
                    if (msg_score[8] < '9')
                    {
                        msg_score[8]++;
                    }
                    else
                    {
                        msg_score[7]++;
                        msg_score[8] = '0';
                    }
                }

                bullets.erase(bullets.begin() + i);

                // when levels changes
                if (bubbles.empty())
                {

                    if (levels == 1)
                    {
                        Text level(WINDOW_X / 2, WINDOW_Y / 2, "level 2");
                        levels++;
                        level.setColor(COLOR(0, 25, 25));
                        wait(1);
                        bullets.clear();
                        msg_level[7]++;
                        msg_time[7] = '0';
                        msg_time[6] = '0';
                        msg_time[9]--;
                        total_time = 40;
                        time = 0;
                        red = 10;
                        green = 200;
                        blue = 60;
                        level.setColor(COLOR(255, 255, 255));
                        recreate_bubbles(levels, red, green, blue, bubbles);
                    }
                    else if (levels == 2)
                    {
                        Text level(WINDOW_X / 2, WINDOW_Y / 2, "level 3");
                        level.setColor(COLOR(0, 25, 25));
                        wait(1);
                        level.setColor(COLOR(255, 255, 255));
                        levels++;
                        msg_level[7]++;
                        msg_time[7] = '0';
                        msg_time[6] = '0';
                        msg_time[9]--;
                        total_time = 30;
                        time = 0;
                        red = 200;
                        green = 10;
                        blue = 90;
                        bullets.clear();
                        recreate_bubbles(levels, red, green, blue, bubbles);
                    }

                    else
                    {
                        Text win(WINDOW_X / 2, WINDOW_Y / 2, "congratulations!!");
                        win.setColor(COLOR(0, 255, 0));
                        bullets.clear();
                        wait(5);
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

// when bubble touch the shooter
bool loose()
{

    if (loose_time == 3)
    {
        life[9] = '0';
        Text t(WINDOW_X / 2, WINDOW_Y / 2, "Game Over"); // loosing msg
        t.setColor(COLOR(255, 0, 0));
        wait(5);
        return true;
    }
    else if (loose_time == 1)
    {
        life[9] = '2';

        return false;
    }
    else if (loose_time == 2)
    {
        life[9] = '1';

        return false;
    }
    return false;
}

void bullets_over()
{
    Text t(WINDOW_X / 2, 3* TOP_MARGIN, "No more bullets left");
    t.setColor(COLOR(255, 0, 255));
    wait(0.25);
}

bool time_out()
{
    Text t(WINDOW_X / 2, WINDOW_Y / 2, "Time Out"); // loosing msg
    t.setColor(COLOR(255, 0, 0));
    wait(5);
    return true;
}

int main()
{
    initCanvas("Bubble Trouble", WINDOW_X, WINDOW_Y);

    Line b1(0, PLAY_Y_HEIGHT, WINDOW_X, PLAY_Y_HEIGHT);
    b1.setColor(COLOR(0, 0, 255));

    Line b2(0, 2 * TOP_MARGIN, WINDOW_X, 2 * TOP_MARGIN);
    b2.setColor(COLOR(0, 0, 255));

    string msg_cmd("Cmd: _");
    Text charPressed(LEFT_MARGIN, BOTTOM_MARGIN, msg_cmd);

    Text charlevel(LEFT_MARGIN, TOP_MARGIN, msg_level);

    Text charScore(WINDOW_X - LEFT_MARGIN, BOTTOM_MARGIN, msg_score);

    // Intialize the shooter
    Shooter shooter(SHOOTER_START_X, SHOOTER_START_Y, SHOOTER_VX);

    Text charBullet(WINDOW_X/2, BOTTOM_MARGIN, msg_bullet);
    Text charTime(WINDOW_X / 2, TOP_MARGIN, msg_time);
    Text charlives(WINDOW_X - LEFT_MARGIN, TOP_MARGIN, life);

    // Initialize the bubbles
    vector<Bubble> bubbles = create_bubbles();

    // Initialize the bullets (empty)
    vector<Bullet> bullets;

    XEvent event;

    // Main game loop
    while (true)
    {
        bool pendingEvent = checkEvent(event);
        if (pendingEvent)
        {
            // Get the key pressed
            char c = charFromEvent(event);
            msg_cmd[msg_cmd.length() - 1] = c;
            charPressed.setMessage(msg_cmd);

            // Update the shooter
            if (c == 'a' || c == 'K')
                shooter.move(STEP_TIME, true);
            else if (c == 'd' || c == 'M')
                shooter.move(STEP_TIME, false);
            else if (c == 'w' || c == ' ' || c == 'H')
            {
                if(!(msg_bullet[12] == '0' && msg_bullet[11] == '0'))
                {
                bullets.push_back(shooter.shoot());
                if (msg_bullet[12] > '0')
                {
                    msg_bullet[12]--;
                }
                else
                {
                    msg_bullet[11]--;
                    msg_bullet[12] = '9';
                }

                }
                else
                bullets_over();

            }

            else if (c == 'q')
                return 0;
        }

        time = time + 0.065;

        for (double i = 1; i <= total_time; i++)
        {

            if (time > i - 0.03 && time < i + 0.03)
            {
            time = 0;
                if (msg_time[7] < '9')
                {
                    msg_time[7]++;
                }
                else
                {
                    msg_time[6]++;
                    msg_time[7] = '0';
                }
            }
        }
        // update messages.
        charlevel.setMessage(msg_level);
        charScore.setMessage(msg_score);
        charBullet.setMessage(msg_bullet);
        charTime.setMessage(msg_time);
        charlives.setMessage(life);

        // Update the bubbles
        move_bubbles(bubbles);

        // Update the bullets
        move_bullets(bullets);

        bool check = false;

        if (msg_time[6] == msg_time[9] && msg_time[7] == msg_time[10])
        {

            check = time_out();
        }

        looss = looss + STEP_TIME;
        if (looss > 0.10)
        {
            shooter.normal_color();
        }
        for (unsigned int i = 0; i < bubbles.size(); i++)
        {

            // defining vertical and horizontal conditions for bubble touches the shooter
            bool y_cond = ((bubbles[i].get_center_y() + bubbles[i].get_radius()) > (shooter.get_head_center_y() - shooter.get_head_radius()));
            bool x_cond = ((bubbles[i].get_center_x() + bubbles[i].get_radius()) > (shooter.get_head_center_x() - shooter.get_head_radius())) && ((bubbles[i].get_center_x() - bubbles[i].get_radius()) < (shooter.get_head_center_x() + shooter.get_head_radius()));

            if (y_cond && x_cond) //  || (msg_bullet[21]=='0' && msg_bullet[20]=='0' )
            {
                if (looss > 0.25)    // rective shooter after 0.25 sec
                {
                    shooter.loosing_color();
                    loose_time++;
                    check = loose();
                    looss = 0;
                    break;
                }
            }
        }
        if (check)
            break;

        check = winner(bullets, bubbles);

        if (check)

            break;

        wait(STEP_TIME);
    }
}
