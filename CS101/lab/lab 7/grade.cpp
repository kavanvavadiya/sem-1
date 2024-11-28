#include <simplecpp>
/*
Marking Scheme:
1: Quizzes  (2x5 = 10)  best 5 of 6
2: Labs     (2x5 = 10)  best 5 of 7
3: Midsem   (30)
4: Endsem   (40)
5: Project  (pass / nopass)
Threshold for project to be considered is 80 marks (AB grade cutoff)
*/
// Function declarations
bool lab_marks(int &total_marks)
{
    int l1,l2,l3,l4,l5,l6,l7,pl,min1,min2=0,sum_lab,k=0;
    cin >> l1 >> l2 >> l3 >> l4 >> l5 >> l6 >> l7 >> pl;

    min1=min(l1,l2);
    if(min1>l3) min1 = l3;
    if(min1>l4) min1 = l4;
    if(min1>l5) min1 = l5;
    if(min1>l6) min1 = l6;
    if(min1>l7) min1 = l7;
    if(min1==l1) min2++;
    if(min1==l2) min2++;
    if(min1==l3) min2++;
    if(min1==l4) min2++;
    if(min1==l5) min2++;
    if(min1==l6) min2++;
    if(min1==l7) min2++;
    if(min1+1==l1 || min1+1==l2 || min1+1==l3 || min1+1==l4 || min1+1==l5|| min1+1==l6 || min1+1==l7) k++;

    if(min2>=2) min2=min1;
    else if (k==1) min2=min1+1;
    else min2=min1+2;


    sum_lab=l1+l2+l3+l4+l5+l6+l7-min1-min2;
    total_marks+=sum_lab;

    if(pl==1)
    {
        return true;
    }
    else if(pl==0)
    {
        return false;
    }

}
bool quiz_marks(int &total_marks)
{
    int q1,q2,q3,q4,q5,q6,pq,minn,sum_quiz;
    cin >> q1 >> q2 >> q3 >> q4 >> q5 >> q6 >> pq;

    minn=min(q1,q2);
    if(minn>q3) minn = q3;
    if(minn>q4) minn = q4;
    if(minn>q5) minn = q5;
    if(minn>q6) minn = q6;

    sum_quiz = q1 +q2 +q3+ q4+ q5+ q6 - minn ;
    total_marks += sum_quiz;

    if(pq==1) return true;
    else if(pq==0) return false;

}
int midsem_marks()
{
    int midmark;
    cin >> midmark;
    return midmark;
}
int endsem_marks()
{
    int endmark;
    cin >> endmark;
    return endmark;
}
bool project_marks(int &total_marks)
{
    int projmark,pp;
    cin >> projmark >> pp;
    if(total_marks>80)
    {
        total_marks+=projmark;
    }
    if(pp==1) return true;
    else if(pp==0) return false;
}

int calculate_grade(int total_marks, bool plag_in_quiz, bool plag_in_lab, bool plag_in_project)
{
    int grade;
    if(total_marks<=30)
    {
        grade = 0;
    }
    else if(total_marks<=40)
    {
        grade = 4;
    }
    else if(total_marks<=50)
    {
        grade = 5;
    }
    else if(total_marks<=60)
    {
        grade = 6;
    }
    else if(total_marks<=70)
    {
        grade = 7;
    }

    else if(total_marks<=80)
    {
        grade = 8;
    }
    else if(total_marks<=90)
    {
        grade = 9;
    }
    else if(total_marks<=100)
    {
        grade = 10;
    }

    if(plag_in_quiz) grade--;
    if(plag_in_lab) grade--;
    if(plag_in_project) grade--;

    if(grade<4) grade=0;



    return grade;


}
