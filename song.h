#ifndef SQUAREZ_H
#define SQUAREZ_H

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#endif

#ifndef NUM_PATTERNS
#define NUM_PATTERNS(struct_) (ARRAY_SIZE(((struct_ *)0)->patterns_offset))
#endif

#ifndef DEFINE_PATTERN
#define DEFINE_PATTERN(pattern_id, values) const uint8_t pattern_id[] = values;
#endif

/* pattern (channel) / bytes = 27*/
#define squarez_pattern0_data                                                                                                              \
    {                                                                                                                                      \
        ATM_CMD_M_SET_VOLUME(50), ATM_CMD_M_SET_TEMPO(10), ATM_CMD_M_CALL(4), ATM_CMD_M_CALL(5), ATM_CMD_M_CALL(6), ATM_CMD_M_CALL(7),     \
            ATM_CMD_M_CALL(8), ATM_CMD_M_CALL(9), ATM_CMD_M_CALL(10), ATM_CMD_M_CALL(11), ATM_CMD_M_CALL(12), ATM_CMD_M_CALL(13),          \
            ATM_CMD_M_CALL(14), ATM_CMD_I_STOP,                                                                                            \
    }
DEFINE_PATTERN(squarez_pattern0_array, squarez_pattern0_data);

/* pattern (channel) / bytes = 1*/
#define squarez_pattern1_data                                                                                                              \
    { ATM_CMD_I_STOP, }
DEFINE_PATTERN(squarez_pattern1_array, squarez_pattern1_data);

/* pattern (channel) / bytes = 1*/
#define squarez_pattern2_data                                                                                                              \
    { ATM_CMD_I_STOP, }
DEFINE_PATTERN(squarez_pattern2_array, squarez_pattern2_data);

/* pattern (channel) / bytes = 1*/
#define squarez_pattern3_data                                                                                                              \
    { ATM_CMD_I_STOP, }
DEFINE_PATTERN(squarez_pattern3_array, squarez_pattern3_data);

/* pattern (tune) / "test" / bytes = 65*/
#define squarez_pattern4_data                                                                                                              \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                     \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_,                  \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                  \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                  \
    }
DEFINE_PATTERN(squarez_pattern4_array, squarez_pattern4_data);

/* pattern (tune) / "test" / bytes = 63*/
#define squarez_pattern5_data                                                                                                              \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                      \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(2), ATM_CMD_I_NOTE_D5_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F5_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                                                                \
    }
DEFINE_PATTERN(squarez_pattern5_array, squarez_pattern5_data);

/* pattern (tune) / "test" / bytes = 61*/
#define squarez_pattern6_data                                                                                                              \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_,                     \
            ATM_CMD_M_DELAY_TICKS(2), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(2),           \
            ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_RETURN,                                                                                                              \
    }
DEFINE_PATTERN(squarez_pattern6_array, squarez_pattern6_data);

/* pattern (tune) / "test" / bytes = 65*/
#define squarez_pattern7_data                                                                                                              \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F5_,                     \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                    \
    }
DEFINE_PATTERN(squarez_pattern7_array, squarez_pattern7_data);

/* pattern (tune) / "test" / bytes = 65*/
#define squarez_pattern8_data                                                                                                              \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                     \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_,                  \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                  \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                  \
    }
DEFINE_PATTERN(squarez_pattern8_array, squarez_pattern8_data);

/* pattern (tune) / "test" / bytes = 65*/
#define squarez_pattern9_data                                                                                                              \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                      \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F5_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_G5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3,                  \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                   \
    }
DEFINE_PATTERN(squarez_pattern9_array, squarez_pattern9_data);

/* pattern (tune) / "test" / bytes = 65*/
#define squarez_pattern10_data                                                                                                             \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                      \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A3_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F5, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F5_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_A3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F5_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A3, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_D5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F5, ATM_CMD_M_DELAY_TICKS(1),            \
            ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G3_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                  \
    }
DEFINE_PATTERN(squarez_pattern10_array, squarez_pattern10_data);

/* pattern (tune) / "test" / bytes = 65*/
#define squarez_pattern11_data                                                                                                             \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_F5, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4,                      \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1),            \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_,                  \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                  \
    }
DEFINE_PATTERN(squarez_pattern11_array, squarez_pattern11_data);

/* pattern (tune) / "test" / bytes = 65*/
#define squarez_pattern12_data                                                                                                             \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                     \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_,                  \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4,                  \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),            \
            ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                   \
    }
DEFINE_PATTERN(squarez_pattern12_array, squarez_pattern12_data);

/* pattern (tune) / "test" / bytes = 65*/
#define squarez_pattern13_data                                                                                                             \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D4_,                    \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_D4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D4_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1),            \
            ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_B3, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                   \
    }
