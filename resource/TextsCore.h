#ifndef TextsCoreH
#define TextsCoreH

#define UNKNOWN_KEY     1
#define DIFFERENT_KEY   2
#define OLD_KEY         3

#define CORE_ERROR_STRINGS      100
#define KEY_NOT_VERIFIED        101
#define CONNECTION_FAILED       102
#define USER_TERMINATED         103
#define LOST_CONNECTION         104
#define CANT_DETECT_RETURN_CODE 105
#define COMMAND_FAILED          106
#define COMMAND_FAILED_CODEONLY 107
#define INVALID_OUTPUT_ERROR    108
#define READ_CURRENT_DIR_ERROR  109
#define SKIP_STARTUP_MESSAGE_ERROR 110
#define CHANGE_DIR_ERROR        111
#define LIST_DIR_ERROR          113
#define LIST_LINE_ERROR         114
#define RIGHTS_ERROR            115
#define CLEANUP_CONFIG_ERROR    116
#define CLEANUP_HOSTKEYS_ERROR  117
#define CLEANUP_SEEDFILE_ERROR  118
#define CLEANUP_SESSIONS_ERROR  119
#define DETECT_RETURNVAR_ERROR  120
#define LOOKUP_GROUPS_ERROR     121
#define FILE_NOT_EXISTS         122
#define CANT_GET_ATTRS          123
#define OPENFILE_ERROR          124
#define READ_ERROR              125
#define COPY_FATAL              126
#define TOREMOTE_COPY_ERROR     127
#define TOLOCAL_COPY_ERROR      128
#define SCP_EMPTY_LINE          129
#define SCP_ILLEGAL_TIME_FORMAT 130
#define SCP_INVALID_CONTROL_RECORD 131
#define COPY_ERROR              132
#define SCP_ILLEGAL_FILE_DESCRIPTOR 133
#define NOT_DIRECTORY_ERROR     134
#define CREATE_DIR_ERROR        135
#define CREATE_FILE_ERROR       136
#define WRITE_ERROR             137
#define CANT_SET_ATTRS          138
#define REMOTE_ERROR            139
#define DELETE_FILE_ERROR       140
#define LOG_ERROR               141
#define LOG_OPENERROR           142
#define RENAME_FILE_ERROR       143
#define RENAME_CREATE_FILE_EXISTS 144
#define RENAME_CREATE_DIR_EXISTS 145
#define CHANGE_HOMEDIR_ERROR    146
#define UNALIAS_ALL_ERROR       147
#define ALIAS_GROUPLIST_ERROR   148
#define UNSET_NATIONAL_ERROR    149
#define FIRST_LINE_EXPECTED     150
#define CLEANUP_INIFILE_ERROR   151
#define ATTEMPT_TO_WRITE_TO_PARENT_DIR  152
#define AUTHENTICATION_LOG      153
#define AUTHENTICATION_FAILED   154
#define NOT_CONNECTED           155
#define SAVE_KEY_ERROR          156
#define SSH_EXITCODE            158
#define SFTP_INVALID_TYPE       159
#define SFTP_VERSION_NOT_SUPPORTED 160
#define SFTP_MESSAGE_NUMBER     161
#define SFTP_STATUS_OK          162
#define SFTP_STATUS_EOF         163
#define SFTP_STATUS_NO_SUCH_FILE 164
#define SFTP_STATUS_PERMISSION_DENIED 165
#define SFTP_STATUS_FAILURE     166
#define SFTP_STATUS_BAD_MESSAGE 167
#define SFTP_STATUS_NO_CONNECTION 168
#define SFTP_STATUS_CONNECTION_LOST 169
#define SFTP_STATUS_OP_UNSUPPORTED 170
#define SFTP_ERROR_FORMAT       171
#define SFTP_STATUS_UNKNOWN     172
#define READ_SYMLINK_ERROR      173
#define EMPTY_DIRECTORY         174
#define SFTP_NON_ONE_FXP_NAME_PACKET 175
#define SFTP_REALPATH_ERROR     176
#define CHANGE_PROPERTIES_ERROR 177
#define SFTP_INITIALIZE_ERROR   178
#define TIMEZONE_ERROR          179
#define SFTP_CREATE_FILE_ERROR  180
#define SFTP_OPEN_FILE_ERROR    181
#define SFTP_CLOSE_FILE_ERROR   182
#define NOT_FILE_ERROR          183
#define RENAME_AFTER_RESUME_ERROR 184
#define CREATE_LINK_ERROR       185
#define INVALID_SHELL_COMMAND   186
#define SFTP_SERVER_MESSAGE_UNSUPPORTED 187
#define INVALID_OCTAL_PERMISSIONS 188
#define SFTP_INVALID_EOL        189
#define SFTP_UNKNOWN_FILE_TYPE  190
#define SFTP_STATUS_INVALID_HANDLE 191
#define SFTP_STATUS_NO_SUCH_PATH 192
#define SFTP_STATUS_FILE_ALREADY_EXISTS 193
#define SFTP_STATUS_WRITE_PROTECT 194
#define SFTP_STATUS_NO_MEDIA    195
#define DECODE_UTF_ERROR        196
#define CUSTOM_COMMAND_ERROR    197
#define LOCALE_LOAD_ERROR       198
#define SFTP_INCOMPLETE_BEFORE_EOF 199
#define CALCULATE_SIZE_ERROR    200
#define SFTP_PACKET_TOO_BIG     201
#define SCP_INIT_ERROR          202
#define DUPLICATE_BOOKMARK      203

#define CORE_CONFIRMATION_STRINGS 300
#define CONFIRM_PROLONG_TIMEOUT 301
#define PROMPT_SESSION_PASSWORD 302
#define PROMPT_KEY_PASSPHRASE   303
#define FILE_OVERWRITE          304
#define DIRECTORY_OVERWRITE     305
#define CIPHER_BELOW_TRESHOLD   306
#define CIPHER_TYPE_BOTH        307
#define CIPHER_TYPE_CS          308
#define CIPHER_TYPE_SC          309
#define RESUME_TRANSFER         310
#define PARTIAL_BIGGER_THAN_SOURCE 311
#define APPEND_OR_RESUME        312
#define FILE_OVERWRITE_DETAILS  313
#define READ_ONLY_OVERWRITE     314

#define CORE_INFORMATION_STRINGS 400
#define YES_STR                 401
#define NO_STR                  402
#define SESSION_INFO_TIP        403
#define VERSION                 404
#define CLOSED_ON_COMPLETION    405
#define SFTP_PROTOCOL_NAME      406
#define FS_RENAME_NOT_SUPPORTED 407
#define SFTP_NO_EXTENSION_INFO  408
#define SFTP_EXTENSION_INFO     409
#define SCP_UNIX_NAME           410
#define SCP_NO_UNIX_NAME        411

#define CORE_VARIABLE_STRINGS   600
#define PUTTY_BASED_ON          601
#define PUTTY_VERSION           602
#define PUTTY_COPYRIGHT         603
#define PUTTY_URL               604

#endif // TextsCore
