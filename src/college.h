#ifndef COLLEGE_H
#define COLLEGE_H

#include <QString>

/**
 * @brief The College class
 * Interacts with colleges in the database and displaying in the menus.
 */
class College {
private:
    int collegeID;
    QString collegeName;
public:
    /**
     * @param collegeID College's ID
     * @param collegeName College's Name
     */
    College(int collegeID, QString collegeName);
    int getCollegeID() const;
    QString getCollegeName() const;
};

#endif // COLLEGE_H
