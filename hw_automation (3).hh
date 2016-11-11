#ifndef HW_AUTOMATION_HH
#define HW_AUTOMATION_HH

class HW_AUTOMATION_HH
{
    private:

    public:
        //returns course object
        Course getCourse() {}

        //returns a list of assignments for a given course
        Assignment getAssignments() {}

        //gets and downloads submissions for each assignment object in a given list
        Submission getSubmissions() {}

        //downloads the submitted file from a submissions object
        void download() {}

        //compiles a submitted file
        void compile_submissions() {}

        //runs a submitted file
        void run_submissions() {}

        //grades a submitted file, giving 50 points is it compiles and another 50 points if it runs. If neither, it gives a score of 25.
        double grade(bool compiled, bool ran) {}

        //opens and displays file/source code from the submissions object
        void display_source_code() {}

        //returns grade entered by the grader, if he chooses to overwrite the default grade
        double overwrite_grade(double grade)() {}

        //adds a comment from the grader to the submission file
        void grade_comment() {}

        //returns a similarity score between the submitted file and other files
        double plag_detector() {}

        //uploads a grade and possibly a comment to the submission object
        void upload() {}
};

#endif // HW_AUTOMATION_HH