DEFINE_PATTERN(squarez_pattern13_array, squarez_pattern13_data);

/* pattern (tune) / "test" / bytes = 63*/
#define squarez_pattern14_data                                                                                                             \
    {                                                                                                                                      \
        ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D4_,                    \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_C5_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_D4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_D4_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_G4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1),          \
            ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_A4_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1),           \
            ATM_CMD_I_NOTE_A4_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F3_,                 \
            ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_F4, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_NOTE_B4, ATM_CMD_M_DELAY_TICKS(1),            \
            ATM_CMD_I_NOTE_F3_, ATM_CMD_M_DELAY_TICKS(1), ATM_CMD_I_RETURN,                                                                \
    }
DEFINE_PATTERN(squarez_pattern14_array, squarez_pattern14_data);

const PROGMEM struct squarez_score_data {
    uint8_t fmt;
    uint8_t num_patterns;
    uint16_t patterns_offset[15];
    uint8_t num_channels;
    uint8_t start_patterns[4];
    uint8_t squarez_pattern0[sizeof(squarez_pattern0_array)];
    uint8_t squarez_pattern1[sizeof(squarez_pattern1_array)];
    uint8_t squarez_pattern2[sizeof(squarez_pattern2_array)];
    uint8_t squarez_pattern3[sizeof(squarez_pattern3_array)];
    uint8_t squarez_pattern4[sizeof(squarez_pattern4_array)];
    uint8_t squarez_pattern5[sizeof(squarez_pattern5_array)];
    uint8_t squarez_pattern6[sizeof(squarez_pattern6_array)];
    uint8_t squarez_pattern7[sizeof(squarez_pattern7_array)];
    uint8_t squarez_pattern8[sizeof(squarez_pattern8_array)];
    uint8_t squarez_pattern9[sizeof(squarez_pattern9_array)];
    uint8_t squarez_pattern10[sizeof(squarez_pattern10_array)];
    uint8_t squarez_pattern11[sizeof(squarez_pattern11_array)];
    uint8_t squarez_pattern12[sizeof(squarez_pattern12_array)];
    uint8_t squarez_pattern13[sizeof(squarez_pattern13_array)];
    uint8_t squarez_pattern14[sizeof(squarez_pattern14_array)];
} squarez = {
    .fmt = ATM_SCORE_FMT_FULL,
    .num_patterns = NUM_PATTERNS(struct squarez_score_data),
    .patterns_offset =
        {
            offsetof(struct squarez_score_data, squarez_pattern0),
            offsetof(struct squarez_score_data, squarez_pattern1),
            offsetof(struct squarez_score_data, squarez_pattern2),
            offsetof(struct squarez_score_data, squarez_pattern3),
            offsetof(struct squarez_score_data, squarez_pattern4),
            offsetof(struct squarez_score_data, squarez_pattern5),
            offsetof(struct squarez_score_data, squarez_pattern6),
            offsetof(struct squarez_score_data, squarez_pattern7),
            offsetof(struct squarez_score_data, squarez_pattern8),
            offsetof(struct squarez_score_data, squarez_pattern9),
            offsetof(struct squarez_score_data, squarez_pattern10),
            offsetof(struct squarez_score_data, squarez_pattern11),
            offsetof(struct squarez_score_data, squarez_pattern12),
            offsetof(struct squarez_score_data, squarez_pattern13),
            offsetof(struct squarez_score_data, squarez_pattern14),
        },
    .num_channels = 4,
    .start_patterns =
        {
            0x00,   // Channel 0 entry pattern (SQUARE)
            0x01,   // Channel 1 entry pattern (SQUARE)
            0x02,   // Channel 2 entry pattern (SQUARE)
            0x03,   // Channel 3 entry pattern (NOISE)
        },
    .squarez_pattern0 = squarez_pattern0_data,
    .squarez_pattern1 = squarez_pattern1_data,
    .squarez_pattern2 = squarez_pattern2_data,
    .squarez_pattern3 = squarez_pattern3_data,
    .squarez_pattern4 = squarez_pattern4_data,
    .squarez_pattern5 = squarez_pattern5_data,
    .squarez_pattern6 = squarez_pattern6_data,
    .squarez_pattern7 = squarez_pattern7_data,
    .squarez_pattern8 = squarez_pattern8_data,
    .squarez_pattern9 = squarez_pattern9_data,
    .squarez_pattern10 = squarez_pattern10_data,
    .squarez_pattern11 = squarez_pattern11_data,
    .squarez_pattern12 = squarez_pattern12_data,
    .squarez_pattern13 = squarez_pattern13_data,
    .squarez_pattern14 = squarez_pattern14_data,
};

#endif