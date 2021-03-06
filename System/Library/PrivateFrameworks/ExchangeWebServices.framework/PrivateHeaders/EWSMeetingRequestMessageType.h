//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSMeetingMessageType.h>

@class EWSOccurrenceInfoType, EWSRecurrenceType, EWSSingleRecipientType, EWSTimeZoneType, NSArray, NSDate, NSString;

@interface EWSMeetingRequestMessageType : EWSMeetingMessageType
{
    int MeetingRequestType;
    int IntendedFreeBusyStatus;
    NSDate *Start;
    NSDate *End;
    NSDate *OriginalStart;
    BOOL IsAllDayEvent;
    int LegacyFreeBusyStatus;
    NSString *Location;
    NSString *When;
    BOOL IsMeeting;
    BOOL IsCancelled;
    BOOL IsRecurring;
    BOOL MeetingRequestWasSent;
    int CalendarItemType;
    int MyResponseType;
    EWSSingleRecipientType *Organizer;
    NSArray *RequiredAttendees;
    NSArray *OptionalAttendees;
    NSArray *Resources;
    long long ConflictingMeetingCount;
    long long AdjacentMeetingCount;
    NSArray *ConflictingMeetings;
    NSArray *AdjacentMeetings;
    NSString *_Duration;
    NSString *TimeZone;
    NSDate *AppointmentReplyTime;
    long long AppointmentSequenceNumber;
    long long AppointmentState;
    EWSRecurrenceType *Recurrence;
    EWSOccurrenceInfoType *FirstOccurrence;
    EWSOccurrenceInfoType *LastOccurrence;
    NSArray *ModifiedOccurrences;
    NSArray *DeletedOccurrences;
    EWSTimeZoneType *MeetingTimeZone;
    long long ConferenceType;
    BOOL AllowNewTimeProposal;
    BOOL IsOnlineMeeting;
    NSString *MeetingWorkspaceUrl;
    NSString *NetShowUrl;
}

+ (id)definition;
@property(retain, nonatomic) NSString *NetShowUrl; // @synthesize NetShowUrl;
@property(retain, nonatomic) NSString *MeetingWorkspaceUrl; // @synthesize MeetingWorkspaceUrl;
@property(nonatomic) BOOL IsOnlineMeeting; // @synthesize IsOnlineMeeting;
@property(nonatomic) BOOL AllowNewTimeProposal; // @synthesize AllowNewTimeProposal;
@property(nonatomic) long long ConferenceType; // @synthesize ConferenceType;
@property(retain, nonatomic) EWSTimeZoneType *MeetingTimeZone; // @synthesize MeetingTimeZone;
@property(retain, nonatomic) NSArray *DeletedOccurrences; // @synthesize DeletedOccurrences;
@property(retain, nonatomic) NSArray *ModifiedOccurrences; // @synthesize ModifiedOccurrences;
@property(retain, nonatomic) EWSOccurrenceInfoType *LastOccurrence; // @synthesize LastOccurrence;
@property(retain, nonatomic) EWSOccurrenceInfoType *FirstOccurrence; // @synthesize FirstOccurrence;
@property(retain, nonatomic) EWSRecurrenceType *Recurrence; // @synthesize Recurrence;
@property(nonatomic) long long AppointmentState; // @synthesize AppointmentState;
@property(nonatomic) long long AppointmentSequenceNumber; // @synthesize AppointmentSequenceNumber;
@property(retain, nonatomic) NSDate *AppointmentReplyTime; // @synthesize AppointmentReplyTime;
@property(retain, nonatomic) NSString *TimeZone; // @synthesize TimeZone;
@property(retain, nonatomic) NSArray *AdjacentMeetings; // @synthesize AdjacentMeetings;
@property(retain, nonatomic) NSArray *ConflictingMeetings; // @synthesize ConflictingMeetings;
@property(nonatomic) long long AdjacentMeetingCount; // @synthesize AdjacentMeetingCount;
@property(nonatomic) long long ConflictingMeetingCount; // @synthesize ConflictingMeetingCount;
@property(retain, nonatomic) NSArray *Resources; // @synthesize Resources;
@property(retain, nonatomic) NSArray *OptionalAttendees; // @synthesize OptionalAttendees;
@property(retain, nonatomic) NSArray *RequiredAttendees; // @synthesize RequiredAttendees;
@property(retain, nonatomic) EWSSingleRecipientType *Organizer; // @synthesize Organizer;
@property(nonatomic) int MyResponseType; // @synthesize MyResponseType;
@property(nonatomic) int CalendarItemType; // @synthesize CalendarItemType;
@property(nonatomic) BOOL MeetingRequestWasSent; // @synthesize MeetingRequestWasSent;
@property(nonatomic) BOOL IsRecurring; // @synthesize IsRecurring;
@property(nonatomic) BOOL IsCancelled; // @synthesize IsCancelled;
@property(nonatomic) BOOL IsMeeting; // @synthesize IsMeeting;
@property(retain, nonatomic) NSString *When; // @synthesize When;
@property(retain, nonatomic) NSString *Location; // @synthesize Location;
@property(nonatomic) int LegacyFreeBusyStatus; // @synthesize LegacyFreeBusyStatus;
@property(nonatomic) BOOL IsAllDayEvent; // @synthesize IsAllDayEvent;
@property(retain, nonatomic) NSDate *OriginalStart; // @synthesize OriginalStart;
@property(retain, nonatomic) NSDate *End; // @synthesize End;
@property(retain, nonatomic) NSDate *Start; // @synthesize Start;
@property(nonatomic) int IntendedFreeBusyStatus; // @synthesize IntendedFreeBusyStatus;
@property(nonatomic) int MeetingRequestType; // @synthesize MeetingRequestType;
- (void)dealloc;
@property(retain, nonatomic) NSString *Duration;

@end

