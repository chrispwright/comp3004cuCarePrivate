#ifndef STATICDEFINITIONS_H
#define STATICDEFINITIONS_H

#include <QString>

static QString PATIENT_DATA_REQUEST = "patientdatarequest";
static QString LOGIN_REQUEST = "login";
static QString ADD_PATIENT_REQUEST = "addpatient";
static QString EDIT_PATIENT_REQUEST = "editpatient";
static QString DELETE_PATIENT_REQUEST = "deletepatient";
static QString ADD_CONSULTATION_REQUEST = "addconsultation";
static QString EDIT_CONSULTATION_REQUEST = "editconsultation";
static QString ADD_FOLLOWUP_REQUEST = "addfollowup";
static QString EDIT_FOLLOWUP_REQUEST = "editfollowup";

static QString USERS_DATABASE_FILE = "users.database";
static QString PATIENTS_DATABASE_FILE = "patients.database";
static QString CONSULTATIONS_DATABASE_FILE = "consultations.database";
static QString FOLLOWUPS_DATABASE_FILE = "followups.database";
static QString UNIQUEIDS_DATABASE_FILE =  "uniqueids.database";
static QString AUDITCONFIG_DATABASE_FILE = "auditconfig.database";

static QString PHYSICIAN_HEADER = "physiciandata|";
static QString PATIENT_HEADER = "patientdata|";
static QString CONSULTATION_HEADER = "consultationdata|";
static QString CONSULTATION_ID_HEADER = "consultationid|";
static QString FOLLOWUP_HEADER = "followupdata|";
static QString FOLLOWUP_ID_HEADER = "followupid|";
static QString VALID_USER_HEADER = "validuser|";
static QString INVALID_USER_HEADER = "invaliduser|";
static QString DATA_RETRIEVAL_SUCCESS = "dataretrievalsuccessful";
static QString EDIT_CONSULTATION_SUCCESS = "editconsultationsuccessful";
static QString DATA_UPDATED = "dataupdated";
static QString INVALID_MESSAGE_TYPE = "invalidmessagetype";

static QString PIPE_DELIMETER = "|";
static QString TILDA_DELIMETER = "~";

#endif // STATICDEFINITIONS_H
